#include "calculator.h"

template <typename T>
T addition(T x, T y){
 return x+y;   
}

template <typename T>
T subtraction(T x, T y){
    return x-y;
}

template <typename T>
T multiplication(T x, T y){
    return x*y;
}

template <typename T>
T Division(T x, T y){
    if(y==0) {return 0;} // implement throwing an error / printing error if divisor is 0
    return x/y; 
}

template <typename T>
T Factorial(T x){
    if(x==0){ return 1;}
    else if(x==1){return 1;}
    else {
        return x*(x-1);
    }
}

template <typename T>
void swap(T &x, T &y){
    T temp=x;
    x=y;
    y=temp;
    return;
}

template <typename T>
T GCD(T x, T y){
    
}

template <typename T>
T LCM(T x, T y){
    
}

template <typename T>
T Random(T x, T y){ // range is x-y 
    if(x>y) swap(x,y);
     srand (time(NULL));
    T number= rand() % y +x;
    return number;
} 





