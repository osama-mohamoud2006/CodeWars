#include <iostream>
using namespace std;
int main() {

	int arr[4];
	for (int i = 0; i < 4; i++) {
		cout << "enter " << i + 1 << " ";
		cin >> arr[i];
	}
	int  res = 0;
	for (int p = 0; p < 4; p++) {
		if (0 > arr[p]) continue;
		else  res += arr[p];
	}
	
	cout << "the result is " << res << endl;
}