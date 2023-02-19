#include <stdio.h>

int doSomething(int value = 2) {
    printf("%u\n", value);
    return value+1;
}

int main(){

    int age = 37;
    printf("%p\n", &age); /* 0x7ffeef7dcb9c */

    int *address = &age;
    printf("%u\n",*address);

    int prices[3] = { 5, 4, 3 };
    printf("%u\n", *prices); /* 5 */
    printf("%u\n",*(prices + 1)); /* 4 */

    int a = doSomething(1);
    printf("%d\n",a);
    doSomething(a);

    doSomething();

//  类型定义
    typedef int NUMBER;
    NUMBER a1 = 1;
    printf("%d\n",a1);







}

