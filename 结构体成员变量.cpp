#include <iostream> 
#include<string> 
#include<cstring> 
#include<cmath> 
#include<algorithm>
using namespace std; 


	// 结构体成员函数 
// struct Stu {
// 	int chinese; 
// 	int math; 
// 	int total; 
// 	// 成员函数
// 	// 初始化结构体的成员变量 
// 	void init_Stu() {
// 		chinese = 100; 
// 		math = 90; 
// 		total = chinese + math; 
// 	} 
// }; 

// int main() {
// 	struct Stu s1; 
// 	s1.init_Stu(); 
// 	cout << s1.chinese << endl;   // 100
// 	cout << s1.math << endl; 	// 90
// 	cout << s1.total << endl; 	// 190
// 	return 0; 
// } 


// struct Stu {
// 	string name; 
// 	int age; 
// 	int score; 
// 	// 构造函数
// 	Stu() {
// 		cout << "构造函数被调用了！" << endl;
// 		name = "张三"; 
// 		age = 18; 
// 		score = 100; 
// 	}
// }; 

// int main() {
// 	struct Stu s1; 
// 	cout << s1.name << endl;   // 张三
// 	cout << s1.age << endl; 	// 18
// 	cout << s1.score << endl; 	// 100 
// 	// 无需调用构造函数，结构体成员变量自动初始化
// 	return 0; 
// }	



// struct Stu {
// 	string name; 
// 	int age; 
// 	int score; 
// 	// 构造函数
// 	Stu() {
// 		cout << "构造函数被调用了！" << endl;
// 		name = "张三"; 
// 		age = 18; 
// 		score = 100; 
// 	}
// 	~Stu() {
// 		cout << "析构函数被调用了！" << endl;
// 	}
// 	void print() {
// 		cout << name << " " << age << " " << score << endl;
// 	}
// }; 
// int main() {
// 	struct Stu s1; 
// 	cout << s1.name << endl;   // 张三
// 	cout << s1.age << endl; 	// 18
// 	cout << s1.score << endl; 	// 100
// 	s1.print();
// 	// 自动调用析构函数
// 	return 0; 
// }	





// struct Stu {
// 	string name; 
// 	int age; 
// 	int score; 
// }; 
// int main() {

// 	Stu s1;
// 	s1.name = "张三";
// 	s1.age = 18;
// 	s1.score = 100;
// 	cout << s1 << endl; // 错误，无法直接输出结构体变量
// 	return 0; 
// }


// struct Stu {
// 	string name; 
// 	int age; 
// 	int score; 
// }; 
// // 运算符重载
// // 重载的是<<(输出运算符),让<<支持Stu类型数据的打印
// ostream& operator<<(ostream& os, const struct Stu& s) {
// 	os << "姓名: " << s.name << endl; 
// 	os << "年龄: " << s.age << endl; 
// 	os << "分数: " << s.score << endl;
// 	return os; 
// }
// int main() {

// 	Stu s1;
// 	s1.name = "张三";
// 	s1.age = 18;
// 	s1.score = 100;
// 	cout << s1 << endl; // 正确，输出结构体变量
// 	return 0; 
// }




// // 排序
// //sort
// int main() {
// 	int arr[] = {4, 5, 6, 9, 7, 1, 8, 5, 4, 2};  
// 	int sz = sizeof(arr) / sizeof(arr[0]); 
// 	// arr + sz, 跳过sz个元素，到达数组末尾
// 	sort(arr, arr + sz); // 升序
// 	for (int i = 0; i < sz; i++) {
// 		cout << arr[i] << " "; 
// 	}	// 1 2 4 4 5 5 6 7 8 9
// 	cout << endl;
// 	return 0; 
// }




// // 对字符进行排序
// int main() {
// 	string str = "defxxxabccba"; 
// 	sort(str.begin(), str.end()); // 升序
// 	cout << str << endl; // aabcccdeffxx
// 	return 0; 
// }



//// qsort 函数 
//int cmp(const void* e1, const void* e2) {
//	return *(int*)e1 - *(int*)e2; 
//}
//
//int main() {
//	int arr[10] = {0}; 
//	int n = 0; 
//	cin >> n; 
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i]; 
//	} 
//	qsort(arr, n, sizeof(int), cmp);  
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << endl; 
//	}
//	return 0; 
//}


// bool cmp (int x, int y) {
// 	return x > y; 
// }

// int main() {
// 	int arr[] = {4, 5, 6, 9, 7, 1, 8, 5, 4, 2};  
// 	int sz = sizeof(arr) / sizeof(arr[0]); 
// 	// arr + sz, 跳过sz个元素，到达数组末尾
// 	sort(arr, arr + sz, cmp);   // 降序
// 	for (int i = 0; i < sz; i++) {
// 		cout << arr[i] << " "; 
// 	}	// 9 8 7 6 5 5 4 4 2 1
// 	cout << endl;
// 	return 0; 
// }




// 仿函数
// struct Cmp {
// 	bool operator()(int x, int y) {
// 		return x > y; 
// 	} // 降序 
// }cmp;
// int main() {
// 	int arr[] = {4, 5, 6, 9, 7, 1, 8, 5, 4, 2};  
// 	int sz = sizeof(arr) / sizeof(arr[0]); 
// 	// arr + sz, 跳过sz个元素，到达数组末尾
// 	sort(arr, arr + sz, cmp);   // 降序
// 	for (int i = 0; i < sz; i++) {
// 		cout << arr[i] << " "; 
// 	}	// 9 8 7 6 5 5 4 4 2 1
// 	cout << endl;
// 	return 0; 
// } 






//// sort函数 
//int main() {
//	int arr[100] = {0}; 
//	int n = 0; 
//	cin >> n; 
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i]; 
//	}	 
//	sort(arr, arr + n); 
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << endl; 
//	}
//	return 0; 
//}



// // sort函数 
// // 自定义函数（降序） 
// bool cmp(int x, int y) {
// 	return x > y; 
// } 
// int main() {
// 	int arr[100] = {0}; 
// 	int n = 0; 
// 	cin >> n; 
// 	for (int i = 0; i < n; i++) {
// 		cin >> arr[i]; 
// 	}	 
// 	sort(arr, arr + n, cmp); 
// 	for (int i = 0; i < n; i++) {
// 		cout << arr[i] << endl; 
// 	}
// 	return 0; 
// }


// // 对结构体进行排序 
// struct S {
// 	string name; 
// 	int age; 
// }; 
// // 按照名字进行排序
//  bool cmp_s_by_name(struct S s1, struct S s2) {
//  	return s1.name > s2.name; 
//  }  // 升序
// int main() {
// 	struct S arr[20] = {{"zhangsan", 20}, {"lisi", 25}, {"wangwu", 18}}; 
// 	int sz = sizeof(arr) / sizeof(arr[0]); 
// 	sort(arr, arr + sz, cmp_s_by_name); 
// 	for (int i = 0; i < sz; i++) {
// 		cout << arr[i].name << endl;  // zhangsan wangwu lisi
// 	}
// 	return 0; 
// }


// 仿函数的形式
// 对结构体进行排序 
struct S {
	string name; 
	int age; 
}; 
// 按照年龄进行排序
bool cmp_s_by_age(struct S s1, struct S s2) {
	return s1.age < s2.age; 
} 
int main() {
	struct S arr[20] = {{"zhangsan", 20}, {"lisi", 25}, {"wangwu", 18}}; 
	int sz = sizeof(arr) / sizeof(arr[0]); 
	sort(arr, arr + sz, cmp_s_by_age); 
	for (int i = 0; i < sz; i++) {
		cout << arr[i].name << endl;  
	}
	return 0; 
}