#include<iostream>
#include<algorithm>
using namespace std;
int findUnique(int arr[], int n) {
    int answer = 0;
    for(int i=0;i<n;i++) {
        answer = answer ^ arr[i];
    }
    return answer;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int ans = findUnique(arr, n);
    cout << ans << endl;
    return 0;
}

/* Time Complexibity = O(n)
This approach uses 2 properties of XOR:
    1. XOR of a number with itself is 0.
    2. XOR of a number with 0 is number itself.

    Let us understand this approach with the help of an example:
    arr[]= 2 3 1 6 3 6 2
    Taking their xor:
    Answer = 2 ^ 3 ^ 1 ^ 6 ^ 3 ^ 6 ^ 2
    Now XOR is associative and commutative, so I can write it as:
    Answer = (2^2) ^ (3^3) ^ 1 ^ (6 ^ 6)
           = 0 ^ 0 ^ 1 ^ 0
           = 1

    By - Pratik Chakraborty
 */