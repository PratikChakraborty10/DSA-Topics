#include<iostream>
#include<sys/time.h>
using namespace std;
long getTimeinMicroSeconds() {
    struct timeval start;
    gettimeofday(&start, NULL);
    return start.tv_sec * 1000000 + start.tv_usec;
}
void merge(int arr[], int l, int h, int m) {
    int i, j, k, temp[h-l+1];
    i = l;
    k = 0;
    j = m+1;
    while(i <= m && j <= h) {
        if(arr[i]<arr[j]) {
            temp[k++]=arr[i++];
        } else {
            temp[k++]=arr[j++];
        }
    }
    while(i<=m) {
        temp[k++]=arr[i++];
    }
    while(j<=h) {
        temp[k++]=arr[j++];
    }
    for(i=l; i<=h;i++) {
        arr[i]=temp[i-l];
    }
}
void merges(int arr[], int l, int h) {
    int m;
    if(l<h) {
        m=(l+h)/2;
        merges(arr,l,m);
        merges(arr,m+1,h);
        merge(arr,l,h,m);
    }
}
void mergeSort(int arr[], int n) {
    merges(arr, 0, n-1);
}
int main() {
    for(int n=10;n<=1000000;n*=10) {
        int *arr = new int[n];
        long starttime, endtime;
        for(int i=0;i<n;i++) {
            arr[i] = arr[n-i];
        }
        starttime = getTimeinMicroSeconds();
        mergeSort(arr, n);
        endtime = getTimeinMicroSeconds();
        cout << "MergeSort time " << n << " = " << endtime - starttime << endl << endl << endl;
    }

}