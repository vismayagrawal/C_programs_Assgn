#include <stdio.h>
#include <conio.h>
void main()
{
    clrscr();
    int n,i,p,j;
    char c,y;
    do
    {
     printf("\n\nenter any no\n");
     scanf(" %d",&n);
     for(i=1;i<=n;i++)
	{
	 p=1;
	 for(j=1;j<=i;j++)
	   {
	     p=p*i;

	   }
	 printf("\t%d to the power %d is equal to %d\n",i,i,p);
	}
	 printf("press Y to continue\n");
	 scanf(" %c",&c);
	}
	while(c=='y');
     getch();
}