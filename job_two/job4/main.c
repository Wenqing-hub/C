#include <stdio.h>
#include <string.h>
//共用体 union

union Data
{
   unsigned int i;
   float f;
   char  str[1];
};
 
int main( )
{
   union Data data;        
 
   printf( "Memory size occupied by data : %d\n", sizeof(data));
 
   return 0;
}