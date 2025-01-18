#include <iostream>
using namespace std;

void moveZeroes(int nums[], int n) {
    int nonZeroIndex = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[nonZeroIndex] = nums[i];
            if (nonZeroIndex != i) {
                nums[i] = 0;
            }
            nonZeroIndex++;
        }
    }
}

int main() {
    int num;
    cout << "Enter the number of elements in the array: ";
    cin >> num;

    int arr[num];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    moveZeroes(arr, num);

   
    cout << "Array after moving all zeros to the end: ";
    for (int i = 0; i < num; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
