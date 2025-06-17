#include <iostream>
#include <string>
using namespace std;
void input(string &n , int &spaceIndex ) {
	cout << "enter name: ";
	

	getline(cin, n );
	spaceIndex = n.find(' ');

	
}
void output(string f , int spaceIndex) {
	
 cout<<	char(toupper(f[0]) );
 cout << '.';
 cout <<  char( toupper (f[spaceIndex + 1]) );
	
}
int main() {
	int  spaceIndex;
	string n, m = " ";
 input(n , spaceIndex);
	
	output(n, spaceIndex);
}