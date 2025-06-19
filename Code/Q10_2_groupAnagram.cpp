/*
10.2 Group Anagrams: Write a method to sort an array of strings so that all the anagrams are next to
each other.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void display(const vector<string>& arrOfString) {
    for (const string &s : arrOfString) {
        cout << s << " ";
    }
    cout << endl;
}

bool sameFrequency(const string &str1, const string &str2 ){
    //check for same frequency of each character.
    if (str1.length() != str2.length()) return false;
    // int n = arrOfString1.size();
    // int m = arrOfString2.size();

    int charCount1[256] = {0};
    int charCount2[256] = {0};
    // count frequency of string1
    for (char ch : str1) {
        charCount1[(unsigned char)ch]++;
    }
    for (char ch : str2) {
        charCount2[(unsigned char)ch]++;
    }
    //if both array is same, then true.
    //it will have same frequency for same char in both the array.
    for (int i = 0; i < 256; i++) {
        if (charCount1[i] != charCount2[i]) return false;
    }
    return true;

}
bool isAnagram(const string &str1, const string &str2 ){
    // both should have same length
    //both should have same frequency of same characters.

    return sameFrequency(str1, str2);
    
}

void groupAnagrams(vector < string > &arrOfString){
    int n = arrOfString.size();

    for (int i = 0 ; i < n ; i ++){
        for (int j = i+1 ; j < n ; j++){
            
            if (isAnagram(arrOfString[i], arrOfString[j])){
                if (abs(i-j)==1) continue;//if both is consecutive., then continue.
                // if both is far by more then one unit distance, then make it nearest.
                swap(arrOfString[i+1], arrOfString[j]);
                
            }
        }
    }

}

int main(){
    vector <string> arrOfString = {"listen", "evil", "silent", "dusty", "vile", "study", "me" };

    cout << "Before grouping of anagrams : " << endl;
    display(arrOfString);

    cout << "After grouping of Anagrams : " << endl;
    groupAnagrams(arrOfString);
    display(arrOfString);


    return 0;
}



/*
NOTE : 
An anagram is a word or phrase formed by rearranging the letters of another word or phrase, using all the original letters exactly once.

✅ Example of Anagrams:
"listen" → "silent"

"elbow" → "below"

"evil" → "vile"

"dusty" → "study"

In all of these, the letters are just rearranged, not added or removed.
*/



