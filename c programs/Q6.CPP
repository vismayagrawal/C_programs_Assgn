#include <stdio.h>
#include <conio.h>
void main()
{
    clrscr();
    float n,i,p,j;
    char c,y;
    do
    {
     printf("\n\nenter any no\n");
     scanf(" %f",&n);
     for(i=1;i<=n;i++)
	{
	 p=1;
	 for(j=1;j<=(2*i)-1;j++)
	   {
	     p=p*i;


	   }
	 printf("\t%f to the power %f is equal to %f\n",i,(2*i)-1,p);
	}
	 printf("press Y to continue\n");
	 scanf(" %c",&c);
	}
	while(c=='y');
     getch();
}