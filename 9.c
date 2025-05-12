#include<stdio.h>
int main(void){
    int scores[5]={90,80,70,60,50};
    for(int i=0;i<5;i++){
        printf("scores[%d]=%d\n",i,scores[i]);
    }
    return 0;
}