#include <iostream>
using namespace std;
int input() {
	cout << "enter number: ";
	int n;
	cin >> n;
	return n;
}
bool even_or_odd() {
	int num = input();
	if (num % 2 == 0)
		return 1;
	else
		return 0;
}

void result() {
	if (even_or_odd() == 1)
	{
		cout << "EVEN " << endl;
	}
	else {
		cout << "ODD " << endl;
	}
}

int main()
{
	result();
}