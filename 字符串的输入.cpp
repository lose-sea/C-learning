#include<iostream>  
#include<vector> 
#include<string> 
#include<cstdio>
#include<cstring>
using namespace std; 

int main() {
    char str[20]; 

    // scanf("%s", str);  // helloworld
    // cout << "输入的字符串是: " << str << endl;  // helloworld  超过数组长度，可能导致缓冲区溢出 

    // scanf("%4s", str);  // helloworld
    // cout << "输入的字符串是: " << str << endl;  // hell  




    // gets(str);  // helloworld
    // cout << "输入的字符串是: " << str << endl;  // hell  超过数组长度，可能导致缓冲区溢出
    
    // fgets(str, sizeof(str), stdin);  // helloworld
    // cout << "输入的字符串是: " << str << endl;  // hell
    // fgets(str, 100, stdin);  // stdiin-- 标准输入流，从键盘获取数据
    // cout << "输入的字符串是: " << str << endl; 


    // fgets (str, 80, stdin); // 指定大小超出了数组范围，会造成缓冲区溢出
    // cout << "输入的字符串是: " << str << endl;  // 即使正常打印，也会造成潜在风险
    




    // scanf("%[^\n]s", str);  // 输入带空格的字符串 hello world
    // cout << "输入的字符串是: " << str << endl; // hello world

    // scanf("%[^r]s", str); // 输入带r的字符串 hello world
    // cout << "输入的字符串是: " << str << endl; // hello wo



    int i = 0; 
    int ch = 0; 
    while ((ch = getchar()) != '\n') {
        str[i] = ch; 
        i++; 
    } 
    cout << "输入的字符串是: " << str << endl;  // hello world 
    str[i] = '\0';  // 添加字符串结束标志


    return 0; 
}   