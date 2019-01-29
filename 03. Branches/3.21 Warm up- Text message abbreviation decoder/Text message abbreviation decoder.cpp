#include <iostream>
#include <string> // Note: This library is needed to use the string type
using namespace std;

int main() {

   string userAbv;
   
   cout << "Input an abbreviation:" << endl;
   cin  >> userAbv;
   
   if (userAbv == "LOL")
   {
      cout << "laughing out loud" << endl;
   }
   else if (userAbv == "BFF")
   {
      cout << "best friends forever" << endl;
   }
   else if (userAbv == "IMHO")
   {
      cout << "in my humble opinion" << endl;
   }
   else if (userAbv == "TMI")
   {
      cout << "too much information" << endl;
   }
   else if (userAbv == "IDK")
   {
      cout << "I don't know" << endl;
   }
   else 
   {
      cout << "Unknown" << endl;
   }

   return 0;
}
