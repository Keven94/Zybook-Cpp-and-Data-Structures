/*
A variable like userNum can store a value like an integer. Extend the given program to print userNum values as indicated.

(1) Output the user's input. (2 pts)

Note: This zyLab outputs a newline after each user-input prompt. 

Enter integer:
4
You entered: 4

(2) Extend to output the input squared and cubed. Hint: Compute squared as userNum * userNum. (2 pts)

Enter integer:
4
You entered: 4
4 squared is 16 
And 4 cubed is 64!! 

(3) Extend to get a second user input into userNum2. Output sum and product. (1 pt)

Enter integer:
4
You entered: 4
4 squared is 16 
And 4 cubed is 64!!
Enter another integer:
5
4 + 5 is 9
4 * 5 is 20
*/


#include <iostream>
using namespace std;

int main() {
   int userNum, squared, cubed, userNum2;

   cout << "Enter integer:" << endl;
   cin  >> userNum;
   
   /* Type your code here */
   squared = userNum * userNum;
   cubed = userNum * userNum * userNum;
   //sum
   
   cout << "You entered: " << userNum << endl;
   cout << userNum << " squared is " << squared << endl;
   cout << "And " << userNum << " cubed is " << cubed << "!!" << endl;
   cout << "Enter another integer:" << endl;
   
   cin >> userNum2;
   
   cout << userNum << " + " << userNum2 << " is " << userNum+userNum2 << endl;
   cout << userNum << " * " << userNum2 << " is " << userNum*userNum2 << endl;

   return 0;
}
