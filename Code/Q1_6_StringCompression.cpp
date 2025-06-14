#include<iostream>
#include<string>
using namespace std;

int stringCompression(string str, string &str2) {
    int n = str.length();
    if (n == 0) {
        str2 = "";
        return 0;
    }
    return 0;
}

int main(){
    string str;
    string str2;
    cout << "Enter a string to compress: ";
    getline(cin, str); // string input leva
    int compressedLength = stringCompression(str, str2);
    
    if (compressedLength == 0) {
        cout << str << endl;
    } else {
        cout << str2 << compressedLength << endl;
    }
    return 0;
}