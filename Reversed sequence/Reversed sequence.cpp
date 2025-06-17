#include <iostream>
using namespace std;
int main() {
	int arr[100];
	cout << "enter number ";
	int n; 
	cin >> n;
	for (int i = n; i > 0; i--) {
		arr[i] = i;  // store loop 
		// results in array 
	}
	for (int j= n; j > 0; j--) {
		cout << arr[j] << " ";
	}
}