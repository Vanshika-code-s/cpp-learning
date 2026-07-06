#include <iostream>
using namespace std;
int main() {
    char n;
    cout << "Enter the letter: ";
    cin >> n;
    for (char i = 'a'; i < n; i++) {
        for (char j = i ; j >= 'a' ; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}