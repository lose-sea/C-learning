#include<iostream> 
#include<map> 
using namespace std; 
void printMap(map<int, int>& m) {
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
        cout << "key = " << it->first << " value = " << (*it).second << endl; 
    }
}
// int main() {
//     map<int, int> m; 
//     m.insert(pair<int, int>(1, 10)); 
//     m.insert(pair<int, int>(2, 20)); 
//     m.insert(pair<int, int>(3, 60)); 
//     m.insert(pair<int, int>(4, 40)); 
//     m.insert(pair<int, int>(5, 50)); 
//     printMap(m); 
//     return 0; 
// }  

// int main() {

//     map<int, int> m; 
//     // 插入 
//     // 第一种
//     m.insert(pair<int, int>(1, 10)); 
//     //printMap(m);  
//     // 第二种
//     m.insert(make_pair(2, 20)); 
//     //printMap(m); 
//     // 第三种 
//     m.insert(map<int, int>::value_type(3, 30)); 
//     //printMap(m);  
//     // 第四种
//     m[4] = 40; 
//     //printMap(m);  

//     // 删除 
//     //m.erase(m.begin()); 
//     //printMap(m);  
//     // m.erase(3); 
//     // printMap(m); 

//     return 0; 
// }

class MyCompare {
public : 
    bool operator() (int v1, int v2) {
        return v1 > v2; 
    }
}; 
int main() {
    map<int, int, MyCompare> m; 
    for (int i = 1; i < 5; i++) {
        m.insert(make_pair(i, i * 10)); 
    } 
    for (auto it = m.begin(); it != m.end(); it++) {
        cout << "key = " << it->first << " value = " << (*it).second << endl;  
    }
    return 0; 
}