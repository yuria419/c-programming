#include<stdio.h>

// mainっていうのも関数。c言語のコンパイラさん（gcc　ぐぬーさんの作ったc言語のコンパイラ）は、プログラムをコンパイルする際にmain関数を探す。

//int tashizan(int a , int b);//プロトタイプ宣言

//int main(void){
 //   int sum;
 //   sum = tashizan(96785,784846);
 //   printf("%d\n",sum);
 //   return 0;
//}

//関数を作ってみよう

//int tashizan(int a , int b){
//    int sum;
//    sum = a + b;
 //   return sum;
//}

// 関数を実行するためには必ず、main関数の中で、記述しなければならない。（関数の呼び出し）

// 関数の型　関数名( もらってくる数[引数] ) {
int kakezan(int x, int y);

int main(void){
    int v;
    v=kakezan(64,3);
    printf("%d\n",v);
    return 0;
}

int kakezan(int x, int y){
    return x*y;
}
