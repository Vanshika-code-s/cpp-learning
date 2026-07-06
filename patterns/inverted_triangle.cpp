# include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    char num='a';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++) {
            cout << char(num+i) ;
        }
        cout << endl;
    }
    return 0;
}