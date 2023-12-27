#include<stdio.h>
#include<conio.h>
int main()
{
	int balance=90000;
	int amount;
	int account;
	int wid;
	int transfer;
	int pin;
	int opt;
	
	printf("welcom to sindh bank :");
	printf("enter your pin :");
	scanf("%d",&pin);
	
	if (pin==1234)
	{
		printf("sucessfully login:");
		printf("choose option :\n press 1 for checking balance:\n press 2 for transfer money:\n press 3 for wid press:\n press 4 for mini statement:\n");
		scanf("%d",&opt);
		
		switch (opt)
		{
			case 1:
				printf("your current balance is =%d\n ",balance);
				break;
			case 2:
				printf("please select benifishry amount:\n");
				scanf("%d",&amount);
				printf("please select benifishry account:\n");
				scanf("%d",&account);
				transfer=account;
				transfer=balance-amount;
				printf("your current balance is :%d\n",transfer);
			    break;
				
			case 3:
			printf("enter amount:\n");
			scanf("%d",&wid);
			balance=balance-wid;
			
			printf("sucessfully wid :\n ,now your current balance is :%d\n",balance);
			break;
			
			case 4:
			printf("sucessfully transfer:\n");
			printf("your mini statement is depatch to your branch:\n");
			printf("thanks for choosing sindh bank:\n");
			break;     
			
			default:
				printf("sorry wrong input:\n");
				
		}
		}	
	else
	{
		printf("sorry wrong password:\n");
		
	}
	getch();
}

