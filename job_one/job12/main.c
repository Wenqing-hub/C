#include <stdio.h>
#include <stdlib.h>
 //函数指针
 //typedef int (*fun_ptr)(int,int); // 声明一个指向同样参数、返回值的函数指针类型
int max(int x, int y)
{
    return x > y ? x : y;
}

//回调函数
void populate_array(int *array, int arraySize, int (*getNextValue)(void));
// 获取随机值
int getNextRandomValue(void);

int main()
{
    int myarray[10];    //getNextRandomValue 不能加括号，否则无法编译，因为加上括号之后相当于传入此参数时传入了 int , 而不是函数指针
    populate_array(myarray, 10, getNextRandomValue);
    for(int i = 0; i < 10; i++) {
        printf("%d ", myarray[i]);
    }
    printf("\n");

    // /* p 是函数指针 */
    // int (* p)(int, int) =  &max; // &可以省略
    // int a, b, c, d;
 
    // printf("请输入三个数字:");
    // scanf("%d %d %d", & a, & b, & c);
 
    // /* 与直接调用函数等价，d = max(max(a, b), c) */
    // d = p(p(a, b), c); 
 
    // printf("最大的数字是: %d\n", d);

 
    return 0;
}

void populate_array(int *array, int arraySize, int (*getNextValue)(void))
{
    for (size_t i=0; i<arraySize; i++)
        array[i] = getNextValue();
}

int getNextRandomValue(void)
{
    return rand();
}
