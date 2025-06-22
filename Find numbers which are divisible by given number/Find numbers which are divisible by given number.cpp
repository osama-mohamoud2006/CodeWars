#include  <iostream>
using namespace std;
int main() {
	cout << "enter n ";
	int n;
	cin >> n;

	int arr[6];
	for (int i = 0; i < 6; i++) {
		cout << "Enter numbers " << i + 1 << " ";
		cin >> arr[i];
	}

	for (int i = 0; i < 6; i++) {
		if (arr[i] % n == 0) cout << "[ " << arr[i] << " ]";
	}
}
