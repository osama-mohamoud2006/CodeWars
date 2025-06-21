#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	string arr[3];
	/// input array
	for (int i = 0; i < 3; i++) {
		cout << "enter word " << i + 1 << " ";
		cin >> arr[i];

	}

	//bubble sort 
	for (int j = 0; j < 3; j++) {
		for (int v = 0; v < 3 - j - 1; v++) {
			swap(arr[v + 1], arr[v]);
		}
	}

	for (int o = 0; o < 3; o++) {
		cout << "{ " << arr[o] << " }";
	}

}