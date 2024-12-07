#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void addColumn(int** matrix, int rows, int& cols, int* newColumn, int position) {
    if (position < 0 || position > cols) {
        std::cerr << "Error: Invalid position for the new column." << std::endl;
        return;
    }
    int** newMatrix = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        newMatrix[i] = new int[cols + 1];
        int newColIndex = 0;

        for (int j = 0; j < position; ++j) {
            newMatrix[i][newColIndex++] = matrix[i][j];
        }
        newMatrix[i][newColIndex++] = newColumn[i];

        for (int j = position; j < cols; ++j) {
            newMatrix[i][newColIndex++] = matrix[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    matrix = newMatrix;
    ++cols;
}

void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " " ;
        }
        std::cout << std::endl;
    }
}

int main() {
    int rows = 3, cols = 3;

    int** matrix = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = i * cols + j + 1;
        }
    }

    std::cout << "Initial matrix:" << std::endl;
    printMatrix(matrix, rows, cols);

    int newColumn[] = { 10, 20, 30 };

    addColumn(matrix, rows, cols, newColumn, 1);

    std::cout << "Matrix after adding new column:" << std::endl;
    printMatrix(matrix, rows, cols);

    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}


