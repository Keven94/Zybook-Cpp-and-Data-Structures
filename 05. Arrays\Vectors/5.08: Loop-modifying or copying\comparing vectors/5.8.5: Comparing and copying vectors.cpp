/*
If the vector oldData is the same as the vector newData, 
print "Data matches!" ended with a newline. Otherwise, assign oldData with newData. 
Ex: If oldData = {10, 12, 18} and newData = {25, 27, 29, 23}, then oldData becomes {25, 27, 29, 23}. 
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> oldData(3);
   vector<int> newData(4);
   unsigned int i;

   oldData.at(0) = 10;
   oldData.at(1) = 12;
   oldData.at(2) = 18;

   newData.at(0) = 25;
   newData.at(1) = 27;
   newData.at(2) = 29;
   newData.at(3) = 23;

   /* Your solution goes here  */
   if (oldData == newData)
   {
      cout << "Data matches!" << endl;
   }
   else
   {
      oldData.clear();
      
      for (i = 0; i < newData.size(); ++i)
      {
         oldData.push_back(newData.at(i));
      }
   }

   for (i = 0; i < oldData.size(); ++i) {
      cout << oldData.at(i) << " ";
   }
   cout << endl;

   return 0;

}
