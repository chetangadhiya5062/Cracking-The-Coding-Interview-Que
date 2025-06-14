#include<iostream>
#include<string.h>
using namespace std;

void stringAway(string str, string str2){

    int difference = 0;
    int n = str.length();
    int m = str2.length();

    if (abs(n - m) > 1) {
        cout << "Strings are not one away" << endl;
        return;
    }
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (str[i] != str2[j]) {
            difference++;
            if (difference > 1) {
                cout << "Strings are not one away" << endl;
                return;
            }
            if (n > m) {
                i++;
            } else {
                j++;
            }
        } else {
            i++;
            j++;
        }
    }
    cout << "Strings are one away" << endl;
}

int main(){
    string str;
    cout << "Enter a real string : ";
    getline(cin, str); // string input leva
    string str2;
    cout << "Enter another string for compare : ";
    getline(cin, str2);
    
    
    stringAway(str, str2);
    
    return 0;
}
    /*
    
    str.find(substr) returns the index of the first occurrence 
    of substr in str, or string::npos if substr is not found.
    
    So, str1.find(str2) != string::npos checks if str2 is a substring of str1, and vice versa.
    
    */