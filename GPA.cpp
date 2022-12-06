/* GPA
 * Ainslee Cole
 * 12/5/2022
 * Purpose:
 *		Calculate the GPA of final grades.
 */

#include <iostream>
#include <vector>
using namespace std;

void calculateGPA();


int main() {

	void calculateGPA(); {
		int grade = 0;
		int gradesum = 0;
		int subjects;
		system("cls");
		cout << "------------------ Calculating GPA ------------------" << endl;
		cout << "How many classes/subjects are you taking: ";
		cin >> subjects;
		for (int i = 0; i < subjects; i++) {
			cout << "\nPlease enter the grades for all classes." << endl;

			cout << "Enter the number corresponding with the Grade for class " << i + 1
				<< "\nA = 4  B = 3  C = 2  D = 1  F = 0: ";
			cin >> grade;
			gradesum += grade;
		}
			cout << "Total Grades: " << gradesum << endl;
			cout << "GPA is: " << gradesum / subjects << endl;
			return 0;
	}
}