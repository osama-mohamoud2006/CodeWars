#include <iostream> 
#include <string>
using namespace std;
int main() {
	string t;
	cin >> t;
	string word=" ";
	for (int i = 0; i <= t.length(); i++) {
	/*	if (t[i] == '!')  / solution one 
		{
			continue;
		 }
		word += t[i];*/

		if (t[i] != '!') {  // solution two 
			word += t[i];
		}
	}
	cout << word << endl;
}



/*
* each character has specific index number (1)
* i used for loop to aceess every character with its index (2)
* used text.length() to limit loop to the last word according to its index also
* t[i] every i value represnt character of the word
* so for loop will access all characters
word var to save the output without '!'
*/