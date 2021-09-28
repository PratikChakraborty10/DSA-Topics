#include<iostream>
#include<sys/time.h>
using namespace std;
long getTimeinMicroSeconds() {
    struct timeval start;
    gettimeofday(&start, NULL);
    return start.tv_sec * 1000000 + start.tv_usec;
}
void selectionSort(int input[], int n) {
	for(int i = 0; i < n-1; i++ ) {
	// Find min element in the array
	int min = input[i], minIndex = i;
	for(int j = i+1; j < n; j++) {
		if(input[j] < min) {
			min = input[j];
			minIndex = j;
		}
	}
	// Swap
	int temp = input[i];
	input[i] = input[minIndex];
	input[minIndex] = temp;
	}
}
int main() {
    for(int n=10;n<=1000000;n*=10) {
        int *arr = new int[n];
        long starttime, endtime;
        for(int i=0;i<n;i++) {
            arr[i] = arr[n-i];
        }
        starttime = getTimeinMicroSeconds();
        selectionSort(arr, n);
        endtime = getTimeinMicroSeconds();
        cout << "MergeSort time " << n << " = " << endtime - starttime << endl << endl << endl;
    }
}