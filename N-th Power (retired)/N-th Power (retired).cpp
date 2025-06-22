#include <iostream>
using namespace std;
int main() {
	cout << "enter number: ";
	int n;
	cin >> n;

	int arr[4];
	for (int i = 0; i < 4; i++) {
		cout << "enter "<<i + 1 << endl;
		cin >> arr[i];
	}
	int res; 
	for (int j = 0; j < 4; j++) {
		if (j == n) res = pow(arr[n], n);
		else if (j < n) res = -1;
	}
	
	cout << res << endl;
	
}