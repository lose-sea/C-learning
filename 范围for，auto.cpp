#include<iostream>  
#include<vector>
using namespace std; 
int main() { 
    // int arr[] = {1, 2, 3, 4, 5};
    // for (int x : arr) { 
    //     cout << x << " "; 
    // }                        // right
    int n = 5; 
    vector<int>arr(n);  
    for (int i = 0; i < n; i++) { 
        arr[i] = i + 1; 
    }

    for (auto x : arr) { 
        cout << x << " "; 
    }                       // right


    return 0; 
} 


