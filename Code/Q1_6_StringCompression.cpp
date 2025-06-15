#include<iostream>
#include<string>
using namespace std;

bool stringCompression(string str, string &str2) {
    int n = str.length();
    int i = 0;
    if (n == 0) {
        return false;
    }
    else {

        int charCount[256] = {0}; // Assuming ASCII characters
        for (char c : str) {
            charCount[c]++;
        }
        while (i < n) {
            char c = str[i];
            str2 += c;
            str2 += charCount[c];
            charCount[c] = 0; // Reset count to avoid duplicates
            i++;
        }
        if (str2.length() < n) { // Return true if compressed string is shorter
            return true;
        }
    }
}

int main(){
    string str;
    string str2;
    cout << "Enter a string to compress: ";
    getline(cin, str); // string input leva
    
    if (stringCompression(str, str2)) {
        cout << "new string : " << str2 << endl;
    } else {
        cout << "String would not be able to compress : " << str << endl;
    }
    return 0;
}