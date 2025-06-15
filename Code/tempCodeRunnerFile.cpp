#include<iostream>
#include<string>
using namespace std;

string stringCompression(string str, string &str2) {
    int n = str.length();
    int i = 0;
    if (n == 0) {
        return str;
    }
    else {

        int charCount[256] = {0}; // Assuming ASCII characters
        for (char c : str) {
            charCount[c]++;
        }
        while (i < n) {
            char c = str[i];
            if (charCount[c] > 0){
                str2 += c;
                str2 += charCount[c];
                charCount[c] = 0; // Reset count to avoid duplicates
                i++;
                
            } else {
                i++;
                continue; // Skip to next character if current is already counted
            }
        }
        if (str2.length() < n) { // Return true if compressed string is shorter
            return str2;
        }
        else {
            // If not compressed, return original string
            return str;
        }
    }
}

int main(){
    string str;
    string str2;
    cout << "Enter a string to compress: ";
    getline(cin, str); // string input leva
    str2 = stringCompression(str, str2);
    cout << "Compressed string: " << str2 << endl;
    return 0;
}