#include <iostream>
using namespace std;
int main() {
	cout << "enter the num of times you wanna repeat: ";
	int r;
	cin >> r;

	cout << "enter word: ";
	string w;
	cin >> w;
	
	string sum = w;
	for (int i = 1; i < r; i++) {
		sum += w;
	}
	cout << sum << endl;
	cout << " ";

}