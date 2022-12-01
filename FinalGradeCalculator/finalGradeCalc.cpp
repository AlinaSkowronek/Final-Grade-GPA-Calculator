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
    string input;         // users input if they would like to calculate another grade
    char repChar;

    do {
    // Introduction
    cout << "\n\nWelcome to the Final Grade Calulator" << endl;
    cout << "\n\nHere you can calculate the grade needed on your final to achieve" <<
        " the desried grade in your class!" << endl;

    // Values inputed for calculation 
    cout << "\n\nEnter Current Grade: " << endl;
    cin >> currGrade;
    cout << "\n\nEnter Desired Grade: " << endl;
    cin >> desGrade;
    cout << "\n\nEnter the percentage the final is worth: " << endl;
    cin >> finalAmt;

    // Calculating the grade needed on the final
    finalGrade = ((desGrade - (1 - (finalAmt / 100)) * currGrade) / finalAmt) * 100;

    cout << "\n\nYou need a " << finalGrade << " percent on your exam to end with a " 
    << desGrade << " percent in your class!" << endl; 

    //Asking user if they would like to calculate another grade
    cout << "\n\nDo you want to calculate another grade? Y|N: ";
    cin >> input;
    repChar = tolower(input[0]);
    } while (repChar == 'y');
}

