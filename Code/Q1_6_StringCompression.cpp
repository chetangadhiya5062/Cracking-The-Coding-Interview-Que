#include<iostream>
#include<string>
using namespace std;

string stringCompression(const string &str) {
    int n = str.length();
    
    //if empty string
    if (n == 0) {
        return str;
    }
    int i = 0;
    string str2 = "";
            //each character count.
    // int charCount[256] = {0}; // Assuming ASCII characters
    //traverse in string
    while (i < n) {
        char c = str[i];
        int charCount = 0;

        //count the occurrences of each char.
        while(i < n && str[i] == c){
            charCount ++;
            i++;
        }

        str2 += c;
        str2 += to_string(charCount);            
        
    }
        // Return if compressed string is shorter
    if (str2.length() < n) { 
        return str2;
    }
    else {
        // If not compressed, return original string
        return str;
    }
    
}

int main() {
    string str  ;
    cout << "Enter a string: ";
    cin >> str;

    string compressed = stringCompression(str);

    cout << "Compressed string: " << compressed << endl;

    return 0;
}
/*
⚠️ What's going wrong here?

You’re directly appending an integer count (e.g., 6) as a character, not as a number string. So C++ treats that integer as an ASCII code.

For example:

charCount[c] = 6

str2 += charCount[c] → appends ASCII character 6 → non-printable/symbol like ♠
*/