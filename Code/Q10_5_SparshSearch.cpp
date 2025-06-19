/*
10.5 Sparse Search: Given a sorted array of strings that is interspersed with empty strings, write a
method to find the location of a given string.
EXAMPLE
Input : ball,
{"at","","","","ball","","","car","","","dad","",""};
Output:4
*/

#include <iostream>
#include <vector>
using namespace std;

void sparshSearch(vector<string> arr, string input){
    for (int i = 0 ; i < arr.size(); i++){
        if (arr[i] == input){
            cout << i << endl;
        }
    }
}
int main(){
    vector<string> arr = {"at","","","","ball","","","car","","","dad","",""};
    string input = "ball";

    sparshSearch(arr, input);

    return 0;
}