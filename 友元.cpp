#include<iostream> 
using namespace std;


// class Building {
// public: 
//     Building() {
//         settingRoom = "客厅"; 
//         bedroom = "卧室";  
//     }
// public: 
//     string settingRoom; //  客厅
// private: 
//     string bedroom;  // 卧室
// }; 
// void test() {
//     Building b; 
//     cout << b.settingRoom << endl; 
//     cout << b.bedroom << endl;  //  无法访问私有内容
// }


// class Building {
//     friend void test(); 
// public: 
//     Building() {
//         settingRoom = "客厅"; 
//         bedroom = "卧室";  
//     }
// public: 
//     string settingRoom; //  客厅
// private: 
//     string bedroom;  // 卧室
// }; 
// void test() {
//     Building b; 
//     cout << b.settingRoom << endl; 
//     cout << b.bedroom << endl;   // 可以正常访问
// }

// int main() {
//     test(); 
//     return 0; 
// }

// class Building;  // 提前声明
// class People {
// public: 
//     People(); 
//     void visit(); // 参观函数,访问Building中的属性 
//     Building* building; 
// }; 


// class Building {  
//     // People类 是本类的友元,可以访问本类的私有成员
//     friend class People; 
// public: 
//     Building(); 
// public: 
//     string settingRoom; //  客厅
// private: 
//     string bedroom;  // 卧室
// }; 
// // 类外写成员函数
// Building::Building() {
//     settingRoom = "客厅";  
//     bedroom = "卧室"; 
// }

// People::People() {
//     building = new Building; 
// } 

// void People::visit() {
//     cout << building->settingRoom << endl; 
//     cout << building->bedroom << endl; 
// }

// void test() {
//     People p; 
//     p.visit(); 
// }

// int main() {
//     test(); 
//     return 0; 
// } 


// 成员函数做友元
class Building;  
class People {
public: 
    People(); 
    void visit1();    // 让visit函数可以访问Building中的私有成员 
    void visit2();    // 让visit访问不到Building中的私有成员 
    Building* building;    
};  


class Building { 
    friend void People::visit1();  // 告诉编译器,Poeple类下的visit的成员函数作为本类的友元,可以访问本类的私有成员

public: 
    Building(); 
public: 
    string settingRoom; 
private: 
    string bedRoom; 
};  


Building::Building() {
    settingRoom = "客厅"; 
    bedRoom = "卧室"; 
}   


People::People() {
    building = new Building;   
}  


void People::visit1() {
    cout << building->settingRoom << endl; 
    cout << building->bedRoom << endl; 
}


void People::visit2() {
    cout << building->settingRoom << endl; 
    // cout << building->bedRoom << endl; 
}

void test() {
    People p; 
    p.visit1(); 
} 

int main() {
    test(); 
    return 0; 
}


