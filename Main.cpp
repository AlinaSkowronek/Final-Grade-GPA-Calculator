/* Final Grade Calculator
 * Alina Skowronek, Ainslee Cole
 * 3 December 2022
 * Purpose:
 *      Create homescreen to acess gpa calulator, final grade calculator, and calender
 *  5 December 2022
 *  AC Modified: 
 *      Create homescreen set up, add GPA calulator, inmenu for functions and homescreen
 *  6 December 2022
 *  AS Modified:
 *      Added classes and inhertience, included calender and final grade calculator
 *  7 December 2022
 *  AS Modified 2022:
 *      Added vector to GPA Calculator
 */

#include <iostream>
#include <stdlib.h>
#include "calender.h"
#include <vector>

using namespace std;

void calculateGPA();
void finalGradeCalc();
void calendar();

//base class
class personData {
    string userName;
    ofstream outputFile;
    ifstream inputFile;
    public:
        void name() {
            outputFile.open("UserName.txt");
            cout << "Enter name here: " << endl;
            cin >> userName;
            outputFile << userName << endl;
            outputFile.close();
        }
};

//Derived class
class choiceData : public personData {
    int input;
    public: 
        void openChoices () {
            cout << "Please Choose a Student Resource: ";
            cin >> input;
            switch (input)
            {
            case 1:
                calculateGPA();
                break;

            case 2:
                finalGradeCalc();
                break;
            case 3:
                calendar();
                break;
            case 4:
                exit(EXIT_SUCCESS);
                break;
            default:
                cout << "Invalid input. Please Choose Agian.\n" << endl;
                //goto sub;
                break;
            }
        }
};

int main()
{
    choiceData choiceData1;
    
    system("cls");
    int input;
    cout << "                   Student Resources            " << endl;
    cout << "--------------------------------------------------------------------------\n" << endl;
    cout << "            Menu:" << endl;
    cout << "                   1. Calculate GPA" << endl;
    cout << "                   2. Calculate Finale Grade Needed." << endl;
    cout << "                   3. Student Calendar" << endl;
    cout << "                   4. Exit Program" << endl;
    cout << "--------------------------------------------------------------------------" << endl;
sub:
    choiceData1.name();
    choiceData1.openChoices();
};

void calculateGPA()
{
    int grade = 0;
    int gradesum = 0;
    int subjects;
    vector<int> grades;

    system("cls");
    cout << "------------------ Calculating GPA ------------------" << endl;
    cout << "How many classes/subjects are you taking: ";
    cin >> subjects;
    for (int i = 0; i < subjects; i++) {
        cout << "\nPlease enter the grades for all classes." << endl;

        cout << "Enter the number corresponding with the Grade for class " << i + 1
            << "\nA = 4  B = 3  C = 2  D = 1  F = 0: ";
        cin >> grade;
        
        grades.push_back(grade);
    }

    for(int g : grades) {
        gradesum += g;
    }

    cout << "Total Grades: " << gradesum << endl;
    cout << "GPA is: " << gradesum / subjects << endl;

sub:
    int inmenu;
    cout << "\n\nPlease Choose: " << endl;
    cout << "1. Calculate Again" << endl;
    cout << "2. Go Back to Main Menu" << endl;
    cout << "3. Exit Program \n\n" << endl;
    cin >> inmenu;

    switch (inmenu)
    {
    case 1:
        calculateGPA();
        break;
    case 2:
        main();
        break;
    case 3:
        exit(EXIT_SUCCESS);

    default:
        cout << "\n\nInvalid Input. Please Choose Again: " << endl;
        goto sub;
    }
}

void finalGradeCalc() {
    double currGrade;   // The grade the user currently has in the class
    double desGrade;    // The desired grade
    double finalAmt;    // The precentage the final is worth
    double finalGrade;  // The grade the user needs on the final to get desired grade
    double decimalAmt;  //Coverting the precent of final weight into a decimal
    string input;       // users input if they would like to calculate another grade
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

    sub:
        int inmenu;
        cout << "\n\nWhat would you like to do: " << endl;
        cout << "1. Calculate Again" << endl;
        cout << "2. Go Back to Main Menu" << endl;
        cout << "3. Exit Program \n\n" << endl;
        cin >> inmenu;

        switch (inmenu)
        {
        case 1:
            finalGradeCalc();
            break;
        case 2:
            main();
            break;
        case 3:
            exit(EXIT_SUCCESS);

        default:
            cout << "\n\nInvalid Input. Please Choose Again: " << endl;
            goto sub;
        }

}

void calendar()
{
    calender ();
sub:
    int inmenu;
    cout << "\n\nPlease Choose" << endl;
    cout << "1. Go Back to Main Menu" << endl;
    cout << "2. Exit This App \n\n" << endl;
    cout << "Your Input: " << endl;
    cin >> inmenu;

    switch (inmenu)
    {
    case 1:
        main();
        break;
    case 2:
        exit(EXIT_SUCCESS);

    default:
        cout << "\n\nInvalid Input. Please Choose Again: " << endl;
        goto sub;
    }
}
