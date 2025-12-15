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




// // 左移运算符的重载
// class Person {
// public: 
//     int A; 
//     int B; 
// }; 

// void test01() {

//     Person p1; 
//     p1.A = 10; 
//     p1.B = 20; 
//     cout << p1.A << " " << p1.B << endl;  
// }

// int main() {
//     test01(); 
//     return 0; 
// }

// // 递增运算符重载
// class MyInterger { 
//     friend ostream& operator<<(ostream& cout, MyInterger m); 
// public: 
//     MyInterger() {
//         num = 0; 
//     }
// private: 
//     int num; 
// }; 

// // 重载左移运算符,输出对象 
// ostream& operator<<(ostream& cout, MyInterger m) {
//     cout << m.num; 
//     return cout; 
// }

// void test01() {
//     MyInterger m; 
//     cout << m << endl; 
// }  
// int main() {
//     test01(); 
//     return 0; 
// }




// // 递增运算符重载
// class MyInterger { 
//     friend ostream& operator<<(ostream& cout, MyInterger m); 
// public: 
//     MyInterger() {
//         num = 0; 
//     }
// private: 
//     int num; 
// }; 

// // 重载左移运算符,输出对象 
// ostream& operator<<(ostream& cout, MyInterger m) {
//     cout << m.num; 
//     return cout; 
// }

// void test01() {
//     MyInterger m; 
//     cout << ++m << endl;  // error
// }  
// int main() {
//     test01(); 
//     return 0; 
// }


// // 重置前置 ++ 
// // 递增运算符重载
// class MyInterger { 
//     friend ostream& operator<<(ostream& cout, MyInterger m); 
// public: 
//     MyInterger() {
//         num = 0; 
//     }  
//     MyInterger& operator++() {
//         num++; 
//         return *this; 
//     }
// private: 
//     int num; 
// }; 

// // 重载左移运算符,输出对象 
// ostream& operator<<(ostream& cout, MyInterger m) {
//     cout << m.num << endl;  
//     return cout; 
// }

// void test01() {
//     MyInterger m; 
//     cout << ++m << endl;  
// }  
// int main() {
//     test01(); 
//     return 0; 
// }


// 重置前置 ++ 
// // 递增运算符重载
// class MyInterger { 
//     friend ostream& operator<<(ostream& cout, MyInterger m); 
// public: 
//     MyInterger() {
//         num = 0; 
//     }  
//     MyInterger operator++() {
//         num++; 
//         return *this; 
//     }
// private: 
//     int num; 
// }; 
// // 重载左移运算符,输出对象 
// ostream& operator<<(ostream& cout, MyInterger m) {
//     cout << m.num << endl;  
//     return cout; 
// }
// void test01() {
//     MyInterger m; 
//     cout <<++ (++m) << endl;   // 2 
//     cout << m << endl;  // 1
// }  
// int main() {
//     test01(); 
//     return 0; 
// } 




// // 递增运算符重载
// // 重载后置 ++
// class MyInterger { 
//     friend ostream& operator<<(ostream& cout, MyInterger m); 
// public: 
//     MyInterger() {
//         num = 0; 
//     }  
//     // 重载后置 ++ ,void operator++(int)  int代表占位参数,可以用于区分前置和后置递增
//     void operator++(int) {
//         num++; 
//     }
// private: 
//     int num; 
// }; 
// // 重载左移运算符,输出对象 
// ostream& operator<<(ostream& cout, MyInterger m) {
//     cout << m.num << endl;  
//     return cout; 
// }
// void test01() {
//     MyInterger m; 
//     cout << ++(++m) << endl;    
//     cout << m << endl; 
// }  
// int main() {
//     test01(); 
//     return 0; 
// } 



// // 递增运算符重载
// // 重载后置 ++
// class MyInterger { 
//     friend ostream& operator<<(ostream& cout, MyInterger m); 
// public: 
//     MyInterger() {
//         num = 0; 
//     }  
//     // 重载后置 ++ ,void operator++(int)  int代表占位参数,可以用于区分前置和后置递增
//     MyInterger operator++(int) { 
//         MyInterger temp = *this; 
//         num++; 
//         return temp; 
//     }
// private: 
//     int num; 
// }; 
// // 重载左移运算符,输出对象 
// ostream& operator<<(ostream& cout, MyInterger m) {
//     cout << m.num << endl;  
//     return cout; 
// }
// void test01() {
//     MyInterger m; 
//     cout << m++ << endl;    // 0
//     cout << m << endl;  // 1
// }  
// int main() {
//     test01(); 
//     return 0; 
// }  




// 递增运算符的重载
class MyInteger {
public: 
    MyInteger() {
        m_num = 0; 
    } 

    // 重载++运算符 
    // 前置++ 
    // 返回引用是为了对一个对象进行操作
    MyInteger& operator++() {
        m_num++; 
        return *this; 
    }

    // 重载后置++
    MyInteger operator++(int) {
        MyInteger temp = *this; 
        m_num++;  
        return temp; 
    }


    int m_num;  

    MyInteger(int x = 0) : m_num(x) {} 
}; 


// 重载左移运算符
ostream& operator<<(ostream& cout, MyInteger s) {
    cout << s.m_num << endl; 
    return cout; 
} 

int main() {

    MyInteger s(46); 
    cout << ++s << endl; 
    return 0; 
}


