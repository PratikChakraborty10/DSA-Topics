#include<iostream>
using namespace std;
int binarySearchHelp(int *input, int l, int r, int x) {
     if (r >= l) 
   { 
        int mid = l + (r - l)/2;  
        if (input[mid] == x)  
            return mid;
        if (input[mid] > x) 
            return binarySearchHelp(input, l, mid-1, x);  
        return binarySearchHelp(input, mid+1, r, x); 
   } 
   return -1; 
}
int binarySearch(int input[], int size, int element) {
	binarySearchHelp(input, 0, size-1, element);
}
int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}
