// isupper()
// tolower()
#include <iostream >
#include <string>
using namespace std;
string input()
{
	string w;
	cout << "enter to word to get its reverse alphatic: ";
	getline(cin, w);
	return w;
}
void alpha(string w) {
	string f;
	for (int i = 0; i <= w.length(); i++) {
		if (isupper(w[i])) {
				f += tolower( w[i] );
		
		}
		else if(islower(w[i])){
			f += toupper(w[i]);
			
		}
		else {
			f += w[i];
		}
	}
	cout << f << endl;
}
int main() {
	string w = input();
	alpha(w);
}