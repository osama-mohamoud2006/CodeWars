#include <iostream>
using namespace std;
int input() {
	cout << "enter the quantity of mango: ";
	int  q;
	cin >> q;
	return q;
}
int offer() {
	int quantity = input();
	int sum = 0;
	int price = 5; 
	for (int i = 1; i <= quantity; i++) {
		
		if(i%3==0) {
			continue;
		}
		sum = sum + price;
  
		
	}
	cout << "the price is " ;
	return sum;
}
int main() {
	cout << offer() << endl;
}