#include <iostream>
using namespace std;

int main()
{
    int row, cols;
    cout << "Enter row, column:";
    cin >> row >> cols;
    int **ptr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        ptr[i] = new int[cols];
    }
    for (int i = 0; i < cols; i++)
    {
        ptr[0][i] = i;
    }
    cout << ptr[0][0];
}