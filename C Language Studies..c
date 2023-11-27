#include <stdio.h>
#include <string.h>
/*
void test (int a){
    a=a+1;
    printf("%d",a);

}
int addNumbers( int a, int b, int c){
    int total=a+b+c;
    return total; 
}
*/

/*int addArray(int a[], int length){
    int total=0;
    for (int i = 0; i < length; i++)
    {
        total+=a[i];
    }
    return total;
}
*/
int myStrLen(char a[]){

int length=0;
for (int i = 0; a[i] != '\0' ; i++)
{
    length++;
}
return length;


}
int main(){
  char name[]=" enessafaerbaş";
  printf("karakter uzunlugu : %d", myStrLen(name));

  /*int dizi[]={10,20,30,40,50};
  printf("total :%d",addArray(dizi,5));
    */
   /* test(10);// fonksiyon çağrısı
    int total= addNumbers(10,20,30);
    int lastTotal= addNumbers(total,total,total);
    printf( " lastTotal: %d",lastTotal);
*/

   /* int i=10;
    short int si =20;
    long int li=30;
    double d=3.1415;
    float f=2.12;*/
   // char c='A';
    // Format belirleyiciler
   /* printf("%d\n",i);
    printf("%.2f\n",d);
    printf("%d %d %d %f %f %c",i,si,li,d,f,c);
    */ 
    // printf( "%d byte",sizeof(char));
   /*  printf("%d\n",10+4);
    printf("%d\n",10-4);
    printf("%d\n",10*4);
    printf("%f\n",10.0/4);
    printf("%d\n",10%4);
    */
    // char -> short -> int -> float -> double  
    // printf("%d", (int)4.2);
    /*int a=10;
    int b=20;
    int c=30;
    a=(b+c+10);
     */
    
   /* int a;
    scanf("%d", &a);
    printf("%d",a);

    getchar();
    */  
   // karşılaştırma operatörleri
 /*  printf("%d", 3<4);
   printf("%d", 3>4);
   printf("%d", 3==4);
   printf("%d", 3!=4);
   printf("%d", 3>=4);
   printf("%d", 3<=4);*/
   
   // mantıksal bağlaçlar
   /*printf("%d", (3<4)&&(4==4));
   printf("%d", (3<4)||(5==4));
   printf("%d", ! (3<4));*/
   // koşullu durumlar
   // if else

/*int process =1;
if(process==1){
    printf("process 1");

}
else if(process ==2){
    printf("process 2");
}
else{
    printf("Invalid");
}*/

// switch case

/*int process =1;
switch (process)
{
 case 1:
    printf("process 1");
    break;
case 2:
    printf("process 2");
    break;
default:
    printf("Invalid");
}*/

// Döngüler
// while
/*
int i =0;
while (i<=10){
    printf("i : %d\n", i);
    i+=2;
}
*/
// for döngüsü
/*for (int i = 0; i <10 ; i++)
{
    printf("i : %d \n", i);
}*/
// break ve continue
 /*int i =0;
 while(i<10){
     
     if(i==2 || i==5){
         i++;
         continue;
       
     }
     printf("i: %d\n", i);
      i++;
 } */

// array

/*int dizi []= {1,2,3,4};

 for (int i = 0; i <4; i++)
 {
     printf(" eleman : %d\n", dizi[i]);
 }*/
 
/*int dizi[4];

for (int i = 0; i < 4; i++)
{
    printf("array icin yeni deger");
    scanf("%d", &dizi[i]);
}
for (int i = 0; i <4; i++)
 {
     printf(" eleman : %d\n", dizi[i]);
 }
*/
/*
int dizi[5];
int sonuc=0;

for (int i = 0; i <5; i++)
{
    printf("toplamak istediginiz degerleri girin :");
    scanf("%d", &dizi[i]);
}
for (int i = 0; i <5; i++)
{
    sonuc+=dizi[i];
}
   printf("toplam: %d",sonuc);

*/
// karakter dizileri

 /*char name[]="Ali";
 printf("%c\n",name[0]);
 printf("%s\n",name);
 printf("%d\n ", strlen(name));
*/




   getchar();
   getchar(); 
    return 0;
}