/*
    Time Complexity = O(n * log(n))
    Space Complexity = O(n)
    where n is the size of the array arr[]
*/
#include<iostream>
using namespace std;
int partition(int arr[], int si, int ei) {
    int pivot = arr[si];        // Assuming the si of the array as pivot 
    int smallCount = 0;         // Counting the elements smaller than the pivot element
    for(int i=si+1;i<=ei;i++) {
        if(arr[i] <= pivot) {
            smallCount++;            
        }
    }  
    // Stored the total number of elements smaller than arr[si] on smallCount
    int pivotIndex = si + smallCount;     // Getting the pivotIndex, where pivot element is to be stored
    arr[si] = arr[pivotIndex];            // Shifing the pivot element i.e., arr[si] to its correct position by swapping the element at that position to arr[si]
    arr[pivotIndex] = pivot;             // Pivot element is now shifted to pivotIndex i.e., to its correct position 

    // Ensure left half contains elements smaller that pivot elemet and rignt half contains eleements laeger than pivot

    int i = si;
    int j = ei;
    while(i <= pivotIndex && j > pivotIndex) {
        if(arr[i] <= pivot) {
            i++;
        }
        else if(arr[j] > pivot) {
            j--;
        } else {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    return pivotIndex;
}
void quick_sort_help(int arr[], int si, int ei) {
    // Base Case
    if(si >= ei) {
        return;
    }
    // Recursive Call to do partition of the array
    int p = partition(arr, si, ei);
    // Now p stores the position of the pivotIndex after partition
    quick_sort_help(arr, si, p-1);              // Sorting the left half untill pivotIndex
    quick_sort_help(arr, p+1, ei);              // Sorting the right half after pivotIndex
}
void quickSort(int arr[], int size) {
    // Recursive call
    quick_sort_help(arr, 0, size-1);
}
// Driver Code
int main() {
    int size;
    cin >> size;
    int *arr = new int[size];
    for(int i=0;i<size;i++) {
        cin >> arr[i];
    }
    quickSort(arr, size);
    for(int i=0;i<size;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete [] arr;
}