#include <iostream>
#include <iomanip>

using namespace std;

const int MAX_SIZE = 100; // Adjust this according to your needs

void matrix(int arr1[][MAX_SIZE],int arr2[][MAX_SIZE], int c, int r) {
    int rep_Arr1[MAX_SIZE][3];
    int size1 = 0;
     int rep_Arr2[MAX_SIZE][3];
    int size2 = 0;
    
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            if (arr1[i][j] != 0) {
                rep_Arr1[size1][0] = i;
                rep_Arr1[size1][1] = j;
                rep_Arr1[size1][2] = arr1[i][j];
                size1++;
            }
        }
    }
    cout<<"representaion of sparse matrix 1\n";
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < 3; j++) {
            cout << rep_Arr1[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            if (arr2[i][j] !=0) {
                rep_Arr2[size2][0] = i;
                rep_Arr2[size2][1] = j;
                rep_Arr2[size2][2] = arr2[i][j];
                size2++;
            }
        }
    }
    cout<<"representation of sparse matrix 2 \n";
    for (int i = 0; i < size2; i++) {
        for (int j = 0; j < 3; j++) {
            cout<< rep_Arr2[i][j] << " ";
        }
        cout << endl;
    }
    
//    Addition of the sparse matrix
  int size3=size1+size2;

	// Addition of the sparse matrix
int result[size3][3];  

for (int i = 0; i < size3; i++) {
    if (rep_Arr1[i][0] == rep_Arr2[i][0] && rep_Arr1[i][1] == rep_Arr2[i][1]) {
        result[i][0] = rep_Arr1[i][0];
        result[i][1] = rep_Arr1[i][1];
        result[i][2] = rep_Arr1[i][2] + rep_Arr2[i][2];
    }
}




	 cout<<"result \n";
    for (int i = 0; i < size3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Example sparse matrices
    int column, row;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> column;
    
    int sparseMatrix1[MAX_SIZE][MAX_SIZE];
     int sparseMatrix2[MAX_SIZE][MAX_SIZE];
    
    cout << "Enter the matrix of size " << column << " x " << row <<" for matrix-1"<< endl;
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            cin >> sparseMatrix1[i][j];
        }
    }
     cout << "Enter the matrix of size " << column << " x " << row <<" for matrix-2"<< endl;
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            cin >> sparseMatrix2[i][j];
        }
    }
    
    cout << "Original matrix-1:\n";
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            cout << sparseMatrix1[i][j] << " ";
        }
        cout << endl;
    }
    
     cout << "Original matrix-2:\n";
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            cout << sparseMatrix2[i][j] << " ";
        }
        cout << endl;
    }
    
    matrix(sparseMatrix1,sparseMatrix2, column, row);

    return 0;
}

