/*
(1) Output this tree. (2 pts)

   *
  ***
 *****
*******
  ***


(2) Below the tree (with two blank lines), output this cat. (3 pts)

/\   /\
  o o
 =   =
  ---

Hint: A backslash \ in a string acts as an escape character, such as with a newline \n. 
So, to print an actual backslash, escape that backslash by prepending another backslash. 
Ex: The following prints a single backslash: cout << "\\";
/*


#include <iostream>
using namespace std;

int main() {

   // Draw tree
   cout << "   *"     << endl;
   cout << "  ***"    << endl;
   /* Type your code here. */
   cout << " *****"   << endl;
   cout << "*******"  << endl;
   cout << "  ***"    << endl;
   cout << endl;
   cout << endl;
   cout << "/\\   /\\" << endl;
   cout << "  o o"     << endl;
   cout << " =   ="    << endl;
   cout << "  ---"     << endl;

   return 0;
}
