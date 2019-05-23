#include <iostream>
#include <string>
using namespace std;

void PrintMenu()
{   
   cout << endl;
   cout << "MENU" << endl;
   cout << "c - Number of non-whitespace characters" << endl;
   cout << "w - Number of words" << endl;
   cout << "f - Find text" << endl;
   cout << "r - Replace all !'s" << endl;
   cout << "s - Shorten spaces" << endl;
   cout << "q - Quit" << endl;
   cout << endl;
   cout << "Choose an option:" << endl;
}

int GetNumOfNonWSCharacters(const string& str)
{
   int count = 0;
   
   for (size_t i = 0; i < str.size(); i++)
   {
      if(str[i] != ' ')
         count++;
   }
   
   return count;
}

int GetNumOfWords(const string& str)
{  
   int count = 0;
   
   for (size_t i = 0; i < str.size(); i++)
   {
      if(str[i] == ' ' && isalpha(str[i + 1])) //if it has a space and a letter after is a word
         count++;
   }
   
   return count + 1;
}

int FindText(string textToFind, string str)
{  
   int count = 0;
   size_t position = str.find(textToFind, 0); //the first textToFind after position 0;
   
   while(position != string::npos)                             //position exist
   {
      count++;                                               //counts first possbile wordOrPhrase 
      position = str.find(textToFind, position + 1);       //now to serach next textToFind avaliable
   }
   
   return count;
}

void ReplaceExclamation(string& str)
{
   for (size_t i = 0; i < str.size(); i++)
   {
      if(str.at(i) == '!')
         str.at(i) = '.';
   }
}

void ShortenSpace(string& str)
{  
   string newString; 
   int i;
  
   while(true) 
   { 
      index = str.find("  ");
      if (i == -1)
         break;
      newString = str.substr(0, i);
      str.replace(0, i + 1, newString);
   }
  
  return;
}
  

int main() 
{
   string userString, textToFind;
   char userInput;
   bool go = true;
   
   cout << "Enter a sample text:" << endl;
   getline(cin, userString);
   cout << endl << "You entered: " << userString << endl;
   
   PrintMenu();

   while (go)
   {
      cin >> userInput;
      switch(userInput)
      {
         case 'q':
               go = false; 
               break;
         case 'c': 
               cout << "Number of non-whitespace characters: " << GetNumOfNonWSCharacters(userString) << endl;
               PrintMenu();
               break;
         case 'w':
               cout << "Number of words: " << GetNumOfWords(userString) << endl;
               PrintMenu();
               break;
         case 'f':   
               cout << "Enter a word or phrase to be found:" << endl;
               cin.ignore();
               getline(cin, textToFind);
               cout << "\"" << textToFind << "\" instances: " << FindText(textToFind, userString) << endl;
               PrintMenu();
               break;
         case 'r':
               ReplaceExclamation(userString);
               cout << "Edited text: " << userString << endl;
               PrintMenu();
               break;
         case 's':
               ShortenSpace(userString);
               cout << "Edited text: " << userString << endl;
               PrintMenu();
               break;
         default: 
               PrintMenu(); break;
      }
   }
   
   return 0;
}
