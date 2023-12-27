#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,ch;
	int add,sub,mul,div,mod;
	
	printf("Press 1 for Addition \nPress 2 for Subtraction \nPress 3 for Multiplication \nPress 4 for Divide \nPress 5 for Modulus");
	printf("\nEnter user choice ");
	scanf("%d", &ch);
	printf("enter the numbers");
	scanf("%d %d",&a,&b);
	if (ch==1)
{ 
add =a+b;
printf("addition:%d",add);
}
if (ch==2)
{ 
sub =a-b;
printf("subtraction:%d",sub);
}
else if (ch==3)
{ 
mul =a*b;
printf("multiplication:%d",mul);
}
else if(ch==4)
{ 
div =a/b;
printf("division:%d",div);
}
else if (ch==5)
{ 
mod =a%b;
printf("modulus:%d",mod);
}
else
{
	printf("Invalid Choice");
}
getch();
}
		
