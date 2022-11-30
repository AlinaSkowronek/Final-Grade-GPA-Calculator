/* Final Grade Calculator
 * Alina Skowronek
 * 30 November 2022
 * Purpose:
 *      Create a program to show the user the grade needed on their final to 
 *      achieve the desired grade
*/

#include <iostream>
#include <string>
using namespace std;

int main () {

    double currGrade;   // The grade the user currently has in the class
    double desGrade;    // The desired grade
    double finalAmt;    // The precentage the final is worth
    double finalGrade;  // The grade the user needs on the final to get desired grade
    double decimalAmt;  //Coverting the precent of final weight into a decimal
    cout << "\n\nWelcome to the Final Grade Calulator" << endl;
    cout << "\n\nHere you can calculate the grade needed on your final to achieve" <<
        " the desried grade in your class!" << endl;

    cout << "\n\nEnter Current Grade: " << endl;
    cin >> currGrade;
    cout << "\n\nEnter Desired Grade: " << endl;
    cin >> desGrade;
    cout << "\n\nEnter the percent the final is worth: " << endl;
    cin >> finalAmt;

    finalGrade = ((desGrade - (1 - (finalAmt / 100)) * currGrade) / finalAmt) * 100;

    cout << finalGrade;
}

