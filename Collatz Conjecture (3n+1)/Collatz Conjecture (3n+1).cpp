#include <iostream>
using namespace std;
int main() {
	cout << "enter number ";
	int n; 
	cin >> n;
	
	
	int count = 0;
	
    
	while (n != 1) {
		if (n % 2 == 0) // even 
		{
			 n= n / 2;
			 count++;
			 if (n == 1) break;
		}
		else if (n % 2 != 0) {
			n = 3 * n + 1;
			count++;
			if (n == 1) break;
		}
	}

	cout << count << endl;
}