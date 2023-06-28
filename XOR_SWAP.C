//xor swap two number best trick
#include<stdio.h>
#include<conio.h>
void main()
{
    int a=25,b=40;
    //clrscr();
    printf("\n Without swap A=%d B=%d",a,b);
    a^=b;
    b^=a;
    a^=b;
    printf("\n Swap A=%d B=%d", a,b);
getch();
}