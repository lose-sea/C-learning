#include<iostream> 
#include<list> 
using namespace std;  
void printList(list<int>& l) {
    for (auto it = l.begin(); it != l.end(); it++) {
        cout << *it << " "; 
    } 
    cout << endl; 
} 

bool cmp(int v1, int v2) {
    return v1 > v2; 
} 
int main() {
    list<int> l1; 
    for (int i = 0; i < 5; i++) {
        l1.push_back(i); 
    }  
    printList(l1); // 0 1 2 3 4 
    l1.reverse(); 
    printList(l1);   // 4 3 2 1 0 
    l1.push_back(1); 
    printList(l1);  // 4 3 2 1 0 1  
    l1.sort(); 
    printList(l1); // 0 1 1 2 3 4  

    // 自定义排序
    l1.sort(cmp); 
    printList(l1); // 4 3 2 1 1 0 
    return 0; 
}