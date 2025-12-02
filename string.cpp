#include<iostream> 
#include<string> 
#include<algorithm> 
using namespace std; 

// int main() {
//     // 构造string
//     string str1(10, 'c');  
//     string str2; 
//     char ch[] = "hello world";  
//     string str3(ch);   
//     string str4 = "xinyan" ; 
//     string str(str4); 
//     cout << str << endl; 
//     return 0; 
// }


// // 字符串赋值
// int main() { 
//     string str("zhangxinyan");  
//     char ch[] = "hello world"; 
// // string& poerator = (const char* s); // char* 类型的字符串赋值给当前字符串  
//     string str1; 
//     str1  = ch; 
//     cout << str1 << endl;    // hello world

// // string& operator = (const string& s);  // 把字符串s赋给当前字符串  
//     string str2; 
//     str2 = str; 
//     cout << str2 << endl;  // zhangxinyan

// // string& operator = (char c);   // 字符赋给当前的字符串 
//     string str3; 
//     str3 = 'c'; 
//     cout << str3 << endl;  // c

// // string& assign(const char* s);   // 把字符串s赋给当前字符串  
//     string str4; 
//     str4.assign(str); 
//     cout << str4 << endl;  // zhangxinyan

// // string& assign(const char* s, int n);   // 把字符串s的前n个字符赋给当前字符串  
//     string str5; 
//     str5.assign(ch, 8, 10); 
//     cout << str5 << endl;  // hello wo 

// // string& assign(const string& s);    // 把字符串s赋给当前字符串  
//     string str6; 
//     str6.assign(str); 
//     cout << str6 << endl;  // zhangixnyan

// // string& assign(int n, char c);      // 用n个字符c赋给当前字符串   
//     string str7; 
//     str7.assign(10, 'l'); 
//     cout << str7 << endl; 
 
// // string& assign(const string& str, size_t pos, size_t count); // 将字符串str从pos位置开始，赋值count个字符给当前字符串
//     string str8;  
//     str8.assign(str, 5, 3);     
//     cout << str8 << endl;   // xin 
//     return 0; 
// }






// // 字符串赋值
// int main() { 
//     string str1("zhangxinyan ");  
//     char ch[] = "hello world ";
//     string str2 = "zhang "; 
//     // string& operator+=(const char* str);   
//     // str2 += ch; 
//     // cout << str2 << endl; // zhang hello world

//     // string& operator+=(const char c); 
//     // str2 += 'c'; 
//     // cout << str2 << endl; //zhang c

//     // string& operator+=(const string& str); 
//     // str2 += str1; 
//     // cout << str2 << endl; // zhang zhangxinyan

//     // string& append(const char* s);  		// 把字符串s连接到当前字符串结尾 
//     // str2.append(ch); 
//     // cout << str2 << endl; //zhang hello world

//     // strinf& append(consst char* s, int n);  // 把字符串s的前n个字符连接到当前字符串的结尾  
//     // str2.append(ch, 7); 
//     // cout << str2 << endl; //zhang hello w

//     // string& append(const string& s); 		//同operator+=(const string& str)   
//     // str2.append(str1); 
//     // cout << str2 << endl; // zhang zhangxinyan

//     // string& append(const string& s, int pos, int n);   // 把字符串s中从pos位置开始的n个字符连接到字符串结尾 
//     str2.append(str1, 3, 7); 
//     cout << str2 << endl;  // zhang ngxinya

//     return 0; 
// }




// // 字符串查找和替换
// int main() {
//     string str = "hello world"; 
//     string str1 = "I love code"; 
//     char ch[] = "xuptggg"; 
//     str1.replace(3, 5,str); 
//     cout << str1 << endl;  // I lhello worldode 
//     str1.replace(4, 4, ch); 
//     cout << str1 << endl;  // I lhxuptggg worldode
//     return 0; 
// }



// int main() {
//     string str1 = "hello"; 
//     string str2 = "xello"; 
//     char ch[] = "xupt"; 
//     int n =  str1.compare(str2); 
//     int m = str1.compare(ch); 
//     cout << m << endl;  // -1
//     cout << n << endl;  // -1 
//     return 0; 
// }



// int main() {
//     string str = "hello world"; 
//     str.erase(3); 
//     cout << str << endl;  // hel

//     return 0; 
// }


int main() {
    string str = "hello world"; 
    string str1; 
    str1 = str.substr(3); 
    cout << str1 << endl; // ld world
    return 0; 
}