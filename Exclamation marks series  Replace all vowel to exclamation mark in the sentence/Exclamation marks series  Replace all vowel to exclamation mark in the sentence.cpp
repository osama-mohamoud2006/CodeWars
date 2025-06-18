#include <iostream>
#include <string>
using namespace std;
string input() {
	string w;
	cout << "enter word: ";
	getline(cin, w);
	
	return w;
}
void vowel_remove(string w) {
	string word;
	for (int i = 0; i < w.length(); i++) {

		if (w[i] == 'a' || w[i] == 'e' || w[i] == 'i' || w[i] == 'o' || w[i] == 'u') {
		
			 
				word += '!';
			continue;
			
		}
		else if ( isupper(w[i]) &&(w[i] == 'A' || w[i] == 'E' || w[i] == 'I' || w[i] == 'O' || w[i] == 'U') )  {
			word += '!';
			continue;
		}
		else  word += w[i];
	}
	cout << word << endl;
}
int main() {
	string w = input();
	vowel_remove(w);
}