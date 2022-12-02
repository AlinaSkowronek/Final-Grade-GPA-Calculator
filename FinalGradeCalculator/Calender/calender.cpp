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

int main () {

    char input;             // Input if user would like to add a task or not
    char homeInput;         //Input if user wants to return to home screen
    char taskView;          //Input to see tasks added previously
    ofstream outputFile;
    ifstream inputFile;
    string taskInput;
    string day;             // The day the user chooses to add a task to
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
    
    cout << "Welcome to your calender!" << endl;
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
            else {
                cout << "Would you like to view tasks due for a certain day?" << endl;
                cin >> taskView;
                if (taskView == 'y') {
                    cout << "What day would you like to look at?" << endl;
                    cin >> day;
                    inputFile.open("tasksToDo.txt");
                    inputFile >> taskInput;
                    cout << taskInput << endl;
                    inputFile.close();
                    


                }
            
                }

        } while (input == 'y');

        
}