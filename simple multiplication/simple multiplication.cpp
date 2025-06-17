/*
///Simple multiplication///
This kata is about multiplying a given number by eight 
if it is an even number and 
by nine otherwise.
*/
#include <iostream>
using namespace std;
//input
int input() {
	int number;
		cout<< "enter number : ";
	cin >> number;
	return number;
}

void check(int number ) {
	if (number % 2 == 0) {
		cout << "number multiply 8 bcz it is even number " << number * 8 << endl;
  }
	else {
		cout << "number multiply 8 bcz it isn't even number " << number * 9 << endl;
	}

}

int main() {
	int number = 0;
	check(input() ) ;
}