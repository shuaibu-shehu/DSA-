#include <iostream>

class SparseMatrix {
private:
    int elements[100][100]; // Assuming a maximum size of 100x100
    int rows, cols;

public:
    SparseMatrix(int m, int n) : rows(m), cols(n) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                elements[i][j] = 0;
            }
        }
    }

    void insert(int row, int col, int value) {
        elements[row][col] = value;
    }

    SparseMatrix add(const SparseMatrix &other) {
        if (rows != other.rows || cols != other.cols) {
            std::cerr << "Matrix dimensions don't match for addition." << std::endl;
            exit(1);
        }

        SparseMatrix result(rows, cols);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.elements[i][j] = elements[i][j] + other.elements[i][j];
            }
        }

        return result;
    }

    SparseMatrix multiply(const SparseMatrix &other) {
        if (cols != other.rows) {
            std::cerr << "Matrix dimensions are incompatible for multiplication." << std::endl;
            exit(1);
        }

        SparseMatrix result(rows, other.cols);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < other.cols; j++) {
                for (int k = 0; k < cols; k++) {
                    result.elements[i][j] += elements[i][k] * other.elements[k][j];
                }
            }
        }

        return result;
    }

    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                std::cout << elements[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    SparseMatrix matrixA(3, 3);
    SparseMatrix matrixB(3, 3);

    matrixA.insert(0, 0, 1);
    matrixA.insert(0, 2, 2);
    matrixA.insert(1, 1, 3);
    matrixA.insert(2, 0, 4);

    matrixB.insert(0, 1, 5);
    matrixB.insert(1, 1, 6);
    matrixB.insert(2, 0, 7);
    matrixB.insert(2, 2, 8);

    std::cout << "Matrix A:" << std::endl;
    matrixA.display();

    std::cout << "\nMatrix B:" << std::endl;
    matrixB.display();

    SparseMatrix matrixC = matrixA.add(matrixB);
    std::cout << "\nMatrix C (A + B):" << std::endl;
    matrixC.display();

    SparseMatrix matrixD = matrixA.multiply(matrixB);
    std::cout << "\nMatrix D (A * B):" << std::endl;
    matrixD.display();

    return 0;
}

