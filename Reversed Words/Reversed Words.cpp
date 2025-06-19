#include <iostream>
#include <string>
using namespace std;

  int main() {

    string word;
    cout << "enter sentence: ";
    getline(cin, word);

    string first ;
	string arr[100];
    // first word 
    for (int i = 0; i < word.length(); i++) {
        if (word[i] != ' ') first += word[i]; // if word isn't space 

        else {
			arr[i] = first; // store the word in array
			
           first = "";
           
        }
    }

    if (first!= "") {  // for the last word 
		arr[word.length()] = first; // store the last word
    
    }

    for(int i = word.length(); i >= 0; i--) { // print the words in reverse order
        if (arr[i] != "") {
            cout  << arr[i] << " ";
        }
	}
    return 0;
}
