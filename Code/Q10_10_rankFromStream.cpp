/*
10.1o Rank from Stream: Imagine you are reading in a stream ofintegers.Periodically, youwish to be able
to look up the rank of a number x (the number of values less than or equal tox).lmplement the data
structures and algorithms to support these operations.That is, implementthe methodtrack(int
x), which is called when each number is generated, and the method getRankOfNumber(int
x), which returns the number of values less than or equal tox (not includingx itself).
EXAMPLE
Stream (in order of appearance): 5, 1, 4, 4, 5, 9, 7, 13, 3
getRankOfNumber(l) 0
getRankOfNumber(3) = 1
getRankOfNumber(4) 3
*/

#include <iostream>
// #include <vector>

using namespace std;

void printArray(int arr[], int size){
    for (int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int rankFromStream(int arr[], int size, int n){
    // vector<int> vectArray;
    int count = 0;

    for (int i = 0 ; i < size ; i++){
        if (arr[i] < n){
            // vectArray.push_back(arr[i]);
            // or
            count ++;
        }
    }
    // return vectArray.size();
    //or
    return count;
}
int main(){
    int arr[] = {5, 1, 4, 4, 5, 9, 7, 13, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int n;

    cout << "Array is : " ;
    printArray(arr, size);

    cout << "Find the rank of n = ";
    cin >> n;

    int rank = rankFromStream(arr, size, n);
    cout << "rank of " << n << " is " << rank;
    return 0;
}