#include <iostream>
using namespace std;
int input() {
	double  n;
	cout << "enter number ";
	cin >> n;
	return n;  
}

void divisable() {
	int num ;
	do {
		num = input();
	int x=0;
	cout << "enter x ";
	cin >> x;

	int y=0;
	cout << "enter y ";
	cin >> y;
	if (num % x == 0 && num % y == 0 && num > 0)
		cout << "1" << endl;
	else
		cout << "0" << endl;
	} while ("#");
	
}
int main() {
	divisable();
	
}