#include <iostream>
using namespace std;
int main() {
	int arr[4];
	for (int i = 0; i < 4; i++) {
		cout << "enter " << i + 1 << " ";
		cin >> arr[i];
	}
	int min = arr[0];
	for (int m = 0; m < 4; m++) {
		if (min > arr[m]) min = arr[m];
	}
	cout << "the min is " << min << endl;

}