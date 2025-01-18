#include <iostream>
using namespace std;
void matrix()
{
    int m, n, p, q;

    cout << "Enter the number of row for first matrix:";
    cin >> m;
    cout << "Enter the number of column for first matrix:";
    cin >> n;
    cout << "Enter the number of row for second matrix:";
    cin >> p;
    cout << "Enter the number of column for second matrix:";
    cin >> q;

    int arr1[m][n];
    int arr2[p][q];
    int result[m][q];

    if (n == p)
    {
        cout << "Number of elements for first matrix " << m * n << " and for second matrix " << p * q << endl;
        cout << "Enter elements for first matrix:";

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr1[i][j];
            }
        }
        cout << "Enter elements for second matrix:";

        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> arr2[i][j];
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                result[i][j] = 0;
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    result[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        cout << "Multiplication of matrix is:" << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Multiplication not possible";
    }
}
int main()
{
    matrix();
}