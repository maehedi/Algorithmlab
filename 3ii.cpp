#include <iostream>
using namespace std;
void matrix(int m)
{
    int n;
   
    cout << "Enter the number of column:";
    cin >> n;
    int arr[m][n];

    cout << "You have to input: " << m * n << " numbers" << endl;
    cout << "Enter elements:";

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    matrix(3);
}