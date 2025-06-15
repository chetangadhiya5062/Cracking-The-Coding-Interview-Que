#include<iostream>
#include<string>
using namespace std;

string stringCompression(string str, string &str2) {
    int n = str.length();
    int i = 0;
    char c = str[i];

    if (n == 0) {
        return str;
    }
    else {

        int charCount[256] = {0}; // Assuming ASCII characters
        
        while (i < n) {
            if (str[i] == str[i-1]){
                
                charCount[c]++;
                if (charCount[c] > 0){
                    str2 += c;
                    str2 += to_string(charCount[c]);// Read the note written at the end of this code. for understading the to_string function.
                    charCount[c] = 0; // Reset count to avoid duplicates
                    i++;
                    
                } else {
                    i++;
                    continue; // Skip to next character if current is already counted
                }
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

/*
⚠️ What's going wrong here?

You’re directly appending an integer count (e.g., 6) as a character, not as a number string. So C++ treats that integer as an ASCII code.

For example:

charCount[c] = 6

str2 += charCount[c] → appends ASCII character 6 → non-printable/symbol like ♠
*/