#include <iostream>
#include <string>
using namespace std;
string input() {
	string w;
	cout << "enter word ";
	cin >> w;
	cout << "the length is " << w.length() << endl;
	return w;

}
void remove(string w ) {
	string f="";
	for (int i = 1; i < w.length()-1; i++) {
		
		f += w[i];
	}
	cout << "the word is " << f << endl;
}
int main() {
	remove(input());
}