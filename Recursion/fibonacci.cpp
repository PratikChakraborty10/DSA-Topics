#include<iostream>
using namespace std;
int fibo(int n) {
    if(n==0 || n==1) {
        return 1;
    }
    int smallAns1 = fibo(n-1);
    int smallAns2 = fibo(n-1);
    return smallAns1 + smallAns2;
}
int main() {
    int n;
    cin >> n;
    cout << fibo(n) << endl;
    return 0;
}
// Fibonacci  Series: 1 1 2 3 5 8 13 21...