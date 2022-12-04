/* GPA
 * Ainslee Cole
 * 11/30/2022
 * Purpose:
 *		Calculate the GPA of final grades.
 */

#include <iostream>
#include <vector>
using namespace std;

void calculateGPA();


int main() {
	
	void calculateGPA(); {
		int S = 0;		// s stands for number of subjects/classes.

		system("cls");
		cout << "------------------ Calculating GPA ------------------" << endl;
		cout << "How many subjects/classes would you like to calculate? ";
		cin >> S;

		float credit[S];
		float points[S];

		cout << endl;
		for (int i = 0; i < S; i++) {
			cout << "Enter the TOTAL CREDITS for the subject/class" << i + 1 << ": ";
			cin >> credit[i];
			cout << endl;
			cout << "Enter the amount of points YOU earned for subject/class" << i + 1 << ": ";
			cin >> points[i];
			cout << "--------------------------------------------------" << endl;
		}
		float sum = 0; //Total points.
		float tot;		//total

		for (int j = 0; j < S; j++) {
			tot = credit[j] * points[j];
			sum = sum + tot;
		}

		float totCr = 0;	//Total credits
		for (int k = 0; k < S; k++) {
			totCr = totCr + credit[k];
		}
		cout << "/n/nTotal Points: " << sum << "/n/nTotal Credit: " << totCr << "/n/n Final GPA: " << sum / totCr << endl;
	}

}