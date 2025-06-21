#include <iostream>
using namespace std;
int main() {
	int arr[10][2];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "enter [x]:[y] result " << endl;
			cin >> arr[i][j];
		}
	}

	int total_x=0;
	for (int s1 = 0; s1 < 10; s1++) {
		
		if (arr[s1][0] > arr[s1][1]) {
			cout << "x won !" << endl;
			total_x += 3;
		}
		else if (arr[s1][0] == arr[s1][1]) {
             cout << "Tie! " << endl;
			 total_x += 1;
		}
				
			else cout << "y won! " << endl;
		
	}
	cout << total_x << endl;
}