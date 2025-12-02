#include <iostream> 
#include<string> 
#include<cstring> 
#include<cmath> 
#include<algorithm>  // 标准算法的头文件
using namespace std; 
#include<vector> 

// void myprint(int val) {
//     cout << val << endl; 
// } 

// void test01()  {
// 	// 创建了一个vector容器，数组 
// 	vector<int> v; 
// 	// 向容器中插入数据  尾插
// 	v.push_back(10); 
//     v.push_back(20); 
// 	v.push_back(30); 

//     // 通过迭代器访问容器中的数据
//     vector<int>::iterator itBegin = v.begin(); // 起始迭代器
//     vector<int>::iterator itEnd = v.end();      // 结束迭代器，指向容器中最后一个元素的下一个位置 

//     // // 第一种遍历方式
//     // while (itBegin != itEnd) {
//     //     cout << *itBegin << endl; 
//     //     itBegin++; 
//     // }  

//     // // 第二种遍历方式
//     // for (vector<int>::iterator it = v.begin(); it < v.end(); it++) {
//     //     cout << *it << endl; 
//     // }  

//     // 第三种遍历方式  利用STL提供的遍历算法  （需要包含头文件 <algorithm>-->标准算法的头文件 ）
//     for_each(v.begin(), v.end(), myprint); 

// }


// int main() {
//     test01(); 
//     return 0;
// }



// class Person {
// public :
//     Person(string name, int age) {
//         this->name = name; 
//         this->age = age; 
//     }
//     string name; 
//     int age; 
// };  

// void test01() {
//     vector<Person> v; 
//     Person p1("aaa", 10);  
//     Person p2("bbb", 20);
//     Person p3("ccc", 30);
//     Person p4("ddd", 40); 

//     // 向容器中添加数据
//     v.push_back(p1); 
//     v.push_back(p2);
//     v.push_back(p4);
//     v.push_back(p4);

//     for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
//         cout << (*it).name << endl; 
//     }
// }

// // 通过指针进行操作
// void test02() {
//     vector<Person*> v; 
//     Person p1("aaa", 10);  
//     Person p2("bbb", 20);
//     Person p3("ccc", 30);
//     Person p4("ddd", 40); 

//     // 向容器中添加数据
//     v.push_back(&p1); 
//     v.push_back(&p2);
//     v.push_back(&p4);
//     v.push_back(&p4);
//     // 遍历容器
//     for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++) {
//         cout << (*it)->name << endl; 
//     }
// }

// int main() { 
    
//     test02(); 
//     return 0; 
// }



// // 容器嵌套容器
// void  test01() {
//     vector<vector<int>> v; 
//     // 创建嵌套容器 
//     vector<int> v1; 
//     vector<int> v2;
//     vector<int> v3;
//     vector<int> v4; 

//     // 向小容器中添加数据
//     for (int i = 0; i < 4; i++) {
//         v1.push_back(i + 1); 
//         v2.push_back(i + 2);
//         v3.push_back(i + 3);
//         v4.push_back(i + 4);
//     } 

//     // 将小容器插入到大容器中
//     v.push_back(v1); 
//     v.push_back(v2);
//     v.push_back(v3);
//     v.push_back(v4);

//     for (vector<vector<int>>::iterator it1 = v.begin(); it1 != v.end(); it1++) {
//         for (vector<int>::iterator it2 = (*it1).begin(); it2 != (*it1).end(); it2++) {
//             cout << *it2 << " ";  
//         } 
//         cout << endl;
//     }
// } 

// int main() {
//     test01(); 
//     return 0; 
// }




// int test01() {
// 	string str1("hello"); 
// 	string str2("xello"); 
// 	if (str1.compare(str2) == 0) {
// 		cout << "str1 等于 str2" << endl; 
// 	}  else if (str1.compare(str2) < 0) {
// 		cout << "str1 小于 str2" << endl; 
// 	} else {
// 		cout << "str1 大于 str2" << endl; 
// 	} 
// }
// int main() {
// 	test01();  
// 	// str1 小于 str2
// 	return 0; 
// } 

// 方法一    通过[]的方式获取
void test01() {
    string str("helle"); 
    for (int i = 0; i < str.size(); i++) {
        cout << str[i] << " "; 
    } 
    cout << endl; 
} 

// 方法二   通过at的方式获取
void test02() {
    string str("helle"); 
    for (int i = 0; i < str.size(); i++) {
        cout << str.at(i) << " "; 
    } 
    cout << endl; 
} 
int main() {
    test01(); 
    test02(); 
    return 0; 
}