#include<iostream> 
using namespace std; 
// class Person {
// public : 
// // 无参构造
//     Person() {
//         cout << "无参构造函数调用" << endl; 
//     } 
// // 有参构造 
//     Person(int n) { 
//         age = n; 
//         cout << "有参构造函数调用" << endl;  
//     } 
// // 拷贝构造函数
//     Person (const Person& p) { 
//         cout << "拷贝构造函数调用" << endl; 
//         age = p.age; 
//     }
//     int age = 0; 
// // 析构函数
//     ~Person() {
//         cout << "析构函数调用" << endl;  
//     }
// }; 

// int main() {
//     // 调用
//     // 括号法 
//     // Person p1;  // 默认构造函数的调用 
//     // Person p2(10);  // 有参构造函数调用 
//     // Person p3(p2);  // 拷贝构造函数调用 
//     // cout << p3.age << endl;  // 10
//     // 显示法
//     // Person p1 = Person(10); // 有参构造函数调用  
//     // Person p2 = Person(p1); // 拷贝构造函数调用  
//     // Person(10);   // 匿名对象
//     // 隐式转换法 
//     Person p = 10;  // 相当于写了 Person p = Person(10); 
//     return 0; 
// }


// class Person {
// public: 
//     Person() {
//         cout << "默认构造函数调用" << endl; 
//     }  
//     Person(int n) { 
//         age = n; 
//         cout << "有参构造函数调用" << endl; 
//     }  
//     int age;
//     ~Person() {
//         cout << "析构函数调用" << endl; 
//     } 
// }; 
// int main() {
//     Person p1(18);  
//     cout << p1.age << endl; 
//     Person p2(p1); 
//     cout << p2.age << endl; // 编译器提供默认拷贝构造函数
//     return 0; 
// }





// class Person {
// public: 
//     Person() {
//         cout << "默认构造函数调用" << endl; 
//     }  
//     Person(int n, int h) { 
//         age = n; 
//         height = new int(h); 
//         cout << "有参构造函数调用" << endl; 
//     }  
//     int age;
//     int* height; 
//     ~Person() { // 析构代码,将堆区开辟的数据释放 
//         if (height != NULL) {
//             delete height; 
//             height = NULL; 
//         }
//         cout << "析构函数调用" << endl; 
//     } 
// }; 
// int main() {
//     Person p1(18, 160);  
//     cout << p1.age << " " << *p1.height << endl;  
//     Person p2(p1); 
//     cout << p2.age << " " << *p2.height << endl; 
//     return 0; 
// }




class Person {
public: 
    Person() {
        cout << "默认构造函数调用" << endl; 
    }  
    Person(int n, int h) { 
        age = n; 
        height = new int(h); 
        cout << "有参构造函数调用" << endl; 
    }   

    //自己实现拷贝构造函数,解决浅拷贝带来的问题
    Person (const Person& p) {
        cout << "有参构造函数调用" << endl; 
        age = p.age; 
        height = p.height;   // 编译器默认实现的就是这行代码
        // 深拷贝操作
        height = new int(*p.height); 
    } 
    int age;
    int* height; 
    ~Person() { // 析构代码,将堆区开辟的数据释放 
        if (height != NULL) {
            delete height; 
            height = NULL; 
        }
        cout << "析构函数调用" << endl; 
    }  
};  
int main() {
    Person p1(18, 160);  
    cout << p1.age << " " << *p1.height << endl;  
    Person p2(p1); 
    cout << p2.age << " " << *p2.height << endl; 
    return 0; 
}

