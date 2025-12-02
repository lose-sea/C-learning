#include<iostream> 
using namespace std;  
// 设计一个立方体类
class Cube {
public :
// 公共接口 
// 设置长 
    void setLong(int l) {
        m_l = l; 
    } 
// 设置宽 
    void setWide(int wide) { 
        m_w = wide; 
    }  
// 设置高  
    void setHigh(int high) { 
        m_h = high;  
    }  
// 获取 
    int getLongth() { 
        return m_l;  
    }  
    int getWide() { 
        return m_w;  
    }  
    int getHigh() { 
        return m_h;  
    }  
// 获取表面积 
    int calculateS() { 
        return (m_l * m_w + m_l * m_h + m_h * m_w) * 2; 
    } 
// 获取体积
    int calculateV() {
        return m_l * m_w * m_h; 
    } 
// 利用成员函数判断两个立方体是否相等
    bool isSamByClass(Cube& c2) {
        return getHigh() == c2.getHigh() && getLongth() == c2.getLongth() && getWide() == c2.getWide();   
    }
private : 
// 属性
    int m_l;  // 长
    int m_w;  // 宽
    int m_h;  // 高
}; 
// 利用全局函数判断两个立方体是否相等
bool isSame(Cube c1, Cube c2) {
    return c1.getHigh() == c2.getHigh() && c1.getLongth() == c2.getLongth() && c1.getWide() == c2.getWide();   
}
int main() { 
    // 创建立方体对象
    Cube c1; 
    c1.setHigh(3); 
    c1.setLong(5); 
    c1.setWide(4); 
    cout << c1.calculateS() << endl;  // 面积
    cout << c1.calculateV() << endl;  // 体积 
    // 创建第二个立方体对象
    Cube c2; 
    c2.setHigh(3); 
    c2.setLong(5); 
    c2.setWide(4); 
    if (isSame(c1, c2)) {
        cout << "same" << endl; 
    } else {
        cout << "dissame" << endl; 
    } 
    if (c1.isSamByClass(c2)) {
        cout << "same" << endl; 
    } else {
        cout << "dissame" << endl; 
    }
    return 0; 
}


