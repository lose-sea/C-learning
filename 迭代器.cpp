#include<iostream>  
#include<vector> 
#include<string> 
#include<cstdio>
#include<cstring>
using namespace std; 
int main()  
{  
    // string str = "abcdef"; 
    // string::iterator it1 = str.begin();   
    // string::iterator it2 = str.end();  
    // int n = it1 - it2; 
    // cout << n << endl;  // -6

    // 比较大小
    // if(it1 < it2) {
    //     cout << "it1 小于 it2" << endl; 
    // }
        
    // else {
    //     cout << "it1 小于 it2" << endl;
    // } 

    // 需要解引用
    // cout << *it1 << endl;  // a


    // for (string::iterator it1 = str.begin(); it1 < str.end(); it1++) {
    //     cout << *it1 << " ";  
    // } // a b c d e f
        
    // // 倒序打印
    // for (auto it2 = str.end(); it2 >= it1; it2--) { 
    //     cout << *it2 << " "; 
    // }   // f e d c b a



    string str; 
    char c = 0; 
    for (c = 'a'; c <= 'z'; c++) {
        str.push_back(c); 
    }
    cout << str << endl;  // abcdefghijklmnopqrstuvwxyz
    return 0; 
}