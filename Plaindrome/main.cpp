//Palindrome by Stefan Ene, 9/18/2019
//Sources: some algorithm suggested by Sethu Eapen
#include <cstring>
#include <iostream>

using namespace std;

int main() {
  
  char input[81]; //input string (clearly)
  char str[81]; //edited input string
  char output[81]; //final, reversed string

  int count = 0;

  //initialize strings
  for (int i = 0; i < 80; i++) {
    input[i] = 0;
    str[i] = 0;
    output[i] = 0;
  }

  //read in input sting
  cout << "Input your desired string: " << endl;
  cin.get(input, 81);
  cin.get();

  //edit the input string ad put it into str (take out punctuation)
  for (int i = 0; i < 80; i++) {
    //if lowercase, put into str
    if (input[i] >= 97 && input[i] <= 122) {
      str[count] = input[i];
      count++;
    }
    //if uppercase, make lowercade by +32, then put into str
    else if (input[i] >= 65 && input[i] <= 90) {
      str[count] = input[i] + 32;
      count++;
    }
  }

  count--;
  
  //run through str backwards and put it into output
  for (int i = 0; i < 80; i++) {
    if (str[count-i] != 0) {  //if str[i] is not null add to output
      output[i] = str[count-i];
    }
  }

  //compare strings
  if (strcmp(str, output) == 0) {
    cout << "Your input IS a palindrome!" << endl;
  } else {
    cout << "Your inoput IS NOT a palindrome!" << endl;
  }
  
  //cout << str << endl;
  //cout << output << endl;
  
  return 0;

}
