#include<iostream> 
#include<cstring> 
#include<string>
using namespace std; 
int main() { 
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    int brr[10] = {0}; 
    memcpy(brr, arr, sizeof(arr)); 
    for (int i = 0; i < 10; i++) { 
        cout << brr[i] << " "; 
    }                       // 0 1 2 3 4 5 6 7 8 9
    
    return 0;
}