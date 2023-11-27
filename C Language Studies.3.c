#include <stdio.h>

unsigned char a =5;
unsigned char b=8;

void f1(unsigned char *a,unsigned char *b){
    unsigned char t;        // Burada swap işlemini pointer ile yapmış olup değerlerin kesin bir şekilde değişmesi sağlanmıştır.
    t=*a;
    *a=*b;
    *b=t;
}
void f2(unsigned char x){   // Fonksiyona gönderilen değerle b değerinin farkı alınmıştır.
    b=b-x;

}
char f3(unsigned char v){                 //fonksiyona gönderilen değerin adres bilgisinin 1 olup olmadığı kontrol ediliyor.
    if(v&1) return 0; else return 1;

}
unsigned char f4(unsigned char v){
    return ((v<<4)| (v>>4));
}

void main(){
    unsigned char x=1,y=2;
    f1(&x,&y); printf("1) %d %d %d %d \n",a,b,x,y);

    printf("2) ");
    f2(3);printf("%d",b);
    f2(b);printf("%d",b);
    f2(5);printf("%d\n",b);

    printf("3) %d %d %d %d \n",b,f3(12),f3(0xce),f3(7),'U'-'R');

    printf("4) %d %d %d %d \n",f4(16),f4(f4(0x32)),f3(f4(0x10)),a);
    getchar();
    getchar();
}