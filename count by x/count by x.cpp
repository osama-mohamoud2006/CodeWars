#include <iostream>
using namespace std;
int main() {

	cout << "enter x ";
	int x;
	cin >> x;
	int arr[14];
	cout << "enter n ";
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		arr[i] = i;
		cout<< arr[i] * x<<" ";
	}



  }

