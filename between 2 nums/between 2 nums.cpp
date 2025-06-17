#include <iostream>
using namespace std;
int input(string m) {
	int n  ;
	cout << m << endl;
	cin >> n;
	return n;
}


int main() {
	/*int arr[4];*/
	int n = input("enter start point: ");
	int m = input("enter end point: ");
	for (int k = n; k <= m; k++) {
		cout << k << endl;

	}
	
}