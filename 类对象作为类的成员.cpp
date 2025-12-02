#include<iostream> 
using namespace std;  

// class A {}; 
// class B {
//     A a; 
// }; 


class Phone {
public :  
    Phone(string name) {
        m_name = name; 
    }
    string m_name;  // 手机品牌名称
}; 

class Person {
public :     
    // Phone m_phone = pName  // 隐式转换法
    Person(string s, string p) : m_name(s), m_phone(p) {  

    }
    string m_name; 
    Phone m_phone; 
}; 
void test() {
    Person p("zhangsan", "apple");  
    cout << p.m_name << " "<< p.m_phone.m_name << endl;
}
int main() {
    test(); 
    return 0; 
} 