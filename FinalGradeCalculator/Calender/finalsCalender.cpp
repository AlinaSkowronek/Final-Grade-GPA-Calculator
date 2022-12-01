/* Final Grade Calculator
 * Alina Skowronek
 * 1 December 2022
 * Purpose:
 *      Create a December calender to organize assignments, study times, and finals dates 
 *      for finals season
*/

#include <iostream>
#include <string>
using namespace std;

class Calender {
    public:
        int numDay;         //Days in the month
        string monthName;   // Name of the month
    };

int main () {
    Calender month1;
    month1.numDay = 31;
    month1.monthName = "January";

    cout << "     " << month1.monthName << endl;
    cout << "-----------------" << endl;
    cout << month1.numDay << "\n";
    
}