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
       for(i=2;i<=n;i++)
	{
	 printf("\n\n");
	 for(j=1;j<=10;j++)
	   {
	     p=i*j;
	     printf("\t%d*%d=%d\n",i,j,p);
	   }
	}
	 printf("press Y to continue\n");
	 scanf(" %c",&c);
	}
	while(c=='y');
     getch();
}