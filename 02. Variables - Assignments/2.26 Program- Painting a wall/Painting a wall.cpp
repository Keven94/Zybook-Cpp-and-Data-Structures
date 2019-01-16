#include <iostream>
#include <cmath>                   // Note: Needed for math functions in part (3)
using namespace std;

int main() {
   
   //declaration of variables
   double wallHeight;
   double wallWidth;
   double wallArea;
   const double gallonOfPaintCovered = 350; //square feet
   double amountOfPaint;
   int gallonCans;
   
   //asking for inputs
   cout << "Enter wall height (feet):" << endl;
   cin  >> wallHeight;
   cout << "Enter wall width (feet):" << endl;
   cin  >> wallWidth;
   
   // Calculate and output wall area
   wallArea = wallHeight * wallWidth;
   cout << "Wall area: " << wallArea << " square feet"<< endl;
   
   // Calculate and output the amount of paint in gallons needed to paint the wall(1 gallon of paint covers 350squarefeet)
   amountOfPaint = wallArea/gallonOfPaintCovered;
   cout << "Paint needed: " << amountOfPaint << " gallons" << endl;

   // Calculate and output the number of 1 gallon cans needed to paint the wall, rounded up to nearest integer
   gallonCans = (amountOfPaint * 1) + 0.5;
   cout << "Cans needed: " << gallonCans << " can(s)" << endl;
   
   return 0;
}
