#include<bits/stdc++.h>
using namespace std;
int lenght(char input[]) {
    int len=0;
    for(int i=0;input[i]!='\0';i++) {
        len++;
    }
    return len;
}
// Helper Function
int stringToNumber(char input[], int last) {
    if(last==0) {
        return input[last] - '0';
    }
    int smallAns = stringToNumber(input, last - 1);
    int a = input[last] - '0';
    return smallAns * 10 + a;
}
int stringToNumber(char input[]) {
    int len = lenght(input);
    return stringToNumber(input, len-1);
}
int main() {
    char input[100];
    cin >> input;
    cout << stringToNumber(input) << endl;
}