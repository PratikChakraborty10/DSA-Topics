#include<iostream>
using namespace std;
void removeDuplicates(char s[]) {
    if(s[0] == '\0') {
        return;
    }
    removeDuplicates(s + 1);
    if(s[0] == s[1]) {
        int i = 1;
        for(; s[i] != '\0'; i++) {
            s[i-1] = s[i];
        } 
        s[i-1] = s[i];
    }
}
int main() {
    char str[100];
    cin.getline(str, 100);
    removeDuplicates(str);
    cout << str << endl;
}