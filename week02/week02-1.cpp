#include <stdio.h>
char mirror(char c)
{
    if (c=='A')return 'A';
    if (c=='B')return ' ';
    if (c=='C')return ' ';
    if (c=='D')return ' ';
    if (c=='E')return '3';
    if (c=='F')return ' ';
    if (c=='G')return ' ';
    if (c=='H')return 'H';
    if (c=='I')return ' ';
    if (c=='J')return 'L';
    if (c=='K')return ' ';
    if (c=='L')return 'J';
    if (c=='M')return 'M';
    if (c=='N')return ' ';
    if (c=='O')return 'O';
    if (c=='P')return ' ';
    if (c=='Q')return ' ';
    if (c=='R')return ' ';
    if (c=='S')return '2';
    if (c=='T')return 'T';
    if (c=='U')return 'U';
    if (c=='V')return 'V';
    if (c=='W')return 'W';
    if (c=='X')return 'X';
    if (c=='Y')return 'Y';
    if (c=='Z')return '5';

    return ' ';
}
int main()
{
    char c;
    scanf("%c",&c);
    char ans=mirror(c);
    printf("他的鏡像字是--%c--\n",ans);
    return 0;
}
