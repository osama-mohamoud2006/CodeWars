#include <iostream>
using namespace std;
void input(int arr[24]) {
	
	for (int i = 0; i < 24; i++) {
		cout << "enter or 0 " << i + 1 << endl;
		cin >> arr[i];
	
	}
	
}

void check(int arr[24]) {
	int sum = 0;
	for (int il = 0; il < 24; il++) {
		if (arr[il] == 0) {
                continue;
		}
		sum += arr[il];
	}
	cout << sum << endl; 
}
int main() {
	int arr[24];
	 input(arr);
	check(arr);
}