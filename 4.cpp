#include <iostream>
using namespace std;

int diagonalSum(int **matrix, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(matrix[i] + i);
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    // Allocate memory for the matrix rows
    int **matrix = new int *[n];
    for (int i = 0; i < n; i++) {
        int numElements;
        cin >> numElements;
        matrix[i] = new int[numElements];
        for (int j = 0; j < numElements; j++) {
            cin >> matrix[i][j];
        }
    }

    int sum = diagonalSum(matrix, n);
    cout << "Sum of elements on the primary diagonal: " << sum << endl;

    // Deallocate memory for the matrix rows
    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    // Deallocate memory for the matrix
    delete[] matrix;

    return 0;
}
