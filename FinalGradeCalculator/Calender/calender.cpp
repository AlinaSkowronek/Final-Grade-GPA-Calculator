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
    ofstream outputFile1, outputFile2, outputFile3, outputFile4, outputFile5, outputFile6,
    outputFile7, outputFile8, outputFile9, outputFile10, outputFile11, outputFile12,
    outputFile13, outputFile14, outputFile15, outputFile16, outputFile17, outputFile18,
    outputFile19, outputFile20, outputFile21, outputFile22, outputFile23, outputFile24,
    outputFile25, outputFile26, outputFile27, outputFile28, outputFile29, outputFile30,
    outputFile31;
    ifstream inputFile1, inputFile2, inputFile3, inputFile4, inputFile5, inputFile6,
    inputFile7, inputFile8, inputFile9, inputFile10, inputFile11, inputFile12,
    inputFile13, inputFile14, inputFile15, inputFile16,inputFile17, inputFile18,
    inputFile19, inputFile20, inputFile21, inputFile22, inputFile23, inputFile24,
    inputFile25, inputFile26, inputFile27, inputFile28, inputFile29, inputFile30,
    inputFile31;
    string taskInput1, taskInput2, taskInput3, taskInput4, taskInput5, taskInput6,
    taskInput7, taskInput8, taskInput9, taskInput10, taskInput11, taskInput12,
    taskInput13, taskInput14, taskInput15, taskInput16, taskInput17, taskInput18,
    taskInput19, taskInput20, taskInput21, taskInput22, taskInput23, taskInput24,
    taskInput25, taskInput26, taskInput27, taskInput28, taskInput29, taskInput30,
    taskInput31;
    int day;             // The day the user chooses to add a task to

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

                switch (day) {
                    case 1: 
                    outputFile1.open("Decmber1.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput1);
                    cout << "\nThe task '" << taskInput1 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile1 << taskInput1 << endl;
                    outputFile1.close();
                    break;
                    case 2: 
                    outputFile2.open("Decmber2.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput2);
                    cout << "\nThe task '" << taskInput2 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile2 << taskInput2 << endl;
                    outputFile2.close();
                    break;

                    case 3:
                    outputFile3.open("Decmber3.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin,taskInput3);
                    cout << "\nThe task '" << taskInput3 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile3 << taskInput3 << endl;
                    outputFile3.close();
                    break;

                    case 4:
                    outputFile4.open("Decmber4.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput4);
                    cout << "\nThe task '" << taskInput4 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile4 << taskInput4 << endl;
                    outputFile4.close();
                    break;

                    case 5:
                    outputFile5.open("Decmber5.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput5);
                    cout << "\nThe task '" << taskInput5 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile5 << taskInput5 << endl;
                    outputFile5.close();
                    break;

                    case 6:
                    outputFile6.open("Decmber6.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput6);
                    cout << "\nThe task '" << taskInput6 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile6 << taskInput6 << endl;
                    outputFile6.close();
                    break;

                    case 7:
                    outputFile7.open("Decmber7.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput7);
                    cout << "\nThe task '" << taskInput7 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile7 << taskInput7 << endl;
                    outputFile7.close();
                    break;
                    
                    case 8:
                    outputFile8.open("Decmber8.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput8);
                    cout << "\nThe task '" << taskInput8 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile8 << taskInput8 << endl;
                    outputFile8.close();
                    break;

                    case 9:
                    outputFile9.open("Decmber9.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput9);
                    cout << "\nThe task '" << taskInput9 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile9 << taskInput9 << endl;
                    outputFile9.close();
                    break;

                    case 10:
                    outputFile10.open("Decmber10.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput10);
                    cout << "\nThe task '" << taskInput10 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile10 << taskInput10 << endl;
                    outputFile10.close();
                    break;

                    case 11:
                    outputFile11.open("Decmber11.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput11);
                    cout << "\nThe task '" << taskInput11 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile11 << taskInput11 << endl;
                    outputFile11.close();
                    break;

                    case 12:
                    outputFile12.open("Decmber12.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput12);
                    cout << "\nThe task '" << taskInput12 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile12 << taskInput12 << endl;
                    outputFile12.close();
                    break;

                    case 13:
                    outputFile13.open("Decmber13.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput13);
                    cout << "\nThe task '" << taskInput13 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile13 << taskInput13 << endl;
                    outputFile13.close();
                    break;

                    case 14:
                    outputFile14.open("Decmber14.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput14);
                    cout << "\nThe task '" << taskInput14 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile14 << taskInput14 << endl;
                    outputFile14.close();
                    break;

                    case 15:
                    outputFile15.open("Decmber15.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput15);
                    cout << "\nThe task '" << taskInput15 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile15 << taskInput15 << endl;
                    outputFile15.close();
                    break;

                    case 16:
                    outputFile16.open("Decmber16.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput16);
                    cout << "\nThe task '" << taskInput16 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile16 << taskInput16 << endl;
                    outputFile16.close();
                    break;

                    case 17:
                    outputFile17.open("Decmber17.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput17);
                    cout << "\nThe task '" << taskInput17 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile17 << taskInput17 << endl;
                    outputFile17.close();
                    break;

                    case 18:
                    outputFile18.open("Decmber18.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput18);
                    cout << "\nThe task '" << taskInput18 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile18 << taskInput18 << endl;
                    outputFile18.close();
                    break;

                    case 19:
                    outputFile19.open("Decmber19.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput19);
                    cout << "\nThe task '" << taskInput19 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile19 << taskInput19 << endl;
                    outputFile19.close();
                    break;

                    case 20:
                    outputFile20.open("Decmber20.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput20);
                    cout << "\nThe task '" << taskInput20 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile20 << taskInput20 << endl;
                    outputFile20.close();
                    break;

                    case 21:
                    outputFile21.open("Decmber21.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput21);
                    cout << "\nThe task '" << taskInput21 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile21 << taskInput21 << endl;
                    outputFile21.close();
                    break;

                    case 22:
                    outputFile22.open("Decmber22.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput22);
                    cout << "\nThe task '" << taskInput22 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile22 << taskInput22 << endl;
                    outputFile22.close();
                    break;

                    case 23:
                    outputFile23.open("Decmber23.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput23);
                    cout << "\nThe task '" << taskInput23 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile23 << taskInput23 << endl;
                    outputFile23.close();
                    break;

                    case 24:
                    outputFile24.open("Decmber24.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput24);
                    cout << "\nThe task '" << taskInput24 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile24 << taskInput24 << endl;
                    outputFile24.close();
                    break;

                    case 25:
                    outputFile25.open("Decmber25.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput25);
                    cout << "\nThe task '" << taskInput25 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile25 << taskInput25 << endl;
                    outputFile25.close();
                    break;

                    case 26:
                    outputFile26.open("Decmber26.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput26);
                    cout << "\nThe task '" << taskInput26 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile26 << taskInput26 << endl;
                    outputFile26.close();
                    break;

                    case 27:
                    outputFile27.open("Decmber27.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput27);
                    cout << "\nThe task '" << taskInput27 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile27 << taskInput27 << endl;
                    outputFile27.close();
                    break;

                    case 28:
                    outputFile28.open("Decmber28.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput28);
                    cout << "\nThe task '" << taskInput28 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile28 << taskInput28 << endl;
                    outputFile28.close();
                    break;

                    case 29:
                    outputFile29.open("Decmber29.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput29);
                    cout << "\nThe task '" << taskInput29 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile29 << taskInput29 << endl;
                    outputFile29.close();
                    break;

                    case 30: 
                    outputFile30.open("Decmber30.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput30);
                    cout << "\nThe task '" << taskInput30 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile30 << taskInput30 << endl;
                    outputFile30.close();
                    break;

                    case 31:
                    outputFile31.open("Decmber31.txt");
                    cout << "\nAdd task here: " << endl;
                    cin.ignore();
                    getline(cin, taskInput31);
                    cout << "\nThe task '" << taskInput31 << "' has been added to your planner "
                        << "for December " << day << ", 2022." << endl;
                    outputFile31 << taskInput31 << endl;
                    outputFile31.close();
                    break;
                }            
            }
            else {

                cout << "\n\nWould you like to view tasks due for a certain day?" << endl;
                cin >> taskView;
                if (taskView == 'y') {
                    do {
                        cout << "\nWhat day would you like to look at?" << endl;
                        cin >> day;

                        switch (day) {
                            case 1:
                            inputFile1.open("December1.txt");
                            inputFile1 >> taskInput1;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput1 << "' due!" << endl;
                            inputFile1.close();
                            cout << "\n\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 2:
                            inputFile2.open("December2.txt");
                            inputFile2 >> taskInput2;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput2 << "' due!" << endl;
                            inputFile2.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 3:
                            inputFile3.open("December3.txt");
                            inputFile3 >> taskInput3;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput3 << "' due!" << endl;
                            inputFile3.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 4:
                            inputFile4.open("December4.txt");
                            inputFile4 >> taskInput4;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput4 << "' due!" << endl;
                            inputFile4.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 5:
                            inputFile5.open("December5.txt");
                            inputFile5 >> taskInput5;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput5 << "' due!" << endl;
                            inputFile5.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 6:
                            inputFile6.open("December6.txt");
                            inputFile6 >> taskInput6;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput6 << "' due!" << endl;
                            inputFile6.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 7:
                            inputFile7.open("December7.txt");
                            inputFile7 >> taskInput7;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput7 << "' due!" << endl;
                            inputFile7.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 8:
                            inputFile8.open("December8.txt");
                            inputFile8 >> taskInput8;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput8 << "' due!" << endl;
                            inputFile8.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 9:
                            inputFile9.open("December9.txt");
                            inputFile9 >> taskInput9;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput9 << "' due!" << endl;
                            inputFile9.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 10:
                            inputFile10.open("December10.txt");
                            inputFile10 >> taskInput10;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput10 << "' due!" << endl;
                            inputFile10.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 11:
                            inputFile11.open("December11.txt");
                            inputFile11 >> taskInput11;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput11 << "' due!" << endl;
                            inputFile11.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 12:
                            inputFile12.open("December12.txt");
                            inputFile12 >> taskInput12;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput12 << "' due!" << endl;
                            inputFile12.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 13:
                            inputFile13.open("December13.txt");
                            inputFile13 >> taskInput13;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput13 << "' due!" << endl;
                            inputFile13.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 14:
                            inputFile14.open("December14.txt");
                            inputFile14 >> taskInput14;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput14 << "' due!" << endl;
                            inputFile14.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 15:
                            inputFile15.open("December15.txt");
                            inputFile15 >> taskInput15;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput15 << "' due!" << endl;
                            inputFile15.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 16:
                            inputFile16.open("December16.txt");
                            inputFile16 >> taskInput16;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput16 << "' due!" << endl;
                            inputFile16.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 17:
                            inputFile17.open("December17.txt");
                            inputFile17 >> taskInput17;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput17 << "' due!" << endl;
                            inputFile17.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 18:
                            inputFile18.open("December18.txt");
                            inputFile18 >> taskInput18;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput18 << "' due!" << endl;
                            inputFile18.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 19:
                            inputFile19.open("December19.txt");
                            inputFile19 >> taskInput19;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput19 << "' due!" << endl;
                            inputFile19.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 20:
                            inputFile20.open("December20.txt");
                            inputFile20 >> taskInput20;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput20 << "' due!" << endl;
                            inputFile20.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 21:
                            inputFile21.open("December21.txt");
                            inputFile21 >> taskInput21;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput21 << "' due!" << endl;
                            inputFile21.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 22:
                            inputFile22.open("December22.txt");
                            inputFile22 >> taskInput22;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput22 << "' due!" << endl;
                            inputFile22.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 23:
                            inputFile23.open("December23.txt");
                            inputFile23 >> taskInput23;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput23 << "' due!" << endl;
                            inputFile23.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 24:
                            inputFile24.open("December24.txt");
                            inputFile24 >> taskInput24;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput24 << "' due!" << endl;
                            inputFile24.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 25:
                            inputFile25.open("December25.txt");
                            inputFile25 >> taskInput25;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput25 << "' due!" << endl;
                            inputFile25.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 26:
                            inputFile26.open("December26.txt");
                            inputFile26 >> taskInput26;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput26 << "' due!" << endl;
                            inputFile26.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 27:
                            inputFile27.open("December27.txt");
                            inputFile27 >> taskInput27;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput27 << "' due!" << endl;
                            inputFile27.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 28:
                            inputFile28.open("December28.txt");
                            inputFile28 >> taskInput28;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput28 << "' due!" << endl;
                            inputFile28.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 29:
                            inputFile29.open("December29.txt");
                            inputFile29 >> taskInput29;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput29 << "' due!" << endl;
                            inputFile29.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 30:
                            inputFile30.open("December30.txt");
                            inputFile30 >> taskInput30;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput30 << "' due!" << endl;
                            inputFile30.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;

                            case 31:
                            inputFile31.open("December31.txt");
                            inputFile31 >> taskInput31;
                            cout << "\nOn December " << day << ", 2022 you have '" <<
                                taskInput31 << "' due!" << endl;
                            inputFile31.close();
                            cout << "\nWould you like to view anymore days? " << endl;
                            cin >> taskView;
                            break;
                        }

                    } while (taskView == 'y');
                }
            } 
        } while (input == 'y');

        
}