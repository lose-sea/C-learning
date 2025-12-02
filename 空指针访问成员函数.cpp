#include<iostream> 
using namespace std; 

// class Person {
// public: 
//     void func() {
//         cout << "this person class" << endl; 
//     } 
//     void showAge() {
//         cout << "age = " << age << endl; 
//     } 
//     int age = 31; 
// }; 
// void test01() {
//     Person* p = NULL; 
//     // p->func(); // 正常输出
//     p->showAge(); //  
// }




class Person {
public: 
    void func() {
        cout << "this person class" << endl; 
    } 
    void showAge() { 
        // if (this == NULL) {
        //     return; 
        // }
        cout << "age = " << age << endl; 
    } 
    int age = 31; 
}; 
void test01() {
    Person* p = NULL; 
    // p->func(); // 正常输出
    p->showAge(); //  
}




int main() {
    test01(); 
    return 0; 
}