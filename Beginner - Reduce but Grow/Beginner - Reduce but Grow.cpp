#include <iostream>

using namespace std;
int main() {
	/// input
	int arr[4]; // 1d 
	for (int i = 0; i < 4; i++) {
		cout << "enter " << i + 1 << endl;
		cin >> arr[i];
	}   

	int sum = 1; 
	for (int k = 0; k < 4; k++) {
		sum*= arr[k];
	}
	cout << "the the multiplication is: " << sum << endl;

	
}