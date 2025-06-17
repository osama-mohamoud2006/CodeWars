// sum of 2 arrays
#include <iostream>
using namespace std;
//array1 
void input_arr1(int arr1[3]) {
	for (int i = 0; i < 3; i++) {
		cout << "enter " << i + 1 << ": ";
		cin >> arr1[i];
	}
	cout << "===================================================" << endl;
}
// array 2

void input_arr2(int arr2[3]) {
	cout << "array 2" << endl;
	for (int i2 = 0; i2 < 3; i2++) {
		cout << "enter " << i2 + 1 << ": ";
		cin >> arr2[i2];
	}
}

void sum(int arr1[3], int arr2[3]) {
	int result1 =0 ; 
	// first array 
	for (int o1 = 0; o1 < 3; o1++) { 
		result1 += arr1[o1];
	}
// second array 
	int result2 = 0;
	for (int o2 = 0; o2 < 3; o2++) { 
		result2 += arr2[o2];
	}
	int f_result = result1 + result2;
	cout << "the sum is " << f_result;
}
int main() {
	int arr1[3];
	int arr2[3];
	input_arr1(arr1);
	input_arr2(arr2);
	sum(arr1, arr2);
}