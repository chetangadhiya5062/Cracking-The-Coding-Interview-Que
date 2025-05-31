#include<iostream>
#include<string.h>
using namespace std;

void stringAway(string str, string str2){

    if (str.find(str2) != string::npos || str2.find(str) != string::npos) {
        cout << "The strings are one away from each other." << endl;
    } else {
        cout << "The strings are not one away from each other." << endl;
    }
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