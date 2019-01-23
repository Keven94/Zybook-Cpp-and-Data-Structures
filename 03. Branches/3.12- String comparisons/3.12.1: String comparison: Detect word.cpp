//Write an if-else statement that prints "Goodbye" if userString is "Quit", else prints "Hello". End with newline.

#include <iostream>
#include <string>
using namespace std;

int main() {
   string userString;

   userString = "Quit";

   /* Your solution goes here  */
   if (userString == "Quit")
   {
      cout << "Goodbye" << endl;
   }
   else
   {
      cout << "Hello" << endl;
   }

   return 0;
}
