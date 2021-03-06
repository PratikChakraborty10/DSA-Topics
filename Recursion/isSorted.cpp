#include<iostream>
using namespace std;
bool isSorted(int arr[], int n) {
    if(n==0 || n==1) {
        return true;
    }
    if(arr[0] > arr[1]) {
        return false;
    }
    bool isSmallerSorted = isSorted(arr+1, n-1);
    if(isSmallerSorted) {
        return true;
    } else { 
        return false;
    }
}
int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    cout << isSorted(arr, n) << endl;
}
