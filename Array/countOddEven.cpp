#include<iostream>
using namespace std;
void countOddEven(int arr[], int n) {
    int oddCount = 0;
    int evenCount = 0;
    for(int i=0;i<n;i++) {
        if(arr[i] & 1 == 1) {
            oddCount++;
        } else {
            evenCount++;
        }
    }
    cout << "Even Count = " << evenCount << endl;
    cout << "Odd Count = " << oddCount << endl;
}
int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    countOddEven(arr, n);
    return 0;
}