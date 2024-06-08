#include <iostream>

using namespace std;

pair<int, int> StaircaseSearch(int arr[4][4], int m, int n, int key)
{
    if (key < arr[0][0] or key > arr[m - 1][n - 1])
        return {-1, -1};
    int i = 0;
    int j = n - 1;
    while (i <= m - 1 and j >= 0)
    {
        if (arr[i][j] == key)
            return {i, j};
        else if (arr[i][j] > key)
        {
            j--;
        }
        else
            i++;
    }
}

int main()
{
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    int m = 3;
    int n = 4;
    pair<int, int> coord = StaircaseSearch(arr, m, n, 8);
    cout << coord.first << " " << coord.second << endl;
    return 0;
}