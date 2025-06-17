#include <iostream>
#include <string>
using namespace std;

string input( string text) {
cout << "enter "<<text;
	string word;
	getline(cin, word);
	return word;
}
void repetattion() {
	string w = input("enter word: ");
	string c = input("enter charcter to find: ");

	int count = 0;
	for (int i = 0; i < w.length(); i++) {

		for (int j = 0; j < c.length(); j++) {
			if (w[i] == c[j]) {
				count++;
			}
		}
	}
	cout << count << endl;
}

int main() {
	
	repetattion();
	
}