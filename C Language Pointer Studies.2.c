#include <stdio.h>

                                                // call by value
void degerdegistir(int a , int b){

    int temp=a;
    a=b;
    b=temp;
    printf("a:%d, b:%d\n",a,b);
}

int main(){
    int x=5,y=10;
    degerdegistir(x,y);
    printf("x:%d, y:%d\n",x,y);


    getchar();
    return 0 ;
}