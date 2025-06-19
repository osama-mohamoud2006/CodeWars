#include <iostream>
using namespace std;
int main() {

	cout << "enter DNA: ";
	string dna;
	cin >> dna;
	for (int i = 0; i < dna.length(); i++) {
		if (dna[i] == 'T') dna[i] = 'U';
	}
	cout << dna << endl;


}