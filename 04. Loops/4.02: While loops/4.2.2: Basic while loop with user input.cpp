/*
Write an expression that executes the loop while the user enters a number greater than or equal to 0.


Note: These activities may test code with different test values. This activity will perform three tests, with userNum initially 9 and user input of 5, 2, -1, then with userNum initially 0 and user input of -17, then with userNum initially -1. See "How to Use zyBooks".

Also note: If the submitted code has an infinite loop, the system will stop running the code after a few seconds, and report "Program end never reached." The system doesn't print the test case that caused the reported message.
*/

#include <iostream>
using namespace std;

int main() {
   int userNum;

   userNum = 9;

   while (userNum >= 0) {
      cout << "Body" << endl;
      cin >> userNum;
   }
   cout << "Done." << endl;

   return 0;
}
