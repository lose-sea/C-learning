#include<iostream> 
#include<ctime> 
using namespace std; 
int main() {

    srand(time(nullptr));  // 随机数种子
    for (int i = 0; i < 10; i++) {
        int n = rand(); 
        cout << n << endl; 
    }

    return 0; 

}