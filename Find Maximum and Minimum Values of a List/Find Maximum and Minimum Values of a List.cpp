#include <iostream>
using namespace std;
int main() {
	// input
	
	int arr[5];
	
	// input 
	for (int i = 0; i < 5; i++) {
		cout << "enter " << i + 1 << endl;
		cin >> arr[i];
	}

	// compare
	int max = 0;
	for (int ij = 0; ij < 5; ij++) {
		if (arr[ij] > max) {
			max = arr[ij];
		}

	}
	cout << "the max is " << max << endl;
	cout << "=========================================" << endl;
	cout << endl;

	///// min /////////
int min = arr[0];
	for (int im = 0; im < 5; im++) {
		if (arr[im] < min) {
			min = arr[im];
		}
	}

	cout << "the min is " << min << endl;
}