#include <iostream>
#include <cmath>
using namespace std;
void input(int arr[3]) {

	
	
		for (int i = 0; i < 3; i++) {
            cout << "enter num " << i+1<<" ";
			cin >> arr[i];
		}
		
	
	
	
}
// another input
/*
* int input(){
int n ;
do{
cout<<"enter "<<n<<endl;
cin>>n;

}while(n<0);
  return n ;
}
  */

void c_square(int arr[3]) {
	int sum =0;
	for (int l = 0; l < 3; l++) {
		sum += pow(arr[l], 2);
	}
	cout << sum << endl;
}
int main() {
	int arr[3];
	input(arr);
	c_square(arr);
}