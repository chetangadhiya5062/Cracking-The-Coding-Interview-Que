#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void transpose(int arr[][3], int row, int col){
    
    for (int  i = 0 ; i < row; i ++){
        for (int j = i+1 ; j <col ; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void reverseRows(int arr[][3], int row, int col){
    for (int i = 0; i < row; i++){
        int start = 0;
        int end = col -1;

        while(start < end){
            swap(arr[i][start], arr[i][end]);
            start ++;
            end --;
        }
    }
    
}

void printArray(int arr[][3], int row, int col){
    for(int i = 0 ; i < row ; i++){
        for (int j = 0 ; j < col ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int row = 3;
    int col = 3;
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    cout << "Original Matrix:" << endl;
    printArray(arr, row, col);
    cout << "Transposed Matrix:" << endl;
    transpose(arr, row, col);
    printArray(arr, row, col);
    cout << "Rotated Matrix:" << endl;
    reverseRows(arr, row, col);
    printArray(arr, row, col);

    
    
    return 0;
}
// Q1.7: Image Rotation
// Write a program to rotate an NxN matrix by 90 degrees clockwise.


// Rotate the matrix 90 degrees clockwise
    //output the rotated matrix = tranpose + reverse each row
    // Step 1: Transpose the matrix
    /*
    {
        {1, 4, 7},
        {2, 5, 8},
        {3, 6, 9}
    }
    */// reverse each row
    /*
    {   {7, 4, 1},
        {8, 5, 2},
        {9, 6, 3}
    }
    */