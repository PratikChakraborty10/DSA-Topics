#include<iostream>
using namespace std;
int countDigits(int n) {
    if(n==0) {
        return 0;
    }
    int smallAns = countDigits(n/10);
    return smallAns + 1;
}
int main() {
    int n;
    cin >> n;
    cout << countDigits(n) << endl;
    return 0;
}