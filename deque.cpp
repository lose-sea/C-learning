#include<iostream> 
#include<deque>  
#include<algorithm>
#include<vector>
using namespace std; 

void printDeque(const deque<int>& d) {  // 加上const为只读状态,避免修改
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) { 
        cout << *it << " "; 
    } 
    cout << endl; 
}

// int main() {
//     // deque<T> deq   //默认构造形式 
//     deque<int> d1; 
//     for (int i = 0; i < 10; i++) {
//         d1.push_back(i); 
//     }  
//     printDeque(d1);  
//     // deque(beg, end);  // 构造函数将[beg, end)区间的元素拷贝给本身 
//     deque<int> d2(d1.begin(), d1.end());  
//     printDeque(d2); 
//     // deque(n, elem);   // 构造函数将n个elem拷贝给本身 
//     deque<int> d3(10, 100);  
//     printDeque(d3); 
//     // deque(const deque &deq);   // 拷贝构造函数 
//     deque<int> d4(d3); 
//     printDeque(d4); 
//     return 0; 
// } 


// int main() {
//     deque<int> d; 
//     for (int i = 0; i < 10; i++) {
//         d.push_back(i); 
//     } 
//     // deque& operator=(const deque& deq); // 重载等号运算符  
//     // assign(beg, end);    // 将[beg, end区间的元素拷贝给本身
//     // vector<char> v(10, 'c'); 
//     // deque<int> d1; 
//     // d1.assign(v.begin(), v.end());  
//     // printDeque(d1);  // 2 2 2 2 2 2 2 2 2 2   

//     vector<char> v(10, 'c'); 
//     deque<int> d1; 
//     d1.assign(v.begin(), v.end());  
//     printDeque(d1);     // 99 99 99 99 99 99 99 99 99 99  将字符型'c'转换为int型

//     // assign(n, elem);     // 将n个elem拷贝给本身 
//     // deque<int> d3(10, 100); 
//     // d3.assign(5, 3); 
//     // printDeque(d3); // 3 3 3 3 3 // 拷贝会全部改写之前的元素
//     return 0; 
// } 

// int main() {
    
// // deque.empty() // 判断容器是否为空
// // deque.size() // 返回容器中元素的个数 
// // deque.resize() // 重新指定容器的长度为nun, 若容器变长,则以默认值填充新位置; 若容器变短,则末尾超出容器长度的元素被删除
// // deque.resize(num, elem);  // 重新指定容器的长度为nun, 若容器变长,则以elem充新位置; 若容器变短,则末尾超出容器长度的元素被删除

//     return 0; 
// }

// int main() {
//     // push_back() // 向容器尾部添加一个数据
//     // push_front()  // 向容器头部插入一个数据
//     // pop_pack()  // 删除容器中最后一个数据
//     // pop_first  // 删除容器中=第一个数据   

//     // 指定位置操作
    
//     // inert(pop, elem);  // 在pos位置插入一个elem元素的拷贝,返回新数据的位置
//     // insert(pop, n, elem);  // 在pos位置插入n个elem数据,无返回值
//     // inset(pop, beg, end);   // 在pos位置插入[beg, end)区间的数据,无返回值
//     // clear();   // 清空容器内的所有数据
//     // erase(beg, end); // 删除[beg, end)区间的数据,返回下一个数据的位置
//     // erase(pos);   // 删除pos位置的数据,返回下一个数据的位置
//     return 0; 
// }



// int main() {

//     // at(int idx); //返回索引idx所指的数据
//     // poerator[idx];  // 返回索引idx所指的数据
//     // front();   // 返回容器中第一个数据元素
//     // back();  // 返回容器中最后一个元素  
//     return 0; 
// } 

// int main() {
//     // sort (iterator beg, iterator end);  // 对beg和end区间内元素进行排序 
//     deque<int> d1; 
//     for (int i = 0; i < 5; i++) {
//         int n = 0; 
//         cin >> n; 
//         d1.push_back(n); 
//     } 
//     sort(d1.begin(), d1.end()); 
//     printDeque(d1); 
//     return 0; 
// }