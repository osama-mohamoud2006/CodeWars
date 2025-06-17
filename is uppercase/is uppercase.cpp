#include <iostream>
#include <string>
using namespace std;

bool is_uppercase(string s) {
    for (int i = 0; i < s.length(); i++) {

        if ( !isupper(s[i])) {
            return 0;
        }
    }
    return 1;
}

int main() {
    string input;
    cin >> input;
    cout << is_uppercase(input);
    return 0;
}