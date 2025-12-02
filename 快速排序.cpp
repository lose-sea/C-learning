#include<iostream> 
using namespace std; 


int cmp (const void* e1, const void* e2) {
    return *(int*)e1 - *(int*)e2;
}

int main() {
    int n = 0; 
    cin >> n; 
    int* arr = new int[n]; 
    for ( int i = 0; i < n; i++) {
        cin >> arr[i]; 
    } 
    qsort (arr, n, sizeof(int), cmp);  
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl; 
    } 
    delete[] arr; 
    return 0; 
}