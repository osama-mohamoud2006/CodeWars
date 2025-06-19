#include <iostream>
#include <string>
using namespace std;
string input() {
	cout << "enter number: ";
	string number;
	cin >> number;
	if (number == "0") {
		cout << "0";
		exit(0);
	}
	return number;
 }

void reverse(string &f , string number , int  arr[6]) { // reverse number by for loop
	
	for (int i = number.length(); i >= 0; i--) { //reversed 
		f += number[i];
		
		 }
	 }    
/// return string reversed
	
	

void output( string f, int arr[6]) {
	int  digit;
	   for (int x = 0; x < 6; x++) {
		   digit = f[x] - '0'; // convert each string index  to number
            arr[x] = digit; // make each number in array 
		}

	/// output
	for (int o = 1; o < 6; o++) {
		cout << "[ " << arr[o] << " ]" << " "; // output array
	}

}


	int main() {
		int  arr[6];
		string f;
		string number = input();
		reverse( f ,number , arr );
		output(f, arr);
			
}