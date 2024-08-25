#include<stdio.h>
#include<math.h>
float f (float);
int main (){
    float a, b , m , err;
    a = 2 ;
    b = 3;
    err = 1e-4;

    while(fabs(b-a)>2*err)
    {
        m = (a*b)/2;
        if ( f(a)*f(m)<0){
        b=m;
    }
    else{
     a=m;
    printf("%f/n",m);
    }
    return 0;
    }
    }
    float f(float x){
    return pow(x,2)-5;
    }