#include <iostream>
using namespace std;
// input as number
// ididnot study vectors yet !
int main() {
	int n;
	cout << "enter number: ";
	cin >> n;
	int arr[100]; // assume array 

	for (int i = 0; i <= n; i++) { // to fill 
		//array with i
		arr[i] = i ;
	}

	for (int h = 1; h <= n; h++) {
		cout << arr[h] << " "; // outpuut array 
	}
}