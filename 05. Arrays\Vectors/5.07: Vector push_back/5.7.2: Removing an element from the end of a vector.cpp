//Remove the last element from vector ticketList. 

#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> ticketList(3);
   unsigned int i;

   ticketList.at(0) = 5;
   ticketList.at(1) = 100;
   ticketList.at(2) = 12;

   /* Your solution goes here  */
   ticketList.pop_back();

   for (i = 0; i < ticketList.size(); ++i) {
      cout << ticketList.at(i) << " ";
   }
   cout << endl;

   return 0;
}
