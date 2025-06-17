#include <iostream>  
#include <string>
using namespace std;  
int main() {  

    char word[6]; // Correctly allocate space for 5 elements  

    cout << "enter the word " << endl;

    for (int k = 0; k < 5; k++) { 
       cin >> word[k];
    }
     
    for (int i = 4; i >= 0; i--) { 
        cout <<word[i];
    }

    return 0;  
}
