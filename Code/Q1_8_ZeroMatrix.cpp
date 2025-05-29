#include<iostream>
using namespace std;
void printMatrix(int matrix[][3], int rows, int cols){
    for (int i = 0 ; i < rows; i++){
        for (int j = 0 ; j < cols; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void zeroMatrix(int matrix[][3], int rows, int cols){
    bool rowZero[3] = {false, false, false};
    bool colZero[3] = {false, false, false};

    // First pass: find all zeros
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                rowZero[i] = true;
                colZero[j] = true;
            }
        }
    }

    // Second pass: set rows and columns to zero
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (rowZero[i] || colZero[j]) {
                matrix[i][j] = 0;
            }
        }
    }
} 
int main(){

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };

    int rows = 3, cols = 3;

    cout << "Original Matrix:" << endl;
    printMatrix(matrix, rows, cols);

    cout << "Matrix after zeroing rows and columns:" << endl;
    zeroMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    return 0;
}