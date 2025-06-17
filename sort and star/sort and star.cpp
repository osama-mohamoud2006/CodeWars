#include <iostream>

using namespace std;
int main() {

	string arr[12];
	for (int i = 0; i < 12; i++) {
		cout << "enter " << i + 1 << " ";
		cin >> arr[i];
	}
	// bubble sort 
	string finalStr = "";

	for (int o = 0; o < 12 - 1; o++) {
		for (int j = 0; j < 12 - o - 1; j++) {
			if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
		}
	}

	string res = arr[0];
	for (int i = 0; i < res.length(); i++) {
		finalStr += res[i];
		if (i != res.length() - 1) finalStr += "***";

	}

	cout << "[ " << finalStr << " ]" << " ";

}