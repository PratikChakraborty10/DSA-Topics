#include<bits/stdc++.h>
using namespace std;
void helper(char arr[], int start) {
    if(arr[start] == '\0') {
        return;
    }
    helper(arr, start+1);
    if(arr[start] == 'p' && arr[start+1] == 'i') {
        for(int i=strlen(arr);i>=start+2;i--) {
            arr[i+2] = arr[i];
        }
        arr[start] = '3';
        arr[start+1] = '.';
        arr[start+2] = '1';
        arr[start+3] = '4';
    }
}
void replacePi(char arr[]) {
    // Write your code here
    helper(arr, 0);
}
int main() {
    char arr[1000];
    cin.getline(arr, 1000);
    replacePi(arr);
    cout << arr << " ";
}