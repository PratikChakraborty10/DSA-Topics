#include<bits/stdc++.h>
using namespace std;
void findMaxMinElement(int arr[], int n) {
    cout << *min_element(arr, arr+n) << endl;
    cout << *max_element(arr, arr+n) << endl;
}
int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    findMaxMinElement(arr, n);
}