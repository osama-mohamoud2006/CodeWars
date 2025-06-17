// the End of vid four
#include<iostream>
using namespace std;
void input_Arr(int arr[5]) {
	
	for (int i = 0; i < 5; i++) {
		cout << "enter index number " << i + 1 << endl;
		cin >> arr[i];
	}
	
} 

void inverse_arr(int arr[5] ) {
	
	
	cout << "you entered " << endl;
	for (int ij = 0; ij < 5; ij++) {
		cout << "[ " << -1*arr[ij] << " ]";
	}
	cout << "\n";

}
int main() {
	int arr[5];
	input_Arr(arr);
	inverse_arr( arr );
}