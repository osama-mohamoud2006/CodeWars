#include <iostream>
using namespace std;
int main() {
	int arr[15];
	for (int i = 0; i < 15; i++) {
		cout << "enter " << i + 1 << " ";
		cin >> arr[i];
	}
	int count = 0;
	int sum = 0;
	for (int j = 0; j < 15; j++) {
		if (arr[j] == 0) continue;
		if (arr[j] > 0) count++;
		else sum += arr[j];
	}
	cout << "[ "<<count << " ]" << "[ "<<sum << " ]"<<endl;
}