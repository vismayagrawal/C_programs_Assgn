#include <stdio.h>
#include <conio.h>
void main()
{
    clrscr();
    int n,i,p;
    char c,y;
    do
       {
	 printf("\n\nenter any no\n");
	 scanf(" %d",&n);
	 for(i=1,p=n;i<=10;i++)
	   {
	     p=n*i;
	     printf("\t%d*%d=%d\n",n,i,p);
	   }
	 printf("press Y to continue\n");
	 scanf(" %c",&c);
	}
	while(c=='y');
     getch();
}