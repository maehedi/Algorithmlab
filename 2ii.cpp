#include <iostream>
using namespace std;

int main() {
    int n, num = 1;
    cout << "Enter the number of rows for Floyd's Triangle: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if(num%2==0)
            cout << "0" << " ";
            else
            cout<<"1"<<" ";
            num++;
        }
        cout << endl; 
    }

    return 0;
}

