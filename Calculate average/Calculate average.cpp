// calucate avg
#include <iostream>
using namespace std;
int main() {
	int arr[5];
	for (int i = 0; i < 5; i++) {
		cout << "enter " << i + 1 << endl;
		cin >> arr[i];
	}

	float avg;
	float sum =0 ; 
	// avg = sum / number of elements
	for (int ji = 0; ji < 5; ji++) {
		sum += arr[ji];
	}
	cout << "then avg is " << sum / 5 << endl;
}