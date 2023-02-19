#include <stdio.h>
 
const int MAX = 3;
int var[] = {10,20,30};
 
//数组
void test01(){
    for (int i = 0; i < MAX; i++)
    {
        printf("Value of var[%d] = %d\n", i, var[i] );
    }
}
//指针数组
void test02(){
    int *ptr[MAX];
    for (int i = 0; i < MAX; i++)
    {
        ptr[i] = &var[i];
    }
    for (int i = 0; i < MAX; i++)
    {
        printf("var[%d]的值：%d\n",i,*ptr[i]);
    }
}
//字符 指针数组
void test03(){
    const char *name[]={
        "wang",
        "li",
        "zhang",
    };
    for (int i = 0; i < 3; i++)
    {
        printf("name is:%s\n",name[i]);
    }
    
}
//指针的指针
void test04(){
    int num = 100;
    int *ptr1 = &num;
    int **ptr2 = &ptr1;

printf("num = %d\n", num );//100
printf("pt1 = %p\n", ptr1 );//num的地址
printf("*Pt1 = %d\n", *ptr1 );//100
printf("pt2 = %p\n", ptr2 );//&&num &ptr1 ptr1的地址
printf("**Pt2 = %d\n", **ptr2);//100

}
//


int main ()
{
    test01();
    test02();
    test03();
    test04();

    return 0;
}