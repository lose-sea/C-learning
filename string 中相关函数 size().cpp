#include<iostream>  
#include<vector> 
#include<string> 
#include<cstdio>
#include<cstring>
using namespace std; 
int main() {
    // string s1; 
    // string s2 = "hello"; 
    // string s3 = "abc      123"; 
    // cout << s1.size() << endl;  // 0
    // cout << s2.size() << endl;  // 5
    // cout << s3.size() << endl;  // 11

    // string str1; 
    // cin >> str1; 
    // cout << str1 << endl;  // hello
    // cout << str1.size() << endl; // 5


    string str = "hello world";
    cout << str << endl;  // hello world
    int sz = str.size(); 
    for (int i = 0; i < sz; i++) {
        cout << str[i] << " "; // h e l l o   w o r l d
    } 
    return 0; 
}