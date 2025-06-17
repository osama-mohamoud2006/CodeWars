#include <iostream>
#include <string>
using namespace std;
void arr_input(char arr[3])
{
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "enter ";
		cin >> arr[i];
	}
}
char x_input() {
	char x; 
	cout << "enter x char ";
	cin >> x;
	return x;
}
bool check(char x, char arr[3]) {
	for (int l = 0; l < 3; l++) {
		if (x == arr[l]) {
      cout << "true";
			return 1;
		}
			
		
			
	}
	cout << "false";
     return 0;
}
int main() {
	
	char arr[3];
  arr_input(arr);
	char x = x_input();
	check(x, arr);



}