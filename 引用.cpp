#include <iostream> 
#include<string> 
#include<cstring> 
#include<cmath> 
#include<algorithm>
using namespace std; 



// int main() {
	
// 	int a = 10; 
// 	int &b = a; 
// 	b = 20; 
// 	cout << a << endl; // 20

//     // 引用必须初始化
//     int &b = a; 
//     int c = 20; 
//     b = c;   // 赋值操作，而不是更改引用



// 	return 0; 
// }



// int main() {
//     int a = 10; 
//     int b = 20; 
//     //int &c;     // error 引用必须初始化
//     int &c = a;  // 一旦初始化后，就不可以更改
//     c = b;      // 这是赋值操作，不是更改引用 
//     cout <<"a = " << a << endl;  // 20
//     cout <<"b = " << b << endl;  // 20
//     cout <<"c = " << c << endl;  // 20 
//     return 0; 
// }




// // 交换函数
// // 1 值传递
// void mySwap01(int a, int b) {
// 	int t = a; 
// 	a = b; 
// 	b = t; 
// }

// // 2 地址传递
// void mySwap02(int* a, int* b) {
// 	int t = *a; 
// 	*a = *b; 
// 	*b = t; 
// }

// // 3 引用传递 
//  void mySwap03(int &a, int &b) {
//  	int t = a; 
//  	a= b; 
//  	b = t;
//  }

// int main() {
// 	int a = 10; 
// 	int b = 20; 
// 	cout << "a = " << a << " " << "b = " << b << endl;   
// //	mySwap01(a, b);  
// //	cout << "值传递" << "a = " << a << " " << "b = " << b << endl;   
// //	mySwap02(&a, &b); 
// //	cout << "地址传递" << "a = " << a << " " << "b = " << b << endl; 
// 	mySwap03(a, b); 
// 	cout << "引用传递" << "a = " << a << " " << "b = " << b << endl; 
// 	return 0; 
// } 




////引用做函数的返回值
////
////不要返回局部变量的引用
//int& test01() {
//	int a = 10;   // 局部变量存放在四区的 栈区 
//	return a; 
//} 
//int main() {
//	int &ref = test01(); 
//	cout << ref << endl;  // 第一次正确，是因为编译器做了保留 
//	cout << ref << endl;   // 第二次错误，因为a的内存已近释放 
//	return 0; 
//}




// // 函数的调用而可以作为左值
//  int& test02() {
//  	static int a = 10; // 静态变量，存放在全局区，全局区上的数据在程序结束后系统释放 
//  	return a; 	// 返回的是a的引用 
//  }
// int main() { 
// 	int &ref = test02(); 
// 	cout << ref << endl;     // 10
// 	cout << ref << endl;    // 10
// 	test02() = 1000;  
// 	cout << ref << endl;	// 1000
// 	cout << ref << endl;	// 1000
// 	return 0; 
// }


//void func(int& ref) {
//	ref = 100; // ref是引用，转换为*ref = 100；  
//} 
//
//int main() {
//	int a = 10; 
//	int& ref = a;  // 自动转换为 int* const ref = &a; 指针常量是指针的指向不可以改变，也说明为什么引用不可以更改 
//	ref = 20; 	// 内部发现ref是引用，自动帮我们转换为*ref = 20；  
//} 

int main() {
	
//	int a = 0; 
//	int &ref = 10; //error	    引用必须引一块合法的空间  
  

	int a = 10; 
	const int& ref = 10;   // right
	//  加上const 之后，编译器将代码修改 ，int temp = 10; const int& ref = temp; 
	//ref = 20;  // error			加入const之后，变为只读不可以修改 

	return 0; 
}


void showvalue01(int& value) { 
	value = 1000; 
	cout << "value = " << value << endl; 
} 

void showvalue02(const int& value) {
	//value = 1000; 		// 加上const修改之后，就不可以再修改数据了 
	cout << "value = " << value << endl;  
}

int main() {
	int a = 100; 
	int& ref = a; 
	showvalue01(ref);   // 100  
	// 用引用的形式传递参数 ，在函数中以别名的形式操纵形参，会改变实参的值
	cout << "a = " << a << endl;  // 100
	a = 100; 
	return 0; 
}
// 引用的本质是指针常量

// 指针常量
int* const p;  // 指针的指向不可以改变,指针指向的值可以改







































