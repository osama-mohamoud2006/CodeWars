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
	int sum =0 ;
	for (int i = 0; i <= n; i++) {
		sum += i;
	}
	cout << sum << endl;
}
int main() {
	int n = input();
	output(n);
}