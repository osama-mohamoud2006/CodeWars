#include <iostream>
using namespace std;
void input_arr(int arr[5]) {
	for(int i = 0; i < 5; i++) {
cout << "enter elment " << i + 1 << " ";
cin >> arr[i];
	}
	

}
int  total_elements(int arr[5]  ) {
	int total = 0;
	for (int t = 0; t < 5; t++) {
		total += arr[t];
		
	}
	return total;
}
int  max_value(int arr[5] ) {
	int max;
	max = arr[0];
	for (int m = 0; m < 5; m++) {
		if (arr[m] > max) max = arr[m];
	}
	return max;
}
int   min_value(int arr[5] ) {
	int min;
	min = arr[0];
	for (int mi = 0; mi < 5; mi++) {
		if (arr[mi] < min) min = arr[mi];
	}
	return min;
}
void print_result( int arr[5], int total, int max, int min) {

	cout << "===============================" << endl;
	cout << "so the result is: " << total - max - min;
}

int main() {
	int arr[5]; 
	input_arr(arr);
	int  total = total_elements(arr);
	int max = max_value(arr);
		int min = min_value(arr);
	print_result(arr, total, max, min);
}