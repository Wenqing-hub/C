#include <stdio.h>

#define AGE 25

void my_sizeof(){
    printf("char size: %lu bytes\n", sizeof(char));
    printf("int size: %lu bytes\n", sizeof(int));
    printf("short size: %lu bytes\n", sizeof(short));
    printf("long size: %lu bytes\n", sizeof(long));
    printf("float size: %lu bytes\n", sizeof(float));
    printf("double size: %lu bytes\n", sizeof(double));
    printf("long double size: %lu bytes\n", sizeof(long double));
}

int main(){
   
    printf("hello world!\n");
    int age = 12;
    printf("%d\n",age);
    // 数据类型
    // int      两个字节
    // char     一个字节
    // short    两个字节
    // long     四个字节
    // float    
    // double
    // long double


   // unsigned 无符号整数
    unsigned char j = 255;
    j = j + 10;
    printf("%u\n", j); /* 9 */

    my_sizeof;

printf("char size: %lu bytes\n", sizeof(char));
printf("int size: %lu bytes\n", sizeof(int));
printf("short size: %lu bytes\n", sizeof(short));
printf("long size: %lu bytes\n", sizeof(long));
printf("float size: %lu bytes\n", sizeof(float));
printf("double size: %lu bytes\n", sizeof(double));
printf("long double size: %lu bytes\n", sizeof(long double));
printf(" unsigned: %lu bytes\n", sizeof( unsigned int));


    int a,b,c;
    a = 1;
    b = 5;
    c = 6;

    a>b?printf("%d",a):printf("%d",b);
//getchar();    

//sizeof


if (a>b)
{
    printf("%d",a);/* code */
}
else
{
    
    printf("error");
}



switch (a)
{
case 1:
    printf("111");
    break;

default:
    break;
}


    int s = 0;
for (int i = 0; i < 5; i++)
{
    s = s + i;
    printf("%d\n",s);
}


// while (/* condition */)
// {
//     /* code */
// }

// do
// {
//     /* code */
// } while (/* condition */);

// break;
// continue;



    return 0;
}

