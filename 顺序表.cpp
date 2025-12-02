#include <iostream> 
#include<string> 
#include<cstring> 
#include<cmath> 
#include<algorithm>
using namespace std; 





int main() {
	
	
	
	
	// 动态实现顺序表
	// 往顺序表末尾依次插入1到10 
	// 第一次空间不够, 扩容 
    
	int* a = new int[4] ; 
	int capacity = 4;  
	 
	// 第二次空间不够,扩容
	int* t = new int[capacity * 2]; 
	memcpy(t, a, sizeof(int) * capacity); 
	delete[] a; 
	a = t; 
	capacity *= 2; 
	
	// 第三次空间不够,扩容
	int* t = new int[capacity * 2]; 
	memcpy(t, a, sizeof(int) * capacity); 
	delete[] a; 
	a = t; 
	capacity *= 2; 
	
	return 0; 
} 