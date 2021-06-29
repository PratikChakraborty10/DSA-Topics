#include<iostream>
using namespace std;
// Here we are taking the first / start index element as pivot
int partition(int arr[], int si, int ei) {
    int pivot = arr[si];             // Taking the start element as pivot
    int countSmaller = 0;            // Counting all the elements smaller than the pivot element
    for(int i=si;i<=ei;i++) {
        if(arr[i] < pivot) {
            countSmaller++;
        }
    }                                // Finally stored all the count of all smaller elements in countSmaller 
    int pivotIndex = si + countSmaller;     // Shifting pivot element i.e., 'si' to the pivotIndex, by leaving the space for all the smaller element less that pivot element

    // Swapping the element already present in pivotIndex with arr[si], i.e., pivot element
    int temp = arr[si];
    arr[si] = arr[pivotIndex];
    arr[pivotIndex] = temp;         // pivot element has been sent to its correct position by leaving space for elements smaller that pivot element


    // Ensures left half contains elements smaller than pivot and right half contains elements greater than pivot
    int i = si;
    int j = ei;
    while(i <= pivotIndex && j > pivotIndex) {
        while(arr[i] <= pivot) {
            i++;
        }
        while(arr[j] > pivot) {
            j--;
        }
        if(i < pivotIndex && j > pivotIndex) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    return pivotIndex;
    
}
void quick_sort(int arr[], int si, int ei) {
    // Base Case
    if(si >= ei) {
        return;
    }
    // Recursive Call to do partition of the array
    int p = partition(arr, si, ei);
    // Now p stores the position of the pivotIndex after partition
    quick_sort(arr, si, p-1);     // Sorting the left half untill pivotIndex
    quick_sort(arr, p+1, ei);     // Sorting the right half after pivotIndex
    
}
void quickSort(int arr[], int size) {
    // Recursive call for the same quick_sort() function that contains the size of array for custom input
    quick_sort(arr, 0, size-1);
}
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