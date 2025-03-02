#include<iostream>
using namespace std;
unsigned long amount=10000,deposite,withdraw;
int choice,pin,k;
char transaction='y';
int main()
{
	while(pin!=1234)
	{
		cout<<"Enter your four digit pin :\t";
		//printf("Enter your secret pin number :\t");
		cin>>pin;
		//scanf("%d",&pin);
		if(pin!=1234)
		cout<<"Please Enter Valid Password\n";
		//printf("Please Enter valid password\n");
	}
	do
	{
		cout<<"\n***********WELCOME TO SBI ATM**************\n";
		//printf("\n***************WELCOME TO ATM SERVICE****************\n");
		//printf("\t1.Check Balance\n");
		cout<<"\t1.Check Balance \n";
	//	printf("\t2.Withdraw cash\n");
     	cout<<"\t2.Withdraw Cash \n";
	//	printf("\t3.Deposite cash\n");
	    cout<<"\t3.Deposite Cash \n";
	//	printf("\t4.Exit\n");
        cout<<"\t4.Exit \n";
	//	printf("\n******************************************************\n\n");
	    cout<<"\n****************************************************\n\n";
	//	printf("Enter your choice :");
	    cout<<"Enter your choice :";
		//scanf("%d",&choice);
		cin>>choice;
		switch(choice)
		{
			case 1:cout<<"\n Your Balance is ="<<amount;                 
			//printf("\n Your Balance is =%lu",amount);
			  break;
			case 2:cout<<"Enter the amount to withdraw :";
			//printf("\nEnter the amount to Withdraw :");
			       cin>>withdraw;
			      // scanf("%lu",&withdraw);
			       if(withdraw%100!=0)
			       {
			       	   cout<<"\nPlease Enter The Amount in Multiples of 100";
			       //	printf("\n Please Enter the amount in multiples of 100");
				   }
				   else if(withdraw>(amount-500))
				   {
				   	cout<<"\nInsufficent Balance ";
				   	//printf("\n INSUFFICENT BALANCE");
				   }
				   else
				   {
				   	amount=amount-withdraw;
				   	printf("\n\n please collect your cash.");
				   	printf("\nyour current balance is =%lu",amount);
				   }
				   break;
				   case 3:printf("\n Enter the amount to deposite=");
				   scanf("%lu",&deposite);
				   amount=amount+deposite;
				   printf("Your Balance is =%lu",amount);
				   break;
				   case 4:printf("\nThanks you using ATM");
				   break;
				   default:
				   	printf("\nINVALID CHOICE");
		}
		printf("\n\nDo You Wish To Have Another Service?(y/n):\n");
		fflush(stdin);
		scanf("%c",&transaction);
		if(transaction=='n'||transaction=='N')
		k=1;
	}
	while(!k);
	printf("\n\nThanks for using our ATM Service.");
return 0;
}


