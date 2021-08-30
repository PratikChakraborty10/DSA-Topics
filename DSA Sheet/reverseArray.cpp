#include<iostream>
using namespace std;
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverseArray(int arr[], int start, int end) {
    // Base Case
    if (start >= end) {
        return;
    }
    // Small Calculation
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
     
    // Recursive Function calling
    reverseArray(arr, start + 1, end - 1);
}
void printArray(int arr[], int n) {
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}
int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    reverseArray(arr, 0, n-1);
    printArray(arr, n);
}