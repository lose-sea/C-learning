#include<iostream> 
#include<set> 
using namespace std;  


void printSet(set<int>& st) {
    for (set<int>::iterator it = st.begin(); it != st.end(); it++) {
        cout << *it << " "; 
    } 
    cout << endl; 
}
// int main() {
//     set<int> st; 
//     st.insert(10); 
//     st.insert(40); 
//     st.insert(30); 
//     st.insert(80); 
//     st.insert(20); 
//     printSet(st);   // 

//     return 0; 
// }


// int main() {
//     set<int> st; 
//     for (int i = 0; i < 10; i++) {
//         st.insert(i); 
//     } 
//     cout << st.size() << endl; 
//     return 0; 
// }

// int main() {
//     // insert(elem);   
//     // clear(); 
//     // erase(pos); 删除pos迭代器所指的元素,返回下一个元素的迭代器 
//     // erase(beg, end);   删除区间[beg, end)的所有元素,返回下一个元素的迭代器 
//     // erase(elem);   // 删除容器中指为elem的元素  


//     set<int> s; 
//     s.insert(1); 
//     s.insert(5); 
//     s.insert(4); 
//     s.insert(87); 
//     s.insert(45); 
//     s.erase(2); 
//     printSet(s);  
//     return 0; 
// }




// int main() {

//     // find(key);   查找key是否存在,返回指向该元素的迭代器,若不存在,返回set.end(); 
//     // count(key);   统计key的元素的个数
//     set<int> s; 
//     for (int i = 0; i < 10; i++) { 
//         s.insert(i); 
//     }  
//     if (s.find(55) == s.end()) {
//         cout << "不存在" << endl; 
//     } else {
//         cout << "存在" << endl; 
//     }    // 不存在
//     return 0; 
// } 


// 对组 
// pair<type, type> p (value1, value2);  
// pair<type, type> p = make_pair(value1, value2); 
// int main() {
//     // 第一种方式
//     pair<string, int>p1("Tom", 20); 
//     cout << "姓名: " << p1.first << " 年龄 " << p1.second << endl; // 姓名: Tom 年龄 20 
//     // 第二种方式

//     pair<string, int> p2 = make_pair("John", 45); 
//     cout << "姓名: " << p2.first << " 年龄 " << p2.second << endl;
//     return 0; 
// }

// int main() {
//     set<int> s; 
//     s.insert(10); 
//     s.insert(30); 
//     s.insert(40); 
//     s.insert(20); 
//     s.insert(50); 
//     cout << "升序" << endl;  
//     printSet(s);  
//     return 0; 
// }


// class MyComper { 
// public:
//     bool operator()(int v1, int v2) {
//         return v1 > v2; 
//     }
// }; 
// int main() {
//     set<int, MyComper> s1; 
//     s1.insert(10); 
//     s1.insert(30); 
//     s1.insert(40); 
//     s1.insert(20); 
//     s1.insert(50); 
//     cout << "降序" << endl;  
//     for (auto it = s1.begin(); it != s1.end(); it++) {
//         cout << *it << " "; 
//     }  // 50 40 30 20 10
//     return 0; 
// } 
 
