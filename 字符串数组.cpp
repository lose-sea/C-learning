#include<iostream>  
#include<vector> 
#include<string>
#include<cstring>
using namespace std; 
int main() {
    // 字符串初始化
    string str1 = "Hello, World!";
    cout << "字符串 str1: " << str1 << endl;

    // 字符串数组初始化
    vector<string> str2 = {"Apple", "Banana", "Cherry"};
    cout << "字符串数组 str2: ";
    for (const auto& s : str2) {
        cout << s << " ";
    }   
    // 字符数组
    char str3[] = "hello world";
    cout << "\n字符数组 str: " << str3 << endl;         // 末尾自动添加'\0'

    char str4[] = {'H', 'e', 'l', 'l', 'o'};
    cout << "str4:  "  << str4 << endl;              // error,末尾没有'\0' 
                                                    // 可能输出乱码
    char str5[20] = {'H', 'e', 'l', 'l', 'o'};
    cout << "str5: " << str5 << endl;               // 剩余部分自动添加'\0'

    return 0; 
}