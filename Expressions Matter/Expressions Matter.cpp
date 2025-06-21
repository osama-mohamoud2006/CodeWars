#include <iostream>
using namespace std;
int main() {
	cout << "enter a ";
	int a;
	cin >> a;

	cout << "enter b ";
	int b;
	cin >> b;

	cout << "enter c ";
	int c;
	cin >> c;

	int arr[7] = { 0 };
		  arr[1] = a + b + c;
		 arr[2] = a * b * c;
		 arr[3] = c * (a + b);
		 arr[4] = a * (b + c);
	 arr[5] = a + (b * c);
		  arr[6] = c + (a * b);
	
	int max = arr[0];
	for (int j = 0; j < 7; j++) {
		if (arr[j] > max) max = arr[j];
	}
	cout << "then the max value from operations is "
		<< max << endl;
}