#include<iostream>
using namespace std;
void merge(int arr[], int si, int ei) {
    int size = ei - si + 1;
    int mid = (si + ei)/2;
    int *output = new int[size];
    int i = si;
    int j = mid + 1;
    int k = 0;
    while(i <= mid && j <= ei) {
        if(arr[i] < arr[j]) {
            output[k] = arr[i];
            i++;
            k++;
        } else {
            output[k] = arr[j];
            j++;
            k++;
        }
    }
    while(i <= mid) {
        output[k] = arr[i];
        k++;
        i++;
    }
    while(j <= ei) {
        output[k] = arr[j];
        k++;
        j++;
    }
    int m = 0;
    for(int i=si; i<= ei; i++) {
        arr[i] = output[m];
        m++;
    }
    delete [] output;
}
void merge_sort(int arr[], int si, int ei) {
    if(ei >= si) {
        return;
    }
    int mid = (si + ei)/2;
    merge_sort(arr, si, mid);
    merge_sort(arr, mid+1, ei);
    merge(arr, si, ei);
}
int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    merge_sort(arr, 0, n-1);
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}