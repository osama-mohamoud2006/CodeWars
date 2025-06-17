#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int arr[4];
	for (int i = 0; i < 4; i++) {
		cout << "enter "<<i + 1 << " ";
		cin >> arr[i];
	}
	float avg = 0.0;
	for (int k = 0; k < 4; k++) {
		avg += arr[k];
	}
	float final = floor( avg / 4 ) ;
	cout << "final value is " << final << endl;
}