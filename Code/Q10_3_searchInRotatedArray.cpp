#include <iostream>
#include <vector>
#include <algorithm>// for swap
using namespace std;

void printArray(int arr[][5], int row, int col){
    for (int i = 0 ; i < row ; i++){
        for (int j = 0; j < col ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void transpose(int arr[][5], int row, int col){
    for (int i = 0 ; i < row ; i++){
        for (int j = i+1 ; j < col ; j++){
            swap(arr[i][j], arr[j],arr[i]);
        }
    }
}

void reverseArr(int arr[][5], int row, int col){
    for (int i = 0 ; i < row ; i ++){
        int start = 0;
        int end = col-1;

        while (start < end){
            swap(arr[i][start], arr[end][i]);
            start ++;
            end --;
        }
    }
}
void rotatedArray(int arr[][5], int row, int col, int m){
    //first get transpose matrix and then reverse each row..
}
int main(){
    int arr[5][5] = {
        {12,243,44,556,443},
        {1236,6,34,32,357,},
        {53,214,535,655,42},
        {22,345,677,654,33},
        {4,2123,456,898,63}
    };

    int row = 5;
    int col = 5;

    cout << "Original Array : " << endl;
    printArray(arr, row, col);

    int m;
    int n;

    cout << "Enter rotation number : " << endl;
    cin >> m;

    cout << "Here is the " << m << " time Rotated array : " << endl;
    rotatedArray(arr, row, col, m);
    //display rotated array.
    printArray(arr, row, col);

    cout << "Enter the number for search : " << endl;
    cin >> n;

    searchRotatedArray(arr, row, col, m, n);

    return 0;
}