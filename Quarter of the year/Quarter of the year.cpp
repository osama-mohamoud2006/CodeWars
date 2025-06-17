
// give month and get its quarter
#include <iostream>
using namespace std;

int input() {
	int m;
	cout << "enter month: " << endl;
	cin >> m;
	return m;
}
void quarter(int m) {
	// first solution 
	if (m >= 1 && m <= 3) { // first quarter 
		cout << "it is first quarter !" << endl;
	}
	else if (m >= 4 && m <= 6) {
		cout << "it is second quarter !" << endl;
	}
	else if (m >= 7 && m <= 9) {
		cout << "it is third quarter !" << endl;
	}
	else {
		cout << "it is the final quarteer ! " << endl;
	}
	/// second solution 

}
int main() {
	int m = 0;
	quarter(input());
}