#include<iostream>  
#include<vector> 
#include<string> 
#include<cstdio>
#include<cstring>
using namespace std; 


int main() {

    // string str = "11x123";   
    // size_t idx = 0; 
    // int n = stoi(str, &idx); // 第三个参数不写则默认按十进制转换 
    // cout << "n = " << n << endl;  // n = 11
    // cout << "idx = " << idx << endl;  // idx = 2 第一个非数字字符的位置 

    // n = stoi(str, &idx, 16); // 按十六进制转换
    // cout << "n = " << n << endl;  // n = 17

    // n = stoi(str, &idx, 6); // 按六进制转换
    // cout << "n = " << n << endl;  // n = 7 

    // string str = "3.14159abc";
    // int n = stoi(str, NULL); 
    // cout << "n = " << n << endl;  // n = 3


    // string str = "3.14acb145";  
    // size_t idx = 0;  
    // double m = stod(str, &idx); 
    // cout << "m = " << m << endl;  // m = 3. 14
    // cout << "idx = " << idx << endl;  // idx = 4
    // double n = stod(str, NULL); 
    // cout << "n = " << n << endl;  // n = 3.14 


    int n = 155; 
    string str = to_string(n); 
    cout << "str = " << str << endl;  // str = 155

    double m = 3.14; 
    string str2 = to_string(m); 
    cout << "str2 = " << str2 << endl;  // str2 = 3.140000


    return 0;
}