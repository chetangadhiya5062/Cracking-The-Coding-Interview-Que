#include<iostream>
#include<string>
using namespace std;

// Function to check if all strings in the array are unique
int is_Unique_cstring(string arr2[], int m){
    for(int i = 0; i < m; i++){
        int n = arr2[i].length();
        for(int j = 0; j < n; j++){
            for(int k = j + 1; k < n; k++){
                if(arr2[i][j] == arr2[i][k]){
                    return 0;  // Not unique characters in string arr2[i]
                }
            }
        }
    }
    return 1; // All strings have unique characters
}


// XOR-based function to find the unique number (appears once)
int is_Unique_numArray(int arr[], int n){
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {
    string arr2[] = {"abcd", "sffsefr", "chetan", "bhavesh", "ghanu", "hil", "sahaj"};
    int m = sizeof(arr2) / sizeof(arr2[0]);

    if (is_Unique_cstring(arr2, m))
        cout << "All strings have unique characters." << endl;
    else
        cout << "Some strings have repeated characters." << endl;

    return 0;
}

