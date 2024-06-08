#include <iostream>

using namespace std;

void spiralprint(int arr[4][4], int m, int n)
{
    int srow = 0;
    int scol = 0;
    int erow = m - 1;
    int ecol = n - 1;

    while (srow <= erow && scol <= ecol)
    {
        for (int col = scol; col <= ecol; col++)
        {
            cout << arr[srow][col] << " ";
        }

        for (int row = srow + 1; row <= erow; row++)
        {
            cout << arr[row][ecol] << " ";
        }

        for (int col = ecol - 1; col >= scol; col--)
        {
            if (srow == erow)
                break;
            cout << arr[erow][col] << " ";
        }

        for (int row = erow - 1; row >= srow + 1; row--)
        {
            if (scol == ecol)
                break;
            cout << arr[row][scol] << " ";
        }
        srow++;
        scol++;
        erow--;
        ecol--;
    }
}

int main()
{
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};
    int m = 4;
    int n = 4;
    spiralprint(arr, m, n);
    return 0;
}