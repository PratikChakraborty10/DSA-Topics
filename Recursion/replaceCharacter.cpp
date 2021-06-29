#include<iostream>
using namespace std;
void replaceCharacter(char arr[], char c1, char c2) {
    if(arr[0]=='\0') {
        return;
    }
    if(arr[0]==c1) {
        arr[0] = c2;
    }
    replaceCharacter(arr+1, c1, c2);
    
}
int main() {
    char arr[1000];
    cin.getline(arr, 1000);
    char c1, c2;
    cin >> c1 >> c2;
    replaceCharacter(arr, c1, c2);
    cout << arr << endl;
}