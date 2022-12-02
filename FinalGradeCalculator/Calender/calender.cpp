/* Final Grade Calculator
 * Alina Skowronek
 * 1 December 2022
 * Purpose:
 *      Create a December calender to organize assignments, study times, and finals dates 
 *      for finals season
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>


using namespace std;

 // dervived class
 /*class DayTasks : public ToDo {
    int day;
    string assignments;

    public:
        void tasks () {
            cout << "For December" << day << ", 2022 you have " << assignments <<
                " due!" << endl;
        }
 }*/


int main () {

    int numTasks = 0;
    char input;
    ofstream outputFile;
    string taskInput;
    string day;
    int i;

    // December Calender
    cout << "\n\n          December" << endl;
    cout << "----------------------------" << endl;
    cout << " S   M   T   W   Th   F   S" << endl;
    cout << "                 1    2   3" << endl;
    cout << " 4   5   6   7   8    9   10" << endl;
    cout << " 11  12  13  14  15   16  17" << endl; 
    cout << " 18  19  20  21  22   23  24" << endl;
    cout << " 25  26  27  28  29   30  31" << endl;

    cout << "\n";
    
    cout << "You have " << numTasks << " tasks for the month of December!" << endl;
        do {
            cout << "\nWould you like to add more tasks Y|N?" << endl;
            cin >> input;
            if (input == 'y') {

                cout << "Enter day that you would like to add an assignment to: " << endl;
                cin >> day;
                for (i = 0; i <= 31; i++) {
                    outputFile.open("tasksToDo.txt");
                    cout << "\nAdd task here: " << endl;
                    cin >> taskInput;
                    cout << "The task '" << taskInput << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile << taskInput << endl;
                    outputFile.close();
                    
                    break;
                }
                
            }
        } while (input == 'y');
}