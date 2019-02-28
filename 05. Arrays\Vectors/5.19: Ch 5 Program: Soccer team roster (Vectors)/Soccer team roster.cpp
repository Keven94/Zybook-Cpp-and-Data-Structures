#include <iostream>
#include <vector>
using namespace std;

int main() 
{
   vector<int> playerNumber(5);
   vector<int> playerRating(5);
   char userInput;
   unsigned int i;
   int newPlayerNumber;
   int newPlayerRating;
   bool go = true;

   for (i=0; i < playerNumber.size(); i++)
   {
      cout << "Enter player " << i+1 << "'s jersey number:" << endl;
      cin  >> playerNumber.at(i);
      cout << "Enter player " << i+1 << "'s rating:" << endl;
      cin  >> playerRating.at(i);
      cout << endl;
   }

   cout << "ROSTER" << endl;
   for (i=0; i < playerNumber.size(); i++)
   {
      cout << "Player " << i+1 << " -- Jersey number: " << playerNumber.at(i) << ", Rating: " << playerRating.at(i) << endl;
   }

   while (go)
   {    
      cout << endl;
      cout << "MENU" << endl;
      cout << "a - Add player" << endl;
      cout << "d - Remove player" << endl;
      cout << "u - Update player rating" << endl;
      cout << "r - Output players above a rating" << endl;
      cout << "o - Output roster" << endl;
      cout << "q - Quit" << endl;
      cout << endl << "Choose an option:" << endl;

      cin >> userInput;
      if (userInput == 'q')
      {
         go = false;
         break;
      }   
      else if (userInput == 'o')
      {      
         cout << "ROSTER" << endl;
         for (i=0; i < playerNumber.size(); i++)
         {
            cout << "Player " << i+1 << " -- Jersey number: " << playerNumber.at(i) << ", Rating: " << playerRating.at(i) << endl;
         }
      }
      else if (userInput == 'a')
      {
         cout << "Enter another player's jersey number:";
         cin  >> newPlayerNumber;
         playerNumber.push_back(newPlayerNumber);
         cout << "\nEnter another player's rating:" << endl;
         cin  >> newPlayerRating;
         playerRating.push_back(newPlayerRating);
      }
      else if (userInput == 'd')
      {
         cout << "Enter a jersey number: " << endl;
         cin  >> newPlayerNumber;
         for (i=0; i<playerNumber.size(); i++)
         {
            if (playerNumber.at(i) == newPlayerNumber)
            {
               playerNumber.erase(playerNumber.begin()+i);
               playerRating.erase(playerRating.begin()+i);
            }
         }
      }
      else if (userInput == 'u')
      {
         cout << "\nEnter a jersey number: " << endl;
         cin  >> newPlayerNumber;
         cout << "Enter a new rating for player: " << endl;
         cin  >> newPlayerRating;
         for (i=0; i<playerNumber.size(); i++)
         {
            if (playerNumber.at(i) == newPlayerNumber)
            {
               playerRating.at(i) = newPlayerRating;
            }
         }
      }
      else if (userInput == 'r')
      {
         cout << "\nEnter a rating:" << endl;
         cin  >> newPlayerRating;
         cout << "\nABOVE " << newPlayerRating << endl;
         for (i=0; i<playerNumber.size(); i++)
         {
            if (playerRating.at(i) > newPlayerRating)
            {
            cout << "Player " << i+1 << " -- Jersey number: " << playerNumber.at(i) << ", Rating: " << playerRating.at(i) << endl;
            }
         }
      }      
   }

   return 0;
}
