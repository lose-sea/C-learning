#include<iostream>  
#include<vector> 
#include<string> 
#include<cstdio>
#include<cstring>
using namespace std;  
int main() {
    // char str1[200] = "Hello, world!"; 
    // char srr2[100] = {0}; 
    // strcpy(srr2, str1);
    // cout << "str1: " << str1 << endl;
    // cout << "srr2: " << srr2 << endl;  
    // 将 str1 复制到 srr2 中



    char str1[100] = "hello, "; 
    char str2[] = "world!";
    strcat(str1, str2);  // 将 str2 连接到 str1 的末尾
    cout << "str1 after strcat: " << str1 << endl; // hello, world!


    return 0; 
}