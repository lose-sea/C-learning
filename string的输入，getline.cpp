#include<iostream>  
#include<vector> 
#include<string> 
#include<cstdio>
#include<cstring>
using namespace std; 
int main() {
    // string s1; // 空字符串
    // string s2 = "abc";  
    // string s3("hello, world"); 
    // s2 = s3; // 赋值
    // cout << "s2: " << s2 << endl; // helo, world
    // s1 = s2 + "!!!"; // 拼接
    // cout << "s1: " << s1 << endl; // hello, world!!!
   
    // // string s3; 
    // // s3("hello, world");  // error  不能用于后续赋值
    // s2 = s3; 
    // cout << "s2: " << s2 << endl;
    


    
    // string s1 = "hello, "; 
    // string s2 = "world!";
    // string s3 = s1 + s2; 
    // cout << s3 << endl;   // hello, world!
    
    // string s1 = "hello, world"; 
    // string s2("world"); 
    // string s3 = s1 - s2; // error: 不支持减法操作
    // cout << "s3: " << s3 << endl;
    

    // string s1; 
    // cin >> s1;  // hello world
    // cout << "s1: " << s1 << endl; // s1: hello  不能读取空格后的内容

    // string s1; 
    // getline(cin, s1); // hello world
    // cout << "s1: " << s1 << endl; // s1: hello world

    // string s1; 
    // getline(cin, s1); 
    // cout << "s1: " << s1 << endl; 

    string s1; 
    getline(cin, s1, 'r');  // hello world
    cout << "s1: " << s1 << endl; // s1: hello wo

    return 0; 
}