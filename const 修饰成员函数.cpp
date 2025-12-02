#include<iostream> 
using namespace std; 



// class Person { 
// public: 
//     void showPerson() const {
//         // m_A = 100;  // erroe 
//     }
//     int m_A; 
// }; 





// class Person { 
// public: 
//     void showPerson() const {
//         // m_A = 100;  // erroe 
//         this->m_B = 12; // 可以修改
//     }
//     int m_A = 0; 
//     mutable int m_B = 0; // 特殊变量,及时在常函数中,也可以修改 
// }; 

// void test02() {
//     const Person p;   // 常对象
//     // p.m_A = 100;  // 不能修改
//     p.m_B = 100;  // m_B是一个特殊值,即使在常对象下也可以修改 
//     cout << p.m_A << endl; 
// }




class Person { 
public: 
    void showPerson() const {
        // m_A = 100;  // erroe 
        this->m_B = 12; // 可以修改
    } 
    void func() {}
    int m_A = 0; 
    mutable int m_B = 0; // 特殊变量,及时在常函数中,也可以修改 
}; 
void test03() {
    const Person p; 
    // p.func(); // 报错,常对象只能调用常函数
    p.showPerson(); 
}





int main() {
    test03(); 
    return 0; 
}