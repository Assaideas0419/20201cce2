#include <stdio.h>
#include <string.h>
char strA[]="ABD";
char strB[]="ABCD";
int main()
{
    int c=strcmp("X","A");
    printf("X-A�o�� %d\n",c);
    c=strcmp(strA,strB);
    printf("%s %s �o�� %d\n",strA,strB,c);
}
