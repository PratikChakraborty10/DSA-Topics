#include<iostream>
using namespace std;
int sum(int arr[], int n) {
    if(n==0) {
        return 0;
    }
    int smallAns = sum(arr+1, n-1);
    return smallAns + arr[0];
}
int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    cout << sum(arr, n) << endl;
    return 0;
}