#include <iostream>
#include <string>
using namespace std;

int main() {

   string userText;
   int itemBFF;
   int itemIDK;
   int itemJK;
   int itemTMI;
   int itemTTYL;
   
   itemBFF  = 0;
   itemIDK  = 0;
   itemJK   = 0;
   itemTMI  = 0;
   itemTTYL = 0;
   
   cout << "Enter text:" << endl;
   getline(cin, userText);
   cout << "You entered: " << userText << endl;
   
   itemBFF = userText.find("BFF");   
   if (itemBFF >= 0)
   {
      userText.replace(itemBFF, 3, "best friend forever");
   }
   //itemIDK  = userText.find("IDK");   
   if (userText.find("IDK") != string::npos)
   {
      userText.replace(itemIDK, 3, "I don't know");
   }
   
   itemJK = userText.find("JK");
   if (itemJK >= 0)
   {
      userText.replace(itemJK, 2, "just kidding");
   }
   
   itemTMI  = userText.find("TMI");   
   if (itemTMI >= 0)
   {
      userText.replace(itemTMI, 3, "too much information");
   }
   
   itemTTYL  = userText.find("TTYL");   
   if (itemTTYL >= 0)
   {
      userText.replace(itemTTYL, 4, "talk to you later");
   }
   
   cout << "Expanded: " << userText << endl;

   return 0;
}
