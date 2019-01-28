/*
Modify secondVerse to play "The Name Game" (a.k.a. "The Banana Song", see OxfordDictionaries.com), 
by replacing "(Name)" with userName but without the first letter. 
Ex: If userName = "Katie", the program prints:

Banana-fana fo-fatie!

Note: The song verse may change, such as: Banana-fana fo-f(Name)!!! 
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   string secondVerse;
   string userName;

   secondVerse = "Banana-fana fo-f(Name)!";
   userName = "Katie";

   // Remove first character from userName
   userName = userName.substr(1, userName.length() - 1);

   /* Your solution goes here  */
   secondVerse = secondVerse.replace(16, 6, userName);

   cout << secondVerse << endl;

   return 0;
}
