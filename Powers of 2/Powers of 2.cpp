#include <iostream>
#include <cmath>		
using namespace std;
int input() {
	cout << "enter n: ";
	int n;
	cin >> n;
	return n;

}
void output(int n) {
	int powern;
	for (int i = 0; i <= n; i++) {
		powern = pow(2, i);
		cout << "[ " << powern << " ]";
	}
}
int main() {
	int n = input();
	output(n);
}