#include <iostream> 
#include<string> 
#include<cstring> 
#include<cmath> 
#include<algorithm>
using namespace std; 


// // 圆周率 
// const double PI = 3.14;  
// // 设计一个园类， 求园的周长 
// // 园求周长的公式： 2 * PI * 半径  

// // class 代表设计一个类，类后面紧跟着的就是类名称 
// class Circle {
//     // 访问权限 
// public :  // （公共权限） 
// 	// 属性 （半径）  
// 	int m_r;   
// 	// 行为 
// 	// 获取圆的周长 
// 	double calculateC() {
// 		return 2 * PI * m_r; 
// 	}  
// }; 
// int main() {
// 	// 通过园类创建具体的园（对象） 
// 	Circle c1; 
// 	// 给圆对象的属性进行赋值 
// 	c1.m_r = 10; 
// 	cout << " the circumference of a circle is: " << c1.calculateC() << endl;  //  the circumference of a circle is: 62.8
// 	return 0; 
// } 


// // public		公共权限    类内可以访问,类外可以访问	
// // protected    保护权限    类内可以访问 类外不可以访问
// // private      私有权限    类内可以访问 类外不可以访问 


// class Person {
// public :  // 公共权限
//     string name;  
// protected : // 保护权限
//     string car; 
// private :   //私有权限
//     int password;  

// public: 
//     void  func01() {
//         name = "zhangsan"; 
//         car = "aodi"; 
//         password = 123123; 
//     }
// protected :
//     void func02() {
//         name = "wangwu"; 
//     }
// };  
// int main() {
//     Person p1; 
//     p1.name = "lisi";    // 公共权限内容,在类外可以访问
//     //p1.car  = "benchi";   erroe 保护权限内容，在类外访问不到 
//     //p1.password = 123456;  erroe  私有权限内容，在类外访问不到 
//     p1.func01(); 
//     //p1.func02();       保护权限内容，在类外访问不到 
//     return 0; 
// }

// class C1 {
//     int m;   //  默认权限  是私有
// };  

// struct C2 {
//     int m;   // 默认权限   是公共
// }; 
// int main () {
//     C1 c1; 
//     //c1.m = 10;   //error 
//     C2 c2; 
//     c2.m = 10;  // right; 
//     return 0 ;
// } 


// 要修改私有权限的内容
class Person { 
public :
    // 获取姓名
    string getName() {
        return name; 
    }
private :
    string name = "zhangsan";  
}; 
int main() {
    Person p; 
    cout << p.getName();   // zhangsan
    return 0; 
}




























