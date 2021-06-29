#include<iostream>
using namespace std;
int power(int x, int n) {
    if(n==0) {
        return 1;
    }
    int output = power(x, n-1);
    return output * x;
}
int main() {
    int n;
    cin  >> n;
    int x;
    cin >> x;
    int ans = power(n, x);
    cout << ans << endl;
    return 0;
}