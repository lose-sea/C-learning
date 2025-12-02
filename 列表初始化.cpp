#include<iostream> 
using namespace std; 

// class Person {
// public : 
//     int m_a; 
//     int m_b; 
//     int m_c; 
//     Person(int a, int b, int c) {
//         m_a = a; 
//         m_b = b; 
//         m_c = c; 
//     } 
// };  
// void test() {
//     Person p(10, 20, 30); 
//     cout << p.m_a << " " << p.m_b << " " << p.m_c << endl;  
// }
// int main() {
//     test(); 
//     return 0; 
// }





// class Person {
// public : 
//     int m_a; 
//     int m_b; 
//     int m_c; 
//     Person() : m_a(10), m_b(20), m_c(30) {

//     }
// };  
// void test() {
//     Person p; 
//     cout << p.m_a << " " << p.m_b << " " << p.m_c << endl;  
// }
// int main() {
//     test(); 
//     return 0; 
// }

class Person {
public : 
    int m_a; 
    int m_b; 
    int m_c; 
    Person(int a, int b, int c) : m_a(a), m_b(b), m_c(c) {

    }
};  
void test() {
    Person p(30, 20, 10); 
    cout << p.m_a << " " << p.m_b << " " << p.m_c << endl;  
}
int main() {
    test(); 
    return 0; 
}