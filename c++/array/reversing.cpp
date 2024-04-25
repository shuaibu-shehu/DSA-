#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void convertToSparse(int matrix[][MAX_SIZE], int r, int c) {
    int sparseMatrix[MAX_SIZE][3];
    int size = 0;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (matrix[i][j] != 0) {
                sparseMatrix[size][0] = i;
                sparseMatrix[size][1] = j;
                sparseMatrix[size][2] = matrix[i][j];
                size++;
            }
        }
    }

    cout << "Sparse Matrix:\n";
    cout << "Row  Column  Value\n";
    for (int i = 0; i < size; i++) {
    	for(int j=0; j<3; j++)
        	cout << sparseMatrix[i][j] << "     " ;
    	cout<<"\n";
    }
    
}

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix[MAX_SIZE][MAX_SIZE];

    cout << "Enter the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    cout<<"Matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout <<  matrix[i][j]<<" ";
        }
        cout<<"\n";
    }


    convertToSparse(matrix, rows, cols);

    return 0;
}

