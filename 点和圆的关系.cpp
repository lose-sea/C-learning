#include<iostream> 
using namespace std;  

// 成员函数
// // 点和圆的关系
// // 点类
// class Point { 
// public :  
//     Point() {
//         ; 
//     } 
//     Point(int x, int y) {
//         this->x = x; 
//         this->y = y; 
//     }
//     int x; 
//     int y; 
// }; 
// // 圆类
// class Circle {
// public : 
//     Circle(int x, int y, int r) { 
//         this->r = r; 
//         this->circle_center.x = x;
//         this->circle_center.y = y;  
//     }
//     int r; 
//     Point circle_center; 
//     // 判断点和圆的位置关系
//     void position(Point& p) {
//         if ((p.x - circle_center.x) * (p.x - circle_center.x) + (p.y - circle_center.y) * (p.y - circle_center.y) == r * r) {
//             cout << "点在圆上" << endl; 
//         } else if ((p.x - circle_center.x) * (p.x - circle_center.x) + (p.y - circle_center.y) * (p.y - circle_center.y) < r * r) {
//             cout << "点在圆内" << endl; 
//         } else {
//             cout << "点在圆外" << endl; 
//         }
//     }
// }; 

// int main() { 
//     Circle c(5, 6, 4);  
//     int x = 0; 
//     int y = 0;  
//     cin >> x >> y; 
//     Point p(x, y); 
//     c.position(p); 
//     return 0; 
// } 

// 全局函数
class Point {
public : 
    void set(int x, int y) {
        this->x = x; 
        this->y = y; 
    } 
    int getX() {
        return x;   
    } 
    int getY() {
        return y; 
    }
private : 
    int x; 
    int y; 
}; 

class Circle {
public : 
// 设置半径
    void setR(int r) {
        this->r = r; 
    } 
// 获取半径
    int getR() {
        return r; 
    } 
// 设置圆心
    void setPoint(Point p) {
        center = p; 
    } 
// 获取圆心 
    Point getCenter() {
        return center; 
    }
private :
    int r; 
    Point center; 
};  
void isInCircle(Circle& c, Point& p) {
    int dis = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) 
    + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY()); 
    if (dis == c.getR() * c.getR()) {
        cout << "点在圆上" << endl; 
    } else if (dis < c.getR() * c.getR()) {
        cout << "点在圆内" << endl; 
    } else {
        cout << "点在圆外" << endl; 
    } 
}  
int main() {
    Circle c; 
    c.setR(5);  
    Point center; 
    center.set(5, 6); 
    c.setPoint(center); 
    Point p; 
    p.set(4, 6); 
    isInCircle(c, p); 
    return 0; 
} 