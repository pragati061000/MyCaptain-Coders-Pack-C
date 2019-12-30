#include<stdio.h>
void checkBalance();
void withdrawBalance();
void deposit();
int W=0,X=0,D=0;
int balance=10000;
int main()
{
	int userid,password,ch;
		printf("\n\t================================ W E L C O M E  T O  A T M ================================ ");
		printf("\n\nEnter 4-digit USER_ID : ");
		scanf("%d",&userid);
		printf("Enter 4-digit PASSWORD : ");
		scanf("%d",&password);
		if(userid==9876&&password==1234)
		    {
		    	while(ch!=4)
		    	{
			      printf("\n\n\n\nPress 1 to CHECK BALANCE: ");
			      printf("\nPress 2 to WITHDRAW BALANCE: ");
			      printf("\nPress 3 to DEPOSIT: ");
			      printf("\nPress 4 to LOGOUT: ");
			      printf("\nEnter your choice: ");
			      scanf("%d",&ch);
			      switch(ch)
				   {
					    case 1 :	checkBalance();
					   			break;
					    case 2 :	withdrawBalance();
					   			break;
					    case 3 :	deposit();
					   			break;
						case 4 :	printf("\n\t*************** E X I T I N G ***************");
					   			break;
					   default : printf("Invalid Option");
				   }
			    }
			}
			
			else
			    {
			    	printf("******* UNAUTHORISED ACCESS *******");
			    }
	return 0;
}
void deposit()
    {
     printf("Enter the amount to be deposit: ");
     scanf("%d",&D);
     balance=balance+D;
     printf("The New Balance is: %d",balance);
    }
void withdrawBalance()
    {
	    printf("Enter the amount to be withdrawn: ");
	    scanf("%d",&W);
	    
		X=balance-W;
		balance=X;

		if(W>balance)
		{
			printf("***** INSUFFICIENT BALANCE *****");
		}
	
	    else if(X<1000)
		{
			printf("***** REQUEST DECLINED *****");
		}
	    else
		{
			printf("TRANSACTION SUCCESSFUL!!");
			printf("\nRemaining balance is: %d",balance);
		}

    }
void checkBalance()
    {
     	printf("Your balance is: %d",balance);
    }

