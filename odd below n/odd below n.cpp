#include <iostream>
#include <cmath>
using namespace std;
int input() {
	int n; 
	do {
		cout << "enter number + ";
		cin >> n;
		if (0 > n) {
			cout << "enter + number plz ! " << endl;
		}
	} while (0 > n);
	return n;
}
void odd(int n) {
	int count=0;

	for (int i = n-1; i >= 1; i--) {
		if (i % 2 != 0) { // odd
			
			cout<< i<<" ";
			count++ ;
		}
	}
	cout << endl;
	cout <<"total : " << count << endl;
	
	
	
}
int main() {
	int n = input();
	odd(n);
}