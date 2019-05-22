/*
Complete the function to replace any period by an exclamation point. Ex: "Hello. I'm Miley. Nice to meet you." becomes:

"Hello! I'm Miley! Nice to meet you!"
*/

#include <iostream>
#include <string>
using namespace std;

void MakeSentenceExcited(string& sentenceText) {

   /* Your solution goes here  */
   for(int i = 0; i < sentenceText.size(); i++)
   {
      if(sentenceText.at(i) == '.')
         sentenceText.at(i) = '!';
   }
   
}

int main() {
   string testStr;

   testStr = "Hello. I'm Miley. Nice to meet you.";
   MakeSentenceExcited(testStr);
   cout << testStr;

   return 0;
}
