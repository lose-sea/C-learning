#include<iostream> 
#include<vector>
using namespace std; 

void printVector(vector<int>&v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " "; 
    }
}
// int main() {


//     // vector构造函数
// // vector<T> v; 
//     vector<int> v1;  // 默认构造,无参构造 
//     for (int i = 0; i < 10; i++) {
//         v1.push_back(i + 10); 
//     } 
//     printVector(v1); // 10 11 12 13 14 15 16 17 18 19

// // vector(v.begin(), v.end());  // 用区间的方式进行构造 
//     vector<int>v2(v1.begin(), v1.end()); 
//     printVector(v2); // 10 11 12 13 14 15 16 17 18 19

// // vector(n, elem);  
//     vector<int>v3(10, 6); 
//     printVector(v3); // 6 6 6 6 6 6 6 6 6 6

    
// // vector(const vector &vec);  拷贝构造
//     vector<int>v4(v3); 
//     printVector(v4); // 6 6 6 6 6 6 6 6 6 6
//     return 0; 
// } 



// int main() {
//     vector<int> v; 
    // for (int i = 0; i < 10; i++) {
    //     v.push_back(i);   
    // }  // 0 1 2 3 4 5 6 7 8 9
//     // vector& operator = (const vector &vec); // 重载等号操作符 
//     vector<int>v1 = v; 
//     printVector(v1); // 0 1 2 3 4 5 6 7 8 9
//     cout << endl; 
//     // assign(beg, end); // 将[beg, end)区间中的数据拷贝给本身  
//     vector<int> v2; 
//     v2.assign(v.begin(), v.end()); 
//     printVector(v2);  // 0 1 2 3 4 5 6 7 8 9 
//     cout << endl; 
//     // assign(n, elem); 
//     vector<int> v3; 
//     v3.assign(10, 4); 
//     printVector(v3);  // 4 4 4 4 4 4 4 4 4 4
//     return 0; 
// }





// int main() {
    
//     // enpty()  // 判断容器是否为空
//     // capacity();  // 容器的容量
//     // size();     // 返回容器中元素的个数
//     // resize(int num); // 重新指定容器的长度为num,若容器变长,则以默认值填充新位置.若容器变短,则末尾超出容器长度的元素被删除
//     // resize(int num, elem); //  重新指定容器的长度为num,若容器变长,则以elem填充新位置.若容器变短,则末尾超出容器长度的元素被删除

//     vector<int>v; 
//     v.push_back(1); 
//     cout << v.capacity() << endl;  

//     vector<int> v; 
//     // v.resize(10); 
//     // for (size_t i = 0; i < v.capacity(); i++) {
//     //     cout << v[i] << " "; 
//     // }  // 0 0 0 0 0 0 0 0 0 0

//         v.resize(10, 2); 
//     for (size_t i = 0; i < v.capacity(); i++) {
//         cout << v[i] << " "; 
//     }  // 2 2 2 2 2 2 2 2 2 2

//     return 0; 
// }



// int main() {

//     // push_back(elem);  // 尾部插入元素
//     // pop_back();     // 删除最后一个元素
//     // insert(const_inerator pos, ele);  // 迭代器指向位置pos插入元素ele 
//     // insert(const_iterator pos, int count, ele);  // 迭代器指向位置pos插入count个元素ele 
//     // erase(const_iterator pos);  // 删除迭代器指向的元素 
//     // erase(const_inerator start, const_iterator end); // 删除迭代器从strat到end之间的元素
//     // clear();          // 删除容器中的所有元素
//     vector<int> v; 
//     for (int i = 0; i < 10; i++) {
//         v.push_back(i);   
//     }  
//     // printVector(v);   // 0 1 2 3 4 5 6 7 8 9 
//     //v.insert(v.begin() + 2, 2, 100);  
//     // printVector(v);  // 0 1 100 100 2 3 4 5 6 7 8 9 

//     // v.erase(v.begin() + 1, v.begin() + 4);  
//     // printVector(v);  // 0 4 5 6 7 8 9


//     v.clear(); 
//     printVector(v); 
//     return 0; 
// }



// int main() {

//     vector<int> v; 
//     for (int i = 0; i < 10; i++) {
//         v.push_back(i); 
//     }

//     cout << v.at(4) << endl; // 4
//     cout << v[4] << endl;  // 4
//     cout << v.front() << endl;  // 0
//     cout << v.back() << endl;  // 9
//     return 0; 
// }

// at(int idx);  // 返回索引idx所指的元素
// operator[];     // 返回索引idx所指的元素 
// front();         // 返回容器中第一个数据元素
// back();         // 返回容器中最后一个数据元素


// int main() {
//     // swap(vec); 将vec与本身的元素进行互换  
//     vector<int>v1(10, 10); 
//     vector<int>v2; 
//     for (int i = 0; i < 10; i++) {
//         v2.push_back(i);  
//     } 
//     printVector(v1); // 10 10 10 10 10 10 10 10 10 10
//     cout << endl; 
//     printVector(v2);  // 0 1 2 3 4 5 6 7 8 9 
//     cout << "互换后" << endl;
//     v1.swap(v2);
//     printVector(v1); // 0 1 2 3 4 5 6 7 8 9
//     cout << endl; 
//     printVector(v2);  // 10 10 10 10 10 10 10 10 10 10
//     return 0; 
// }




// int main() {
//     vector<int> v; 
//     for (int i = 0; i < 100000; i++) {
//         v.push_back(i); 
//     } 
//     cout << v.capacity() << endl; // 131072  
//     cout << v.size() << endl;  // 100000
//     v.resize(3);  
//     cout << v.capacity() << endl;  // 131072  // resize() 并没有使容量改变
//     cout << v.size() << endl;  // 3 
//     // 使用swap收缩内存空间 
//     vector<int>(v).swap(v); 
//     cout << v.size() << endl;  // 3
//     cout << v.capacity() << endl;  // 3
//     return 0; 
// }



int main() { 
    vector<int> v;  
    int num = 0;  // 统计开辟内存的数据   
    // 用reserve()预留空间 
    v.reserve(100000); 
    int* p = NULL;  
    for (int i = 0; i < 100000; i++) {   
        v.push_back(i);   
        if (p != &v[0]) { 
            p = &v[0];  
            num++;  
        } 
    }   
    cout << num << endl;  // 1 --> 只开辟了一次内存
    return 0 ; 
}






