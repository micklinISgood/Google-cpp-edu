#include <iostream>
using namespace std;

int main() {
  string str1 = "To be or not to be, that is the question";
  string str2 = "only ";
  string str3 = str1.substr(6, 12);
  // str3 = "or not";
  str1.insert(32, str2);
  // str1 = "To be or not to be, that is the only question"; 
  str1.replace(str1.find("to be", 0), 5, "to jump");
  // str1 = "To be or not to jump, that is the only question"; 
  str1.erase(9, 4);
  // str1 = "To be or to jump, that is the only question"; 
  cout << str1 << endl;
  for (int i = 0; i < str3.length(); i++)
    cout << str3[i]; cout << endl;
  /*
     wrong: for loop without braces only read one line so output the whole str3 and new line once.  
     o
     r
      
     n
     o
     t
  */
  return 0;
}
