#include<iostream> 
#include<string> 
using namespace std; 

// class Person {
// public: 
//     string name; 
//     static int age; 
// };  
// int Person::age = 20; 
// void test01() {
//     Person p1; 
//     cout << p1.age << endl;  // 20  

//     Person p2; 
//     p2.age = 30; 
//     cout << p1.age << endl;  // 30
// } 
// void test02() {
//     // 通过对象进行访问
//     Person p; 
//     cout << p.age << endl ;  // 20 
//     // 通过类名进行访问
//     cout << Person::age << endl;  // 20
// }
// int main() {
//     test02(); 
//     return 0; 
// }



// class Person {
// public: 
//     string name; 
//     static int age;  
// private: 
//     static int m_B; 
// };  
// int Person::age = 20;  
// int Person::m_B = 30; 
// void test02() {
//     // 通过类名进行访问
//     cout << Person::age << endl;  // 20 
//     cout << Person::m_B << endl; // error  无访问权限
// }
// int main() {
//     test02(); 
//     return 0; 
// }



// class Person {
// public: 
//     // 静态成员函数
//     static void func() {
//         cout << "静态成员函数调用" << endl; 
//     }
// }; 

// void test01() { 
//     // 通过对象进行访问
//     Person p; 
//     p.func();  
//     // 通过类名进行访问
//     Person::func(); 
// } 
// int main() { 
//     test01(); 
//     return 0; 
// }

class Person {
public: 
    // 静态成员函数
    static void func() { 
        m_A = 40;  
        // m_B = 30; //   无法访问非静态成员变量,无法区分到底是哪个对象的m_B; 
        cout << "静态成员函数调用" << endl; 
    } 
    static int m_A; 
    int m_B; 
}; 
int Person::m_A = 30; 
void test01() { 
    // 通过对象进行访问
    Person p; 
    p.func();  
    // 通过类名进行访问
    Person::func(); 
} 
int main() { 
    test01(); 
    return 0; 
}