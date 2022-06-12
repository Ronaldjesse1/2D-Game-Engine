//
//  Vec2D.hpp
//  textconsole01
//
//  Created by Ronald Cho on 2022/06/12.
//

#ifndef Vec2D_hpp
#define Vec2D_hpp

#include <iostream>
#include <cmath>
namespace ronald {
template<typename  T> class Vec2D{
private:
    T x;
    T y;
public:
    Vec2D(){
        x=0.f;
        y=0.f;
    }
    
    Vec2D(T xv, T yv){
        x = xv;
        y = yv;
    }
    T length(){
        return std::sqrt(x*x + y*y);
        
    }
    const Vec2D operator + (const Vec2D &v){
        return Vec2D(x + v.x , y + v.y);
    }
    const Vec2D& operator += (const Vec2D &v){
        x += v.x;
        y += v.y;
        return *this;
    }
    const bool operator == (const Vec2D &v){
        return (x == v.x && y ==v.y);
    }
    const Vec2D operator - (const Vec2D &v){
        return Vec2D(x - v.x , y - v.y);
    }
    const Vec2D& operator -= (const Vec2D &v){
        x -= v.x;
        y -= v.y;
        return *this;
    }
    friend std::ostream& operator << (std::ostream& o, const Vec2D& v){
        o << "Vec2D(" << v.x <<", " << v.y << ")"<< std::endl;
        return o;
    }
    const Vec2D& operator *= (const Vec2D &v){
        x *= v.x;
        y *= v.y;
        return *this;
    }
    const Vec2D operator * (const Vec2D &v){
        return Vec2D(x * v.x , y * v.y);
    }
    const Vec2D& operator /= (const Vec2D &v){
        x /= v.x;
        y /= v.y;
        return *this;
    }
    const Vec2D operator / (const Vec2D &v){
        return Vec2D(x / v.x , y / v.y);
    }
    const Vec2D& operator *= (const T kScalar){
        x *= kScalar;
        y *= kScalar;
        return *this;
    }
    const Vec2D operator * (const T kScalar){
        return Vec2D(x * kScalar , y * kScalar);
    }
    const Vec2D& operator /= (const T kScalar){
        x /= kScalar;
        y /= kScalar;
        return *this;
    }
    const Vec2D operator / (const T kScalar){
        return Vec2D(x / kScalar , y / kScalar);
    }
//    const Vec2D operator * (const float kScalar, const Vec2D &v){
//        return Vec2D(x * kScalar , y * kScalar);
//    }
    
    
};
#endif /* Vec2D_hpp */

}
