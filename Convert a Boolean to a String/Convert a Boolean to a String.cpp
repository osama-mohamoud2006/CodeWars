#include <iostream>
using namespace std;
string res(bool b) {
	
	if (b == 1)
		return "true";
	else
		return "false";
}
int main() {
	cout << res(0);
}