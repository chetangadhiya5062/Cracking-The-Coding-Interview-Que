#include <iostream>
#include <algorithm>  // for sort()
using namespace std;

bool arePermutations(string str1, string str2) {
    // Step 1: Check if lengths are equal
    if (str1.length() != str2.length()) {
        return false;
    }

    // Step 2: Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Step 3: Compare sorted strings
    return str1 == str2;
}

int main() {
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    if (arePermutations(s1, s2)) {
        cout << "The strings are permutations of each other." << endl;
    } else {
        cout << "The strings are NOT permutations of each other." << endl;
    }

    return 0;
}
