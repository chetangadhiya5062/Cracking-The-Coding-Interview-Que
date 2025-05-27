#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout << "Enter a string with spaces: ";
    getline(cin, str); // string input leva

    for(int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            str.replace(i, 1, "%20");// jya space chhe e 1 j index replaced with "%20"
            // jo 2 rakho to space vali index ane e index +1 index bannene "%20" thi replace kare
        }
    }
    cout << "URLified string: " << str << endl;
    return 0;
}