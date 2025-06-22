#include <iostream>
using namespace std;
enum enletter { A = 1, B = 2 , C=3 , D=4 , F=5 };
void  grade(int arr[3]) {
	for (int i = 0; i < 3; i++) {
		cout << "enter grade " << i + 1 << " ";
		cin >> arr[i];
	}

}
void c_avg(int arr[3], int &avg) {  
    int sum = 0;  
    for (int i = 0; i < 3; i++) {  
        sum += arr[i];  
    }  
    avg = sum / 3;  
}
enletter letter(int avg ){
    enletter g;
    if (90 <= avg <= 100) return enletter::A;
    else if (80 <= avg < 90) return enletter::B;
    else if (70 <= avg < 80) return enletter::C;
    else if (60 <= avg < 70) return enletter::D;
    else return enletter::F;
}
void output(enletter l) {  
    if (l == enletter::A) cout << "Your grade is A" << endl;  
    else if (l == enletter::B) cout << "Your grade is B" << endl;  
    else if (l == enletter::C) cout << "Your grade is C" << endl;  
    else if (l == enletter::D) cout << "Your grade is D" << endl;  
    else cout << "Your grade is F" << endl;  
}
int main() {
    int arr[3];
    int avg = 0;
    grade(arr);
    c_avg(arr ,avg);
  
	output(letter(avg));


}