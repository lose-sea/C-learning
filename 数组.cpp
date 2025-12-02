#include<iostream>
using namespace std; 
int main() {

//  数组逆置

int n = 0; 
cin >> n; 
int* arr = (int*)malloc(sizeof(int) * n); 
for (int i = 0; i < n; i++) {
    cin >> arr[i]; 
}
for (int i = 0; i < n / 2; i++) {
    int tem = arr[i]; 
    arr[i] = arr[n - i - 1]; 
    arr[n - 1 - i] = tem; 
}
for (int i = 0; i < n; i++) {
    cout << arr[i] << " "; 
} 
    return 0; 
}