#include <stdio.h>

typedef enum {
  monday,  
  tuesday,
  wednesday,
  thursday,
  friday,
  saturday,
  sunday
} WEEKDAY;

int main(){
/*
枚举类型
使用 typedef 和 enum 关键字，我们可以定义具有指定值的类型。
这是 typedef 关键字最重要的使用场景之一。
枚举定义中的每个枚举项在内部都与一个整数配对。所以在这个示例中 monday 是 0，tuesday 是 1，以此类推。
这意味着对应的条件可以是 if (day == 0) 而不是 if (day == monday)，但是对于我们人类来说，使用名字比数字更合理，所以它是一个非常便利的语法。
*/



    WEEKDAY day = monday;
    if (day == 0)
    {
        printf("True\n");/* code */
    }
    else
    {
        printf("False\n");
    }
    



}