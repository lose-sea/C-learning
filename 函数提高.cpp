#include <iostream> 
#include<string> 
#include<cstring> 
#include<cmath> 
#include<algorithm>
using namespace std; 

// 函数的默认参数
// int func(int a , int b = 20, int c = 30) {   //如果我们自己传入参数，就用自己的值,如果没有,那就用默认值
//     return a + b + c; 
// }
// int main() {
//     cout << func(10) << endl;   // 只传一个参数，其余两个参数为默认值
//     return 0; 
// }


// // 函数的声明
// int func01(int a = 10, int b = 20); 
// // 函数的实现
// int func01(int a = 10, int b = 20) {
//     return a + b; 
// }           // error

// // 函数的声明
// int func01(int a = 10, int b = 20); 
// // 函数的实现
// int func01(int a, int b) {
//     return a + b; 
// } 


// // 函数的占位参数,占位参数也可以有默认参数
// void func(int a, int) {
//     cout << "this is func" << endl; 
// }

// int main() {
//     //func(10);  // error   占位参数必须填补
//     return 0; 
// }



// // 函数重载 
// void func() {
//     cout << "func 调用" << endl; 
// } 

// void func(int a, double b) {
//     cout << "func 02调用" << endl; 
// }
// int main() { 
//     func();  // func 调用
//     func(2.3, 5);  // func 02调用
//     return 0; 
// }  


// void func(int& a) {  // int& a = 10; 不合法的
//     cout << "func(int& a) 调用" << endl; 
// } 
// void func(const int& a) {     // const itn& a = 10;  合法
//     cout << "func(const int& a) 调用" << endl; 
// } 
// int main() { 
//     int a = 10; 
//     func(a);    // func(int& a) 调用   
//     func(10);  // func(const int& a) 调用
//     return 0; 
// }


void func(int a) {  
    cout << "func(int a) 调用" << endl; 
} 
void func(int a, int b = 10) {     
    cout << "func(int a, int b = 10) 调用" << endl; 
}  

int main() {
    
    //func(10);   // error  
    func(10, 20);  // func(int a, int b = 10) 调用
    return 0; 
} 




















