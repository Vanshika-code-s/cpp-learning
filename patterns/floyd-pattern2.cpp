#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    char num='a';
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}