/*Chef is going on a road trip and needs to apply for inter-district and inter-state travel e-passes. It takes A minutes to fill each inter-district e-pass application and B minutes for each inter-state e-pass application.

His journey is given to you as a binary string S of length N where 0 denotes crossing from one district to another district (which needs an inter-district e-pass), and a 1 denotes crossing from one state to another (which needs an inter-state e-pass).

Find the total time Chef has to spend on filling the various forms.

Input Format
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
Each test case contains two lines of input.
First line contains three space separated integers N,A and B.
Second line contains the string S.
Output Format
For each testcase, output in a single line the total time Chef has to spend on filling the various forms for his journey.*/
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,a,b;
        cin>>n>>a>>b;
        string str;
        cin>>str;
        int countZero=0;
        int countOne=0;
        for(int i=0;i<str.size();i++) {
            if(str[i]=='0') {
                countZero++;
            } else {
                countOne++;
            }
        }
        int ans = countZero*a + countOne*b;
        cout << ans << endl;
    }
    return 0;
}