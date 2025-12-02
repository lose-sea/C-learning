#include<iostream> 
using namespace std; 

// // 通过成员函数重载+运算符
// class Person { 
// public: 
//     Person operator+(Person p) {
//         Person temp; 
//         temp.A = this->A + p.A; 
//         temp.B = this->B + p.B; 
//         return temp; 
//     }
//     int A; 
//     int B; 
// }; 
// void test() {
//     Person p1; 
//     p1.A = 10;
//     p1.B = 20; 
//     Person p2;  
//     p2.A = 30; 
//     p2.B = 40;  
//     Person p3 = p1 + p2;  
//     cout << p3.A << " " << p3.B << endl;  // 40 60
// } 
// int main() {
//     test(); 
//     return 0; 
// }

// // 通过全局函数重载+运算符
// class Person { 
// public: 
//     int A; 
//     int B; 
// };  


// Person operator+(Person p1, Person p2) {
//     Person temp; 
//     temp.A = p1.A + p2.A; 
//     temp.B = p1.B + p2.B; 
//     return temp; 
// }
// void test() {
//     Person p1; 
//     p1.A = 10;
//     p1.B = 20; 
//     Person p2;  
//     p2.A = 30; 
//     p2.B = 40;  
//     Person p3 = p1 + p2;  
//     cout << p3.A << " " << p3.B << endl;  // 40 60
// } 
// int main() {
//     test(); 
//     return 0; 
// }



// Person p3 = p1.operator+(p2); 

// Person p3 = operator+(p1, p2); 

// Person p3 = p1 + 10; // Person + int


// // 通过全局函数重载+运算符
// class Person { 
// public: 
//     int A; 
//     int B; 
// };  


// Person operator+(Person p1, Person p2) {
//     Person temp; 
//     temp.A = p1.A + p2.A; 
//     temp.B = p1.B + p2.B; 
//     return temp; 
// } 

// // 函数重载的版本
// Person operator+(Person p, int x) {
//     p.A += x; 
//     p.B += x; 
//     return p; 
// }
// void test01() {
//     Person p1; 
//     p1.A = 10;
//     p1.B = 20; 
//     Person p2;  
//     p2.A = 30; 
//     p2.B = 40;  
//     Person p3 = p1 + p2;  
//     cout << p3.A << " " << p3.B << endl;  // 40 60 
//     Person p4 = p1 + 100; 
//     cout << p4.A << " " << p4.B << endl;  // 110 120
// }  
// int main() { 
//     test01(); 
//     return 0; 
// }




// 左移运算符的重载
class Person {
public: 
    int A; 
    int B; 
}; 



void test01() {

    Person p1; 
    p1.A = 10; 
    p1.B = 20; 
    cout << p1.A << " " << p1.B << endl;  
}


int main() {
    test01(); 
    return 0; 
}