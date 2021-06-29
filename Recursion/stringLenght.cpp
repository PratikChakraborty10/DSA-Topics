#include<bits/stdc++.h>
using namespace std;
int lenght(char s[]) {
    // Base Case
    if(s[0] == '\0') {
        return 0;
    }
    // Recursive Call
    int smallAns = lenght(s+1);
    // Small Calculation
    return 1 + smallAns;
}
int main() {
    char str[100];
    cin >> str;
    int l = lenght(str);
    cout << l << endl;
}