#include <iostream>
#include <string>      // Supports use of "string" data type
using namespace std;

int main() {
   //Define char and string variable
   int    userInt;
   double userDouble;
   char   userChar;
   string userString;
   
   cout << "Enter integer:" << endl;
   cin  >> userInt;
   
   //(1): Finish reading other items into variables, then output the four values on a single line separated by a space
   cout << "Enter double:" << endl;
   cin >> userDouble;
   
   cout << "Enter character:" << endl;
   cin >> userChar;
   
   cout << "Enter string:" << endl;
   cin >> userString;
   
   cout << userInt << " " << userDouble << " " << userChar << " " << userString << endl;;
   
   // FIXME (2): Output the four values in reverse
   cout << userString << " " << userChar << " " << userDouble << " " << userInt << endl;
   
   // FIXME (3): Cast the double to an integer, and output that integer
   cout << userDouble << " cast to an integer is " << static_cast<int>(userDouble) << endl;

   return 0;
}
