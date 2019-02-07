#include <stdio.h>
#include <conio.h>
void main()
{
    clrscr();
    float n,i,p,j,x;
    char c,y;
    do
    {
     printf("\n\nenter any no and no of times its power to be printed\n");
     scanf(" %f%f",&x,&n);
     for(i=1;i<=n;i++)
	{
	 p=1;
	 for(j=1;j<=2*i;j++)
	   {
	     p=p*x;

	   }
	 printf("\t%f to the power %f is equal to %f\n",x,2*i,p);
	}
	 printf("press Y to continue\n");
	 scanf(" %c",&c);
	}
	while(c=='y');
     getch();
}