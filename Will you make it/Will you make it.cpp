#include <iostream>
using namespace std;
void input(  int &distance_pump,  int &u , int& g  ) {
	
	cout<<" distance_pump: " ; /// n p
	cin >> distance_pump;

cout << "gallon can run untill "; 
	cin >> u;

	cout << "enter no of .gallons "; 
	cin >> g;
	
	
 }
bool check(int distance_pump, int u, int g) {
	int each = g * u;
	return (each >= distance_pump);
}
int main() {
	int g =0;
	int u = 0;
	int distance_pump = 0;
	input(distance_pump , u ,g   );
	 cout<< check(distance_pump, u, g);

	
	
}