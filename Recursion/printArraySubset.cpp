#include<iostream>
#include<cmath>
using namespace std;
void printSubsetsOfArray(int input[], int size) {
	// Write your code here
    int count = pow(2, size);
    for(int i=0;i<count;i++) {
        for(int j=0;j<size;j++) {
            if ((i & (1 << j)) > 0)
				cout << input[j] << " ";
        }
        cout << endl;
    }
}
int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
  	cin >> input[i];
  printSubsetsOfArray(input, length);
}
