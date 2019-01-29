#include <iostream>
#include <string>
using namespace std;

int main() 
{
   string userText;
   
   cout << "Enter text:" << endl;
   getline(cin, userText);
   cout << "You entered: " << userText << endl;
   
   if (userText.find("BFF") != string::npos)
   {
      cout << "BFF: best friend forever" << endl;
   }
   if (userText.find("IDK") != string::npos)
   {
      cout << "IDK: I don't know" << endl;
   }
   if (userText.find("JK") != string::npos)
   {
      cout << "JK: just kidding" << endl;
   }
   if (userText.find("TMI") != string::npos)
   {
      cout << "TMI: too much information" << endl;
   }
   if (userText.find("TTYL") != string::npos)
   {
      cout << "TTYL: talk to you later" << endl;
   }

   return 0;
}
