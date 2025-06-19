#include <iostream>
#include <string >
using namespace std;
int main() {
	cout << "enter word: ";
	string word;
	getline(cin, word); /// get full sentense  with space  
	string final_word; 
	for (int i = 0; i < word.length(); i++) {
		if (word[i] != ' ') final_word += word[i]; // if there isn't space add words
		else {
			cout << "[ " << final_word << " ]" << " "; // if there is space print word
			final_word = ""; // reset the word 
		}

   }
	 if(final_word != " ") cout << "[ " << final_word << " ]" << " "; // print the last 
	 // word as it willnot execute last word 
}