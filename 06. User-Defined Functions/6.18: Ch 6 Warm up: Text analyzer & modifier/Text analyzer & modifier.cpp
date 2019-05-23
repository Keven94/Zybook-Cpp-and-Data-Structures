#include <iostream>
#include <string>
using namespace std;

void OutputWithoutWhitespace(string& usrStr)
{
   for(int i = 0; i < usrStr.size(); i++)
   {
     if(usrStr[i] == ' '|| usrStr.at(i) == '\t')
        usrStr.erase(i,1);
   }
}

//Returns the number of characters in usrStr
int GetNumOfCharacters(string usrStr)
{
   int i;
   for (i = 0; i < usrStr.size(); i++){}
   return i;
}

int main() 
{
   string usrStr;
   
   cout << "Enter a sentence or phrase:" << endl;
   getline(cin, usrStr);
   cout << endl << "You entered: " << usrStr << endl << endl;

   cout << "Number of characters: " << GetNumOfCharacters(usrStr) << endl;
   OutputWithoutWhitespace(usrStr);
   cout << "String with no whitespace: " << usrStr << endl;
   
   return 0;
}
