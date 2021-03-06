/*
Print "Censored" if userInput contains the word "darn", else print userInput. 
End with newline.

This activity will perform three tests, 
with userInput of "That darn cat.", 
then with "Dang, that was scary!", 
then with "I'm darning your socks.". 

Also note: If the submitted code has an out-of-range access, 
the system will stop running the code after a few seconds, and report 
"Program end never reached." 
The system doesn't print the test case that caused the reported message.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   string userInput;

   userInput = "That darn cat.";

   /* Your solution goes here  */
   if (userInput.find("darn") != string::npos)
   {
      cout << "Censored" << endl;
   }
   else 
   {
      cout << userInput << endl;
   }

   return 0;
}
