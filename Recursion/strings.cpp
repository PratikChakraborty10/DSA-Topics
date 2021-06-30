#include<iostream>
using namespace std;
int main() {
    string *sp = new string;
    *sp = "pratik";
    string s1 = "abc";
    string s2 = "def";
    string s3 = s1 + s2;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << sp << endl;
    cout << *sp << endl;
    s1 += s2;
    cout << s1 << endl;
    cout << s1.size() << endl;
    cout << s1.length() << endl;
    cout << s1.find("bc") << endl;
    cout << s1.substr(3) << endl;
    cout << s1.substr(3, 2) << endl;
 }