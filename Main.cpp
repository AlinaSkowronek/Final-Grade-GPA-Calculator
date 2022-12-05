#include <iostream>
#include <stdlib.h>
#include "calender.h"
#include "finalGradeCalc.h"

using namespace std;

void calculateGPA();
//void finalGradeCalc();
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
}

void calculateGPA()
{
    int q;
    system("cls");
    cout << "-------------- GPA Calculating -----------------" << endl;
    cout << " How many subject's points do you want to calculate? : ";
    cin >> q;

    float credit[q];
    float point[q];

    cout << endl;
    for (int i = 0; i < q; i++)
    {
        cout << "Enter the credit for the subject " << i + 1 << ": ";
        cin >> credit[i];
        cout << endl;
        cout << "Enter the point of the subject " << i + 1 << ": ";
        cin >> point[i];
        cout << "-----------------------------------\n\n" << endl;
    }

    float sum = 0;
    float tot;
    for (int j = 0; j < q; j++)
    {
        tot = credit[j] * point[j];
        sum = sum + tot;
    }

    float totCr = 0;
    for (int k = 0; k < q; k++)
    {
        totCr = totCr + credit[k];
    }

    cout << "\n\n\nTotal Points: " << sum << " . Total Credits: " << totCr << " .Total GPA: " << sum / totCr << " ." << endl;


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

void finalGradeCalc()
{
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
};