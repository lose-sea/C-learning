#include<iostream>
using namespace std; 
int main() {


    // resece()预留空间
    vector<int> v; 
    for (int i = 0; i < 100000; i++) {
        v.push_back(i); 
    } 
    cout << "v的容量大小为" << v.capacity() << " " << endl;  // 131072
    cout << "v的大小为" << v.size() << endl;   // 10000

    v.resize(3); // 重新指定大小
    cout << "v的容量大小为" << v.capacity() << " " << endl;  // 131072
    cout << "v的大小为" << v.size() << endl;   // 3


    return 0; 
}