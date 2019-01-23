//Assign isTeenager with true if kidAge is 13 to 19 inclusive. Otherwise, assign isTeenager with false. 


#include <iostream>
using namespace std;

int main() {
   bool isTeenager;
   int kidAge;

   kidAge = 13;

   /* Your solution goes here  */
   if((kidAge >= 13) && (kidAge <= 19))
   {
      isTeenager = true;
   }

   if (isTeenager) {
      cout << "Teen" << endl;
   }
   else {
      cout << "Not teen" << endl;
   }

   return 0;
}
