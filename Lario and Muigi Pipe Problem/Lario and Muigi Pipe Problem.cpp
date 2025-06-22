#include <iostream>
using namespace std;
int main() {

	int arr[6];
	for (int i = 0; i < 6; i++) {
		cout << "enter " << i + 1 << " ";
		cin >> arr[i];
	}
	int max = arr[0];
	for (int h = 0; h < 6; h++) {
		if (max < arr[h]) max = arr[h];
	}
	int min = arr[0]; 
	for (int j = 0; j < 6; j++) {
		if (min> arr[j]) min = arr[j];
	}

	for (int x = min; x <= max; x++) {
		cout << "{ " << x << " } ";
	}

 }