#include<iostream> 
using namespace std;  

// class Person {

// }; 
// void test01() {
//     Person p; 
//     cout << sizeof(p) << endl;  // 1
// }
// int main() {
//     test01(); 
//     return 0; 
// }


// class Person {
//     int m_a;  // 非静态的成员变量
// }; 
// void test01() {
//     Person p; 
//     cout << sizeof(p) << endl;  // 4
// }
// int main() {
//     test01(); 
//     return 0; 
// }


// class Person {
//     int m_a;  // 非静态的成员变量 
//     static int m_b; 
// }; 
// void test01() {
//     Person p; 
//     cout << sizeof(p) << endl;   // 4
// }
// int main() {
//     test01(); 
//     return 0; 
// } 

// class Person {
//     int m_a;  // 非静态的成员变量 
//     static int m_b;  // 静态的成员变量 
//     void func(); // 非静态成员函数,不属于类的对象上
// }; 
// void test01() {
//     Person p; 
//     cout << sizeof(p) << endl;   // 4
// }
// int main() {
//     test01(); 
//     return 0; 
// } 


// class Person {
//     int m_a;  // 非静态的成员变量 
//     static int m_b;  // 静态的成员变量 
//     void func(); // 非静态成员函数,不属于类的对象上 
//     static void fund(); // 静态成员函数,不属于类的对象上 
// }; 
// void test01() {
//     Person p; 
//     cout << sizeof(p) << endl;   // 4
// }
// int main() {
//     test01(); 
//     return 0; 
// } 


// class Person {
// public : 
//     Person(int age) {
//         age = age; 
//     } 
//     int age; 
// }; 
// void test01() {
//     Person p(18); 
//     cout << p.age << endl;  // 0
// } 



// class Person {
// public : 
//     Person(int age) {
//         this->age = age; 
//     } 
//     int age; 
// }; 
// void test01() {
//     Person p(18); 
//     cout << p.age << endl;  // 18
// } 





// class Person { 
// public :  
//     Person(int age) { 
//         this->age = age; 
//     } 
//     void PersonAddAge(Person& p) {
//         this->age += p.age; 
//     }
//     int age; 
// }; 
// void test02() {
//     Person p1(10); 
//     Person p2(20); 
//     p2.PersonAddAge(p1); 
//     cout << "p2的年龄为" << p2.age << endl;  // 30
// }



class Person { 
public :  
    Person(int age) { 
        this->age = age; 
    } 
    Person& PersonAddAge(Person& p) {
        this->age += p.age; 
        return *this; 
    } 
    int age; 
}; 
void test02() {
    Person p1(10); 
    Person p2(20); 
    p2.PersonAddAge(p1).PersonAddAge(p1);  
    cout << "p2的年龄为" << p2.age << endl;  // 40 
} 

int main() {
    test02(); 
    return 0; 
}