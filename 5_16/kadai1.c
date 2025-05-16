#include<stdio.h>

float chouhoukeinomenseki(float x,float y);

int main(void){
    float s=chouhoukeinomenseki(5.9,3.7);
    printf("%f\n",s);
    return 0;
}

float chouhoukeinomenseki(float x,float y){
    float s;
    s=x*y;
    return s;
}