#include <iostream>
using namespace std;
int main() {
	double arr[5];
	for (int i = 0; i < 5; i++) {
		cout << "enter " << i + 1 << " ";
		cin >> arr[i];
	}
	double sum = 0;
	for (int j = 0; j < 5; j++) {
		sum += arr[j];
	}
	cout << "the sum is " << sum << endl;
}