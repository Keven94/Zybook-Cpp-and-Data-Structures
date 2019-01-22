#include <iostream>
using namespace std;

int main() {
   int userNum, squared, cubed, userNum2;

   cout << "Enter integer:" << endl;
   cin  >> userNum;
   
   /* Type your code here */
   squared = userNum * userNum;
   cubed = userNum * userNum * userNum;
   //sum
   
   cout << "You entered: " << userNum << endl;
   cout << userNum << " squared is " << squared << endl;
   cout << "And " << userNum << " cubed is " << cubed << "!!" << endl;
   cout << "Enter another integer:" << endl;
   
   cin >> userNum2;
   
   cout << userNum << " + " << userNum2 << " is " << userNum+userNum2 << endl;
   cout << userNum << " * " << userNum2 << " is " << userNum*userNum2 << endl;

   return 0;
}
