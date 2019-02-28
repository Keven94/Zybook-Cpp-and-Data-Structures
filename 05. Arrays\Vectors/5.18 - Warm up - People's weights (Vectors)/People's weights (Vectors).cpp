#include <iostream>
#include <vector>
using namespace std;

int main() {

   /* Type your code here. */
   vector<double> peopleWeight(5);
   double totalWeight;
   double averageWeight;
   double maxWeight;
   unsigned int i;
   
   totalWeight = 0;
   
   cout << "Enter weight 1:"<< endl;
   cin >> peopleWeight.at(0);
   cout << "Enter weight 2:"<< endl;
   cin >> peopleWeight.at(1);
   cout << "Enter weight 3:"<< endl;
   cin >> peopleWeight.at(2);
   cout << "Enter weight 4:"<< endl;
   cin >> peopleWeight.at(3);
   cout << "Enter weight 5:"<< endl;
   cin >> peopleWeight.at(4);
   
   cout << "You entered: ";

     
   maxWeight = peopleWeight.at(0);
   for (i=0; i < peopleWeight.size(); i++)
   {
      cout << peopleWeight.at(i) << " ";
      totalWeight += peopleWeight.at(i);
      
      if (peopleWeight.at(i)>maxWeight)
      {
         maxWeight = peopleWeight.at(i);
      }
   }
   
   averageWeight = totalWeight/peopleWeight.size();
   
   cout << "\n\nTotal weight: " << totalWeight << endl;
   cout << "Average weight: " << averageWeight << endl;
   cout << "Max weight: " << maxWeight << endl;
      
   return 0;
}
