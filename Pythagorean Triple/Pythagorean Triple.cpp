#include <iostream>
#include <cmath>
using namespace std;
void input(int arr[3]) {
	for (int i = 0; i < 3; i++) {
		cout << "enter " << i + 1 << " ";
		cin >> arr[i];
	}
}
void sort_array(int arr[3]) {
	/// bubble sort///
	for (int j = 0; j < 3; j++) {
		for (int s = 0; s < 3-j-1; s++) {
			if (arr[s] > arr[s + 1])
				swap(arr[s], arr[s + 1]);
		}
	}

}
void Pythagorean_Triple(int arr[3] ) {
	int test;
	test = pow(arr[0], 2) + pow(arr[1], 2);
	if (test == pow(arr[2], 2)) cout << "it is possible to form a Pythagorean Triple using these 3 integers " << endl;
	else cout << "invaild " << endl;
}

int main() {
	int arr[3];
	input(arr);
	sort_array(arr);
	Pythagorean_Triple(arr);
}