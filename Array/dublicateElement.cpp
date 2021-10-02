#include<iostream>
#include<algorithm>
using namespace std;
int duplicateElement(int arr[], int size) {
    int arraySum = 0;
    for(int i=0;i<size;i++) {
        arraySum = arraySum + arr[i];
    }
    int n = size - 2;
    int sumUptoN = (n*(n+1))/2;
    return arraySum - sumUptoN;
}
int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int ans = duplicateElement(arr, n);
    cout << ans << endl;
    delete[] arr;
    return 0;
}
/*
Time Complexity = O(n)

This is because here in this solution we have to iterate the complete array only once to find the sum of the elements of the full array.

Considering a test case: arr[] = {4, 3, 2, 4, 1, 0}
sum of all the elements of the array = 4 + 3 + 2 + 4 + 1 + 0 =  14
n = size - 2;
  = 4

sumUptoN = (n*(n+1)) 
         = (4*(4+1))/2 
         = (4*5)/2 
         = 10

return sum - sumUptoN;
   => 14 - 10
   => 4 
   Therefore, here we can see that 4 is the duplicate element present in this array. 

   By - Pratik Chakraborty
*/