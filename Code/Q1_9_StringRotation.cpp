/*
1.9 String Rotation:Assumeyou have a method isSubstringwhich checks if one word is a substring
of another. Given two strings, sl and s2, write code to check if s2 is a rotation of sl using only one
call to isSubstring(e.g.,"waterbottle"is a rotation of"erbottlewat").
*/

#include <iostream>
#include <string>
using namespace std;

bool isSubstring(const string& s1, const string& s2) {
    return s1.find(s2) != string::npos;
}
int main(){
    string s1, s2;
    cout << "Enter first string: ";
    getline(cin, s1);
    cout << "Enter second string: ";
    getline(cin, s2);

    // Check if s2 is a rotation of s1
    if (s1.length() == s2.length() && isSubstring(s2, s1 + s1)) {
        cout << s2 << " is a rotation of " << s1 << endl;
    } else {
        cout << s2 << " is not a rotation of " << s1 << endl;
    }

    return 0;
}

/*
this logic is very good..

isSubstring(s2, s1 + s1)
*/