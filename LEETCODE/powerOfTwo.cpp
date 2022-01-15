#include<bits/stdc++.h>
using namespace std;
bool powerOfTwo(int n) {
    if(n)
    return !(n & (n-1));
    return false;
}
int main() {
    int n;
    cin >> n;
    int ans = powerOfTwo(n);
    cout << ans << endl;
    return 0;
}