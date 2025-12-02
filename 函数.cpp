#include <iostream> 
#include<string> 
#include<cstring> 
#include<cmath>
using namespace std; 



// 实现两数之和
int Add(int a, int b) {
    return a + b; 
}

double Add(double a, double b) {
    return a + b; 
}

int main() {

    int a = 5, b = 10;
    double x = 5.5, y = 10.2;   
    cout << "整数相加: " << Add(a, b) << endl;
    cout << "浮点数相加: " << Add(x, y) << endl; 

    return 0; 
}