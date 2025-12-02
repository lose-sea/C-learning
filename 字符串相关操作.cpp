#include<iostream>  
#include<vector> 
#include<string> 
#include<cstdio>
#include<cstring>
using namespace std;  
int main() {

    // string s = "abc "; 
    // s.push_back('h'); 
    // s.push_back('e'); 
    // s.push_back('l');                   
    // s.push_back('l');
    // s.push_back('o'); 
	// cout << s << endl; //abc hello 


    // string str = "hello world";
    // str.pop_back(); 
    // cout << str << endl; //hello worl 



	// string str = "hello world"; 
	// int sz = str.size(); 
	// while (sz >= 2 ) {
		
	// 	str.pop_back(); 
	// 	sz--;  
	// }  
	// cout << str << endl; // h
	// cout << sz << endl;  // 1  


    
    
    
    
    //insert

    // string str1 = "hello world"; 
    // string str2 = "xxx"; 
    // str1.insert(5, str2);
    // cout << str1 << endl; //helloxxx world


    // string str1 = "hello world"; 
    // char str2[] = "yyy"; 
    // str1.insert(5, str2);
    // cout << str1 << endl; //helloyyy world

    // string str1 = "hello world";
    // str1.insert(4, 3, 'x'); 
    // cout << str1 << endl; // hellxxxo world



    //find

    // string s = "hello world hello everyone"; 
    // string str = "llo"; 
    // size_t n = s.find(str); 
    // cout << n << endl; //2

    // n = s.find(str, n + 1); 
    // cout << n << endl; // 14



    // string s = "hello world hello everyone"; 
    // size_t n = s.find("llo"); 
    // cout << n << endl; //2

    // n = s.find("llo", n + 1); 
    // cout << n << endl; // 14 



    // string s = "hello world hello everyone"; 
    // size_t n = s.find("word", 0, 3); 
    // cout << n << endl;  //6
    // size_t m = s.find("everyone", n + 1, 4);
    // cout << m << endl;  //18



    // string s = "hello world hello everyone"; 
    // string str = "llo"; 
    // char ch[] = "llo"; 
    // size_t n = s.find(str, 0, 3);   //error 要查找字符串前n个字符, 只能用于char*类型 不能用于string类型
    // cout << n << endl;  
    // size_t m = s.find(ch, 0, 3);    // right
    // cout << m << endl;  



    // string s = "hello world hello everyone"; 
    // size_t n = s.find('o'); 
    // cout << n << endl;  //4
    // n = s.find('o', n + 1); 
    // cout << n << endl;  //7



    // string s = "hello world hello everyone"; 
    // string str = "xyz"; 
    // size_t n = s.find(str); 
    // cout << n << endl;  //18446744073709551615 string::npos 返回-1, 表示未找到,被当作无符号整数最大值处理 
    // cout << string::npos << endl; //18446744073709551615
    // if (n == string::npos) {
    //     cout << "找不到" << endl;
    // } else {
    //     cout << "找到了" << endl;
    // }




    // //substr() 
    // string str = "hello world hello everyone";
    // string s1 = str.substr(3, 6); 
    // cout << s1 << endl; // lo wor
     
    // string s2 = str.substr(7); 
    // cout << s2 << endl; // rld hello everyone 

    // string s3 = str.substr(); 
    // cout << s3 << endl; // hello world hello everyone  


    // string str = "hello world hello everyone";
    // size_t n =str.find("world");
    // string s1 = str.substr(n, 10); 
    // cout << s1 << endl; //world hell

    string s1 = "abc"; 
    string s2 = "abcd"; 
    char s3[] = "abcdf"; //c风格字符串
    // s1 == s2; 
    s1 == s2;  
    bool operator== (const string& lhs, const string& rhs); // 使用方式 s1 == s2
    bool operator== (const char*   lhs, const string& rhs); // 使用方式 s1 == s2
    bool operator== (const string& lhs, const char*   rhs); // 使用方式 s1 == s2
    // 不能使用  bool operator== (const char*   lhs, const char*   rhs); // 使用方式 s1 == s2
    // 无法比较两个c风格字符串是否相等
	
    // "abc" < "aq" ; // 'b' 的ASCLLI值小于 'q' 的ASCII值, 所以返回true
    // "abxdef" < "ff" // 'a' 的ASCII值小于 'f' 的ASCII值, 所以返回true
    // "100" < "9" // '1' 的ASCII值小于 '9' 的ASCII值, 所以返回true
    
    return 0;
}

