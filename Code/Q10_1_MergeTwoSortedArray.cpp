/*
10.1 Sorted Merge: You are given two sorted arrays, A and B, where A has a large enough buffer at the
end to hold B. Write a method to merge B into A in sorted order.
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> A = {1, 3, 5, 7}; 
    vector<int> B = {2, 4, 6};
    vector<int> C;
    

    int i = 0, j = 0;
    // while (i < A.size()){

    //     if(A[i] == 0){
    //         A[i] == B[i];
    //         i++;
    //     }
    // } //don't know why but it runs for infinite.
    while (i < A.size() || j < B.size()){
        if (A[i] <= B[j]){
            C.push_back(A[i]);
            i++;
        }
        else if (A[i] > B[j]){
            C.push_back(B[j]);
            j++;
        }
    }
    
    cout << "Merged Sorted Vector: ";
    for (auto num : C){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}