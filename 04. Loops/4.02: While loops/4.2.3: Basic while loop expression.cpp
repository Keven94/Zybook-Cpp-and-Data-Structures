#include <iostream>
using namespace std;

int main() {
   int userNum;

   userNum = 40;

   /* Your solution goes here  */
   while (userNum > 1)
   {
      userNum = userNum / 2;
      cout << userNum << " ";
   }

   cout << endl;

   return 0;
}
