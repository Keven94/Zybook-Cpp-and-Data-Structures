//Write an expression that continues to bid until the user enters 'n'. 

#include <iostream>
#include <cstdlib>   // Enables use of rand()
using namespace std;

int main() {
   char keepGoing;
   int nextBid;

   srand(5);
   nextBid = 0;
   keepGoing = 'y';

   while (keepGoing != 'n') {
      nextBid = nextBid + (rand()%10 + 1);
      cout << "I'll bid $" << nextBid << "!" << endl;
      cout << "Continue bidding? (y/n) ";
      cin >> keepGoing;
   }
   cout << endl;

   return 0;
}
