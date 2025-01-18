#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int nums[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n ; i++) {
        cin >> nums[i];
    }

   
    for (int i = 0; i < n ; i++) {
        for (int j = i + 1; j < n ; j++) {
            if (nums[i] == nums[j]) {
                cout << "The duplicate number is: " << nums[i] << endl;
                
            }
        }
    }

}
