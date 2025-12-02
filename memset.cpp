#include<iostream> 
#include<cstring> 
#include<string>
using namespace std; 
int main() { 
    int arr[10]; 
    memset(arr, 0, sizeof(arr)); 

    for (int i = 0; i < 10; i++) { 
        cout << arr[i] << " "; 
    }                       // right    


    char str[20] = "Hello, World!"; 
    memset(str, '*', 5);
    cout << endl << str << endl;  // ***** World! 以字节为单位
     
    int brr[10] = {1, 2, 3, 4, 5};
    memset(brr, 1, sizeof(brr));
    for (int i = 0; i < 10; i++) {
        cout << brr[i] << " "; 
    }                           // error,每个字节都被设置为1，int通常占4个字节，所以每个int变成了0x01010101，即16843009
    

    string s = "Hello, World!";
    memset(&s[2], '*', 5);
    cout << endl << s << endl;   

    return 0;  

}