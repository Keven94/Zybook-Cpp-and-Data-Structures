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

void GetNumOfNonWSCharacters(const string& str)
{
   int count = 0;
   
   for (size_t i = 0; i < str.size(); i++)
   {
      if(str[i] != ' ')
         count++;
   }
   
   cout << "Number of non-whitespace characters: " << count << endl;
   return;
}

void GetNumOfWords(const string& str)
{  
   int count = 0;
   
   for (size_t i = 0; i < str.size(); i++)
   {
      if(str[i] == ' ')
         count++;
   }
   
   cout << "Number of words: " << count + 1 << endl;
   return;
}

void FindText(string textToFind, string str)
{  
   int count = 0;
   size_t position = str.find(textToFind, 0); //the first textToFind after position 0;
   
   while(position != string::npos)                             //position exist
   {
      count++;                                               //counts first possbile wordOrPhrase 
      position = str.find(textToFind, position + 1);       //now to serach next textToFind avaliable
   }
   
   cout << "\"" << textToFind << "\" instances: " << count << endl;
   
   return;
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
   for(size_t i = 0; i < str.size(); i++)
   {
      if(str[i] == ' ' && str[i - 1] == ' ')
            str.erase(i, 1);
   }
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
               cout << "Bye bye :)" << endl;
               go = false; 
               break;
         case 'c': 
               GetNumOfNonWSCharacters(userString); 
               PrintMenu();
               break;
         case 'w':
               GetNumOfWords(userString); 
               PrintMenu();
               break;
         case 'f':   
               cout << "Enter a word or phrase to be found:" << endl;
               cin.ignore();
               getline(cin, textToFind);
               FindText(textToFind, userString);
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
