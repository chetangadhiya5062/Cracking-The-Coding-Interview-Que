// incomplete.

#include<iostream>
#include<string.h>
using namespace std;

bool ispalindromePermutation(string str1){
    int charCount[256] = {0}; // Assuming ASCII characters
    int oddCount = 0;

    for (char c : str1){
        if(c != ' '){
            charCount[tolower(c)]++; // Convert to lowercase and count characters
        }
    }
    for (int i = 0 ; i < 256; i++){
        if (charCount[i] % 2 != 0){
            oddCount++;
        }
    }
    return oddCount <= 1; // At most one odd count is allowed
}

int main(){

    string str1;

    cout << "Enter a string: ";
    getline(cin, str1);

    if (ispalindromePermutation(str1)){
        cout << "The string is a permutation of a palindrome." << endl;
    } else {
        cout << "The string is not a permutation of a palindrome." << endl;
    }
    return 0;
}