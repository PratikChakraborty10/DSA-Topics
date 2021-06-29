#include<iostream>
using namespace std;
int lenght(char s[]) {
    if(s[0] == '\0') {
        return 0;
    }
    int smallAns = lenght(s+1);
    return 1 + smallAns;
}
void removeX(char s[]) {
    if(s[0] == '\0') {
        return;
    }
    if(s[0] != 'x') {
        removeX(s+1);
    } else {
        int i = 1;
        for(;s[i] != '\0';i++) {
            s[i-1] = s[i];
        }
        s[i-1] = s[i];
        removeX(s);
    }
}
int main() {
    char str[100];
    cin >> str;
    int l1 = lenght(str);
    cout << l1 << endl;
    removeX(str);
    cout << str << endl;
    int l2 = lenght(str);
    cout << l2 << " [Updated lenght after removing unwanted x]" << endl;
    return 0;
}