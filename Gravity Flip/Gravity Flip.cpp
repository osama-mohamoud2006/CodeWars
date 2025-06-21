#include <iostream>
#include <algorithm>
using namespace std;
//choose if it is right or left
char choose() {
	char c;
	cout << "enter you want \"R\" or \"L\" ";
	cin >> c;
	return c;
 }
// input values
void input_nums(int arr[4]) {
	for (int i = 0; i < 4; i++) {
		cout << "enter values " << i + 1 << " ";
		cin >> arr[i];
	}
}
void accending( int arr[4]) {
	// bubble sort accending
	for (int a = 0; a < 4; a++) {
		for (int ai = 0; ai < 4 - a - 1; ai++) {
			if(arr[ai]>arr[ai+1])
			swap(arr[ai], arr[ai + 1]);
		}
	}

	cout << "this is accending arrange "<<endl;
	for (int outa = 0; outa < 4; outa++) {
		cout << "[ " << arr[outa] << " ]";
	}


}
void descending( int arr[4]) {
	// buuble sort 
	for (int d = 0; d < 4; d++) {
		for (int dout = 0; dout < 4 - d - 1; dout++) {
			if(arr[dout] <arr[dout+1])
			swap(arr[dout], arr[dout +1]);
		}
	}

	cout << "the descending arrange " << endl;
		for (int outd = 0; outd < 4; outd++) {
			cout << "[ " << arr[outd] << " ]";
		}
}

int main() {
	char c; 
	
	
	do {
		
     c = choose();
    
if (c != 'R' && c != 'L') cout << "try again " << endl;

    } while (c != 'R' && c != 'L');

int arr[4];
	input_nums(arr);
	if (c == 'R') accending( arr);
	else  descending( arr);


}