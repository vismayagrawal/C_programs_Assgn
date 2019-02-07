#include <stdio.h>
#include <conio.h>
void main()
{
    clrscr();
    int n,i,p,j,x;
    char c,y;
    do
    {
     printf("\n\nenter any no and no of times its power to be printed\n");
     scanf(" %d%d",&x,&n);
     for(i=1;i<=n;i++)
	{
	 p=1;
	 for(j=1;j<=i;j++)
	   {
	     p=p*x;

	   }
	 printf("\t%d to the power %d is equal to %d\n",x,i,p);
	}
	 printf("press Y to continue\n");
	 scanf(" %c",&c);
	}
	while(c=='y');
     getch();
}