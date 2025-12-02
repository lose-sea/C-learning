#include<iostream>  
#include<vector> 
#include<string> 
#include<cstdio>
#include<cstring>
using namespace std; 
int main() {
 
    string s1 = "Hello ";
    string s2 = "World";
    // s1 += s2; // 使用 += 运算符连接字符串
    // cout << "使用 += 运算符连接字符串: " << s1 << endl;

    cout << s1 + "world" << endl; // 使用 + 运算符连接字符串
    string  s3 = s1 + s2;
    cout << s3 << endl;         // 使用 + 运算符连接两个字符串对象

    
    return 0; 
}