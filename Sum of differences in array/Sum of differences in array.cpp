#include <iostream>
using namespace std;
void arr_input(int arr[3]) {
	for (int i = 0; i < 3; i++) {
		cout << "enter " << i + 1<<" ";
		cin >> arr[i];
	}
}

void calculate(int arr[3]) {
	int max = arr[0]; //max
	for (int j = 0; j <3; j++) {
		// rearrange 
		if (arr[j] > max) {
			max = arr[j];
		}
	}   
	int min = arr[0]; // min
	for (int m = 0; m < 3; m++) {
		if (min > arr[m]) {
			min = arr[m];
		}
	}

	// range
	int result =0 ;
	for (int r = 0; r < 3; r++) {
		if (max > arr[r] && arr[r] > min) {
			result = (max - arr[r]) + (arr[r] - min);
		}
		
	}
	
	cout << "the result is " << result;
}
int main() {
	int arr[3];
	arr_input(arr);
	calculate(arr);
}