/*10.4 Sorted Search, No Size: You are given an array-like data structure Listy which lacks a size
method. It does, however, have an elementAt(i) method that returns the element at index i in
0( 1) time. If i is beyond the bounds of the data structure, it returns -1. (For this reason, the data
structure only supports positive integers.) Given a Listy which contains sorted, positive integers,
find the index at which an element x occurs. If x occurs multiple times, you may return any index.
*/

#include <iostream>
using namespace std;

int sortedNosizeSearch(int arr[], int size, int n){
    for (int i = 0 ; i < size ; i++){
        if (arr[i] == n) return i;
    }

    return 0;
}
int findSize(int arr[], int size){
    int i = 0;

    while (arr[i] != 0){
        i++;
    }
    size = i/2;
    // 2 is for int., we should use different different sizes 
    //according to datatype..
    return size;

}
int main(){
    int arr[] = {1,2,3,4,4,5,5,23,34,56,78,90,231};

    for (auto a : arr){
        cout << a << " ";
    }
    cout << endl;

    int size;
    int getsize = findSize(arr, size);

    cout << "Size of Array is : " << getsize << endl;
    int n;
    cout << "Enter the element : " ;
    cin >> n;

    int index = sortedNosizeSearch(arr, size, n);
    cout << "Element " << n << " found at index : " << index << endl;
    
    return 0;
}