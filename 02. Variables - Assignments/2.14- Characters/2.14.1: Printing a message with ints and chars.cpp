/*
Print a message telling a user to press the letterToQuit key numPresses times to quit. 
End with newline. Ex: If letterToQuit = 'q' and numPresses = 2, print:

Press the q key 2 times to quit. 
*/


#include <iostream>
using namespace std;

int main() {
   char letterToQuit;
   int  numPresses;

   letterToQuit = '?';
   numPresses = 2;

   /* Your solution goes here  */
   cout << "Press the " << letterToQuit << " key " << numPresses << " times to quit." << endl;
   
   return 0;
}
