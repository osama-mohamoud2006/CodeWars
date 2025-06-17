#include <iostream>
using namespace std;
string input() {
	string w;
	cout << "enter word ";
	cin >> w;
	return w;
 }


void output(string w) {
	string nw= " ";
	for (int i = 0; i < w.length(); i++) {
		if (w[i] == ' ') {
			continue;
		}
		nw += w[i]; // Correct
	}
	cout << "the word: " << nw << endl;
}
int main() {
	output(input());
 }
