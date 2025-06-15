/*
10.1 Sorted Merge: You are given two sorted arrays, A and B, where A has a large enough buffer at the
end to hold B. Write a method to merge B into A in sorted order.
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> A = {1, 3, 5, 7, 0, 0, 0}; // Buffer at the end
    vector<int> B = {2, 4, 6};
    int i = 0;
    // while (i < A.size()){

    //     if(A[i] == 0){
    //         A[i] == B[i];
    //         i++;
    //     }
    // } //don't know why but it runs for infinite.
    for (int i = 0 ; i < A.size() ; i++){
        if(A[i] == 0){
            A[i] = B[i];
            i++;
        }
    }
    cout << "Array A after merging: ";
    for (int num : A) {
        cout << num << " ";
    }
    return 0;
}