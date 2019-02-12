//Complete the code provided to add the appropriate amount to totalDeposit. 


#include <iostream>
using namespace std;

int main() {
   enum AcceptedCoins {ADD_QUARTER, ADD_DIME, ADD_NICKEL, ADD_UNKNOWN};
   int totalDeposit;
   int usrInput;

   totalDeposit = 0;

   cout << "Add coin: 0 (add 25), 1 (add 10), 2 (add 5).  ";
   cin >> usrInput;

   if (usrInput == ADD_QUARTER) {
      totalDeposit = totalDeposit + 25;
   }

   /* Your solution goes here  */
   else if (usrInput == ADD_DIME)
   {
      totalDeposit += 10;
   }
   else if (usrInput == ADD_NICKEL)
   {
      totalDeposit += 5;
   }
   else {
      cout << "Invalid coin selection." << endl;
   }

   cout << "totalDeposit: " << totalDeposit << endl;

   return 0;
}
