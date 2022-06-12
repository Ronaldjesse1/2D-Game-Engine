//
//  main.cpp
//  textconsole01
//
//  Created by Ronald Cho on 2022/06/11.
//

#include <iostream>

//standard class

#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <chrono>
#include<cmath>
#include "Vec2D.hpp"
#include <fstream>

namespace ronald {

class Myclass{
private:
    int a;
    int b;
    int c;
public:
    Myclass(){
        std::cout << "constructor of my class" << std::endl;
        a = 0;
        b = 0;
        c = 0;
    }
    ~Myclass(){
        std::cout << "destructor of my class" << std::endl;
    
    }
    int sum(){
        return a + b + c;
    }
    void setA(int v){a = v;}
    void setB(int v){b = v;}
    void setC(int v){c = v;}
};

int function(int a, int b){
    return a + b;
}
};

int sum(int a, int b){
    return a + b;
}


using namespace ronald;
int main(int argc, const char * argv[]) {
    
//    std::vector<int> vec;
//
//    for(int i=0; i<100; i++){
//        vec.push_back(std::rand()%100);
//    }
//    std::cout << "before sort:" <<std::endl;
//    ronald1::printVector(vec);
//
//    std::sort(vec.begin(), vec.end());
//
////    std::sort(vec.begin(), vec.end(), [](int a, int b) -> int{
////        return(a < b);
////    });
//    std::cout << "After sort:" <<std::endl;
//    ronald1::printVector(vec);
    std::ifstream ifs;
    ifs.open("/Users/Ronald/Documents/GitHub/2D-Game-Engine/mario_PNG53.png");
    if(ifs.is_open()){
        char data[5];
        ifs.read(data, 4);
        
        std::cout << data << std::endl;
        ifs.close();
    }
    
    
    return 0;
}
