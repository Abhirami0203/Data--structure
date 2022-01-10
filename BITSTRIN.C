#include<stdio.h>
void input();
void display();
void Union();
void intersection();
void difference();
int a[]={0,0,0,0,0,0,0,0,0};
int b[]={0,0,0,0,0,0,0,0,0};
int c[]={0,0,0,0,0,0,0,0,0};
void main()
{
int ch;
clrscr();
printf("***SET OPERATIONS***\n");
  do
    {
    printf("\n\n1.Input\n2.union\n3.intersection\n4.difference\n5.exit\n");
    printf("\nEnter choice:");
    scanf("%d",&ch);
    switch(ch)
	{
	case 1:input();
	       break;
	case 2:Union();
	       break;
      case 3:intersection();
	       break;
	case 4:difference();
	       break;
	case 5:exit(0);
	default:printf("\n***Invalid choice***\n");
	}
	}
	while(ch!=5);
	}
void input()
	{
	   int n1,n2,x,i;
	   printf("\nEnter size of set1:");
	   scanf("%d",&n1);
	   printf("\nEnter elements:");
	   for(i=1;i<=n1;i++)
	   {
	     scanf("%d",&x);
	     a[x]=1;
	   }
	   printf("\nEnterb size of set2:");
	   scanf("%d",&n2);
	   printf("Enter elements:");
	   for(i=1;i<=n2;i++)
	     {
	      scanf("%d",&x);
	      b[x]=1;
	     }
	  printf("\nSET1 is:{");
	    for(i=1;i<=9;i++)
	    {
	    printf("%d",a[i]);
	    }
	    printf("}");
	    printf("\nSET2 is:{");
	    for(i=1;i<=9;i++)
	    {
	    printf("%d",b[i]);
	    }
	    printf("}");
	  }
void display()
	{
	  int i;
	  printf("\n\t\t{");
	  for(i=1;i<=9;i++)
	  {
	  if(c[i]!=0)
	  printf("%d",i);
	  }
	  printf("}");
	}
void Union()
     {
	int c[10],i;
	for(i=1;i<=9;i++)
	{
		if(a[i]!=b[i])
		   c[i]=1;
	else
	    c[i]=a[i];
	}
	printf("\nSET is...{");
	for(i=1;i<=9;i++)
	 {
	 printf("%d",c[i]);
	 }
	 printf("}");
	 display(c);
     }
     void intersection()
     {
     int c[10],i;
     for(i=1;i<=9;i++)
       {
	 if(a[i]==b[i])
	  c[i]=a[i];
	 else
	   c[i]=0;
	}
	printf("\nSet is...{");
	for(i=1;i<=9;i++)
	{
	 printf("%d",c[i]);
	}
	printf("}");
	display(c);
       }

     void difference()
       {
	 int c[10],i;
	 for(i=1;i<=9;i++)
	  {
	  if(a[i]==1&&b[i]==0)
	     c[i]=1;
	  else
	  c[i]=0;
	  }
	  printf("\nSET is...{");
	  for(i=1;i<=9;i++)
	   {
	   printf("%d",c[i]);
	   }
	   printf("}");
	   display(c);
	 }

