#include <stdio.h>
#include <string.h>

#define SIZE 5

int main()
{

    int p[SIZE];
    for (size_t i = 0; i < 5; i++)
    {
        p[i] = i;
    }
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d\n",p[i]);/* code */
    }
    printf("%d\n",p[0]);

    char name[7] = "Flavio";
    printf("%s", name);

    return 0;

}