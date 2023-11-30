// TODO : Replace this file by your vec2.c from last tp.
#include "vec2.h"
vec2 vec2_create(double x_,double y_){
    vec2 vecteur2;
    vecteur2.x = x_;
    vecteur2.y = y_;
    return vecteur2;
}

vec2 vec2_create_zero(){
    vec2 vecteur2;
    vecteur2.x  = 0;
    vecteur2.y  = 0;
    return vecteur2;
}

vec2 vec2_add(vec2 lhs,vec2 rhs){
    vec2 NewVec;
    NewVec.x = lhs.x + rhs.x;
    NewVec.y = lhs.y + rhs.y;
    return NewVec;
}

vec2 vec2_sub(vec2 lhs,vec2 rhs){
    vec2 NewVec;
    NewVec.x = lhs.x - rhs.x;
    NewVec.y = lhs.y - rhs.y;
    return NewVec;
}

vec2 vec2_mul(double scalar, vec2 rhs){
    vec2  NewVec;
    NewVec.x = rhs.x * scalar;
    NewVec.y = rhs.y * scalar;
}

double vec2_dot(vec2 lhs,vec2 rhs){
    
}


double vec_norm(vec2 v){
    
}