#include <stdio.h>

struct person {
  int age;
  char *name;
}flavio;


typedef struct {
  int age;
  char a;
  char *name;
} PERSON;


int main(){

    person a;
    a.age = 23;
    char name[5] = "wang";
    a.name = name;


    PERSON b ={12,'B',name};
    printf("%s\n",b.name);

}