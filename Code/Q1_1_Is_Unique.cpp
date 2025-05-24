//Unique check through EXOR not optimized
#include<iostream>
using namespace std;

int is_Unique(int arr[], int n){
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        ans = ans ^ arr[i];
        }
    return ans;
    }

int main(){
    int arr[] = {1, 2,10,11,11,10,2,13,15,13,15};
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = is_Unique(arr, n);
    cout << "The unique element is: " << result << endl;
    return 0;
}