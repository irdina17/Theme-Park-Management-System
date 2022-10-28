//Theme Park Management System

#include<stdio.h> //header files
#include <stdlib.h>
#include<math.h> 
#include<string.h>
#define price 15 //define constant

float cc (int);
float ac (int);	//function declarations for ticket booking
float sc (int);
float cn (int);
float an (int);
float sn (int);
int s[1050]={};	
char name[1050];
char no[20];
void categories();
void foods();
void beverages();
void set();
void dessert();		//function declarations for sets and meals
void to();
void foods_b();
void beverages_b();
void set_b();
void dessert_b();
void cover();
void checkout();
void edit();

float tot,pay,pri,total; //tot= pay= ride ticket pri= total=
char alp;	//variable declaration
int i,j,num,bil,ticket;	
float prog1(int num);
float prog2(int num);	
float prog3(int num);		//function declaration for options
void prog4(int num);	

int main()
{
	do{
		for (i=0; i<=1;i++)                                       
    {
        printf("=",i);
    	for (j=0;j<25;j++)
    	{
    		printf("=",j);
		}
	}
	printf("\n\t\tWELCOME TO LUNA PARK \t\n");			//main menu
	for (i=0; i<=1;i++)                                       
    {
        printf("=",i);
    	for (j=0;j<25;j++)
    	{
    		printf("=",j);
		}
	}
	
	printf("\n1. RIDE TICKETS\n");
	printf("\n2. MEALS AND SET\n");
	printf("\n3. EVENTS\n");
	printf("\n4. RIDE RESTRICTIONS\n ");
	printf("\n5. CHECKOUT\n");
	
	for (i=0; i<=1;i++)                                       
    {
        printf("-",i);
    	for (j=0;j<25;j++)
    	{
    		printf("-",j);
		}
	}
	
	printf("\n PLEASE ENTER YOUR OPTION:");
	scanf("%d",&num);
	system("cls");

	switch(num)
	{

		case 1:
			prog1(num);
			cover();
			continue;

		case 2:	
			prog2(num);
			cover();
			continue;
			
		case 3:
			prog3(num);
			cover();
			continue;
	
		case 4:
			prog4(num);
			cover();
			break;
		
		case 5:
			checkout();
			break;
			
		default:
		printf("\nERROR.PLEASE TRY AGAIN.\n");	
			break;
			
	}} while ( alp=='a'||alp=='A');

if (num==1 || num==2 || num==3 )
{	checkout();	
	printf("\nTHANK YOU!ENJOY YOUR DAY!\n");
}

return 0;
}

void checkout()		//checkout with receipt
{
	
	pri = pay + tot + total ;
	//printf( "Total payment is %3.2f\n",pri);
	if(pri==0)
		printf("Please Insert any option first\n");
	else
	{
	printf("\n\n");
    printf("\t-----------------------LUNA THEME PARK----------------------\n");
    printf("\t\t\t\tOFFICIAL RECEIPT\t\t\t\n");
    printf("\t============================================================\n");
    if(pay==0)
    	printf("\t Ride Ticket\t: -\n");
    else
		printf("\t Ride Ticket\t: RM%3.2f\n",pay);
    if(tot==0)
    	printf("\t Meals\t\t: -\n");
    else
		printf("\t Meals\t\t: RM%3.2f\n",tot);
    if(total==0)
		printf("\t Events\t\t: -\n");
	else
		printf("\t Events\t\t: RM%3.2f\n",total);
	
    	
	printf("\t Total Payment\t: RM%3.2f\n",pri);
    printf("\t============================================================\n\n");
	printf("Please make your payment to LUNA THEMEPARK OFFICIAL (12345678) MAYBANK\n ");
}
}

void cover()
{
		for (i=0; i<=1;i++)                                       
        {
            printf("-",i);
    	    for (j=0;j<32;j++)
    	    {
    		    printf("-",j);
		    }
	    }
	printf("\na. Main Menu");
	printf("\nb. Proceed to Checkout\n");
	scanf( " %c", &alp);
	system("cls");
	
}

float prog1 (int)	//ticket booking 
{	
	printf("\nPlease enter your full name: ");
	scanf(" %[^\n]", &name);
	printf("\nPlease enter your phone number: ");
	scanf(" %[^\n]", &no);

		for (i=0; i<=1;i++)                                       
    {
        printf("=",i);
    	for (j=0;j<28;j++)
    	{
    		printf("=",j);
		}
	}
		printf("\n\t\tTheme Park Ride Ticketing   \t\n");
		
	for (i=0; i<=1;i++)                                       
    {
        printf("=",i);
    	for (j=0;j<28;j++)
    	{
    		printf("=",j);
		}
	}	
	printf("\n1- Children Citizen (4-12 years old):\t\t RM30\n");
	printf("\n2- Adult Citizen (13-59 years old):\t\t RM50\n");
	printf("\n3- Senior Citizen (60 years old and above):\t RM30\n");
	printf("\n4- Children Non-Citizen (4-12 years old):\t RM50\n ");
	printf("\n5- Adult Non-Citizen (13-59 years old):\t\t RM70\n ");
	printf("\n6- Senior Non-Citizen (60 years old and above):\t RM50\n ");
	
	
	for (i=0; i<=1;i++)                                       
    {
        printf("-",i);
    	for (j=0;j<28;j++)
    	{
    		printf("-",j);
		}
	}

	printf("\nHow much ticket do you want to purchase?:");
	scanf("%d", &bil);
	
	if (bil!=0)
	{
	printf("\nPlease enter your choice:");
	scanf("%d",&ticket);
	system("cls");
	
	
		for (i=0; i<=1;i++)                                       
    {
        printf("=",i);
    	for (j=0;j<28;j++)
    	{
    		printf("=",j);
		}
	}
		printf("\n\t\tLUNA PARK RIDE TICKETING  \t\n");
		
	for (i=0; i<=1;i++)                                       
    {
        printf("=",i);
    	for (j=0;j<28;j++)
    	{
    		printf("=",j);
		}
	}
	printf("\nName : %s\n",name);
	printf("\nContact Number : %s\n",no);

	switch(ticket)
	{
		case 1:
			cc(ticket);
			printf("\nTotal price is RM%3.2f\n",pay);
			break;
			
		case 2:
			ac(ticket);
			printf("\nTotal price is RM%3.2f\n",pay);
			break;	
		case 3:	
			sc(ticket);
			printf("\nTotal price is RM%3.2f\n",pay);
			break;
		case 4:
			cn(ticket);
			printf("\nTotal price is RM%3.2f\n",pay);
			break;
		case 5:	
			an(ticket);
			printf("\nTotal price is RM%3.2f\n",pay);
			break;
		case 6:
			sn(ticket);
			printf("\nTotal price is RM%3.2f\n",pay);
			break;	
			
		default:
		printf("\nChoice not available.\n");
		break;
	}}
	
	else 
		printf("Error.\n");
		
	return pay;

}

float cc (int)
{	pay = 30 * bil;
	return pay;
}

float ac (int )
{	pay = 50 * bil ;
	return pay;
}

float sc (int )
{	pay = 30 * bil;
	return pay;
}

float cn (int)
{	pay = 50 * bil;
	return pay;
}

float an (int)
{	pay = 70 * bil;
	return pay;
}

float sn (int )
{	pay = 50 * bil;
	return pay;
}

float prog2 (int)	//meals and sets

{

	char round,pause[100];
	categories();

	while(alp!='z' && alp!='Z')
	{
		system("cls");

	    if(alp=='t' || alp=='T' )
			categories();
		else if(alp=='u' || alp=='U')
			foods();
		else if(alp=='v' || alp=='V')
			beverages();
		else if(alp=='w' || alp=='W')
		    set();
		else if(alp=='x' || alp=='X')
			dessert();
		else
			{
				to();
				printf("Please Re-Enter Option >>");
				scanf(" %c",&alp);
			}	

	}
    for (i=0; i<=1;i++)                                       
    {
        printf("-",i);
    	for (j=0;j<25;j++)
    	{
    		printf("-",j);
		}
	}
	printf("\n\nTotal = RM %3.2f\n",tot);
	printf("Thank You and Have A Good Day.\n");
	return tot;

}

void categories() 

{
	char menu;

	printf("\t WELCOME TO HUNGRY BUNCH \t\n");
	for (i=0; i<=1;i++)                                       
    {
        printf("-",i);
    	for (j=0;j<25;j++)
    	{
    		printf("-",j);
		}
	}
	printf("\n\t    LIST OF MENU    \t\n");
	for (i=0; i<=1;i++)                                       
    {
        printf("-",i);
    	for (j=0;j<25;j++)
    	{
    		printf("-",j);
		}
	}
	printf("\nA.FOODS\n");
	printf("\nB.BEVERAGES\n");
	printf("\nC.SET\n");
	printf("\nD.DESSERT\n ");
	for (i=0; i<=1;i++)                                       
    {
        printf("-",i);
    	for (j=0;j<25;j++)
    	{
    		printf("-",j);
		}
	}
	printf("\nPlease choose menu:");
	scanf(" %c", &menu);

	switch(menu)
	{
		case 'a':
		case 'A':
			foods();
			break;

		case 'b':
		case 'B':	
			beverages();
			break;

		case 'c':
		case 'C':
			set();
			break;

		case 'd':
		case 'D':
			dessert();
			break;

		default:
			printf("\nInvalid Order.\n");
			break;
	}

}

void foods() 

{
	char fo;
	foods_b();
	const int a=5.00,b=7.00,c=6.00,d=9.00,e=5.00;
	int amt;

	do
	{

		system("cls");
		foods_b();
		scanf(" %c", &fo);

		if (fo=='a'||fo=='A'||fo=='b'||fo=='B'||fo=='c'||fo=='C'||fo=='d'||fo=='D'||fo=='e'||fo=='E')
		{
			printf("Enter amount:");
			scanf("%d", &amt);
		}
		if (amt>0)
		{
			switch(fo)

			{
				case 'a':
				case 'A':
					tot=tot+(a*amt);
					break;

				case 'b':
				case 'B':
					tot=tot+(b*amt);
					break;

				case 'c':
				case 'C':	
					tot=tot+(c*amt);
					break;

				case 'd':
				case 'D':	
					tot=tot+(d*amt);
					break;
                
                case 'e':
				case 'E':	
					tot=tot+(e*amt);
					break;
					
				default:
					printf("\nInvalid Order.");
					break;
			}

		}

		else
			printf("\nInvalid Order.\n");

		to();
		scanf(" %c",&alp);	

	}while(alp=='y'||alp=='Y');

}

void beverages() 

{
	char bev;
	beverages_b();
	const int a=5.00,b=7.00,c=6.00,d=9.00,e=5.00;
	int amt;

	do
	{
		system("cls");
		beverages_b();
		scanf(" %c", &bev);

		if(bev=='a'||bev=='A'||bev=='b'||bev=='B'||bev=='c'||bev=='C'||bev=='d'||bev=='D'||bev=='e'||bev=='E')
		{
			printf("Enter amount:");
			scanf("%d", &amt);
		}

		if(amt>0)

		{

			switch(bev)

			{

				case 'a':
				case 'A':
					tot=tot+a*amt;
					break;
					
				case 'b':
				case 'B':	
					tot=tot+b*amt;
					break;
					
				case 'c':
				case 'C':
					tot=tot+c*amt;
					break;
					
				case 'd':
				case 'D':
					tot=tot+d*amt;
					break;
				
				case 'e':
				case 'E':
					tot=tot+e*amt;
					break;
					
				default:
					printf("\nInvalid Order.\n");
					break;

			}

		}

		else
			printf("\nInvalid Order.");

		to();
		scanf(" %c",&alp);

	}while(alp =='y' || alp =='Y');

}

void set()

{
	char st;
	set_b();
	const int a=15.00,b=17.00,c=16.00;
	int amt;

	do

	{
		system("cls");
		set_b();
		scanf(" %c", &st);
		
		if(st=='a'||st=='A'||st=='b'||st=='B'||st=='c'||st=='C')
		{
			printf("Enter amount:");
			scanf("%d", &amt);
		}

		if (amt>0)
		{
			switch(st)
			{
				case 'a':
				case 'A':
					tot=tot+a*amt;
					break;

				case 'b':
				case 'B':	
					tot=tot+b*amt;
					break;

				case 'c':
				case 'C':		
					tot=tot+c*amt;
					break;

				default:
					printf("\nInvalid Order.");
					break;
			}

		}
		else
			printf("\nInvalid Order.\n");

		to();
		scanf(" %c",&alp);

	}while(alp=='y'||alp=='Y');

}

void dessert() 

{

	char des;
	dessert_b();
	const int a=5.00,b=7.00,c=6.00,d=9.00,e=5.00;
	int amt;

	do

	{
		system("cls");
		dessert_b();
		scanf(" %c", &des);

		if(des=='a'||des=='A'||des=='b'||des=='B'||des=='c'||des=='C'||des=='d'||des=='D'||des=='e'||des=='E')
		{
			printf("Enter amount:");
			scanf("%d",&amt);
		}

		if (amt>0)
		{
			switch(des)

			{
				case 'a':
				case 'A':	
					tot=tot+a*amt;
					break;

				case 'b':
				case 'B':	
					tot=tot+b*amt;
					break;

				case 'c':
				case 'C':	
					tot=tot+c*amt;
					break;

				case 'd':
				case 'D':
					tot=tot+d*amt;
					break;
				
				case 'e':
				case 'E':
					tot=tot+e*amt;
					break;
					
				default:
					printf("\nInvalid Order.\n");
					break;
			}

		}
		else
			printf("\nInvalid Order.\n");

		to();
		scanf(" %c",&alp);	

	}while(alp == 'y'||alp=='Y');

}

void to() 

{
	printf("\nTotal = RM %3.2f\n",tot);
	for (i=0; i<=1;i++)                                       
        {
            printf("-",i);
    	    for (j=0;j<30;j++)
    	    {
    		    printf("-",j);
		    }
	    }
	printf("\nt. To list of menu\n");
	printf("u. To foods\n");
	printf("v. To beverages\n");
	printf("w. To set\n");
	printf("x. To desserts\n");
	printf("y. Buy more? \n");
	printf("z. Finish\n");
	
}

void foods_b()
{
    printf("|\t\tFOOD\t\t|\t\tPRICE\t\t |\n");
    for (i=0; i<=1;i++)                                       
    {
        printf("-",i);
    	for (j=0;j<32;j++)
    	{
    		printf("-",j);
		}
	}
	printf("\n|\tA.Corndog\t\t|\t\tRM 5.00\t\t |\n");
	printf("\n|\tB.Sticky Chickens \t|\t\tRM 7.00\t\t |\n");
	printf("\n|\tC.Chicken Nuggets \t|\t\tRM 6.00\t\t |\n");
	printf("\n|\tD.Cream Spaghetti \t|\t\tRM 9.00\t\t |\n");
	printf("\n|\tE.Mac and Cheese  \t|\t\tRM 5.00\t\t |\n");
	for (i=0; i<=1;i++)                                       
    {
        printf("-",i);
    	for (j=0;j<32;j++)
    	{
    	    printf("-",j);
		}
    }
    {
	printf("\nEnter your choice >>");
    }
}

void beverages_b()
{
	printf("|\t BEVERAGES\t\t|\t\tPRICE\t\t |\n");
    for (i=0; i<=1;i++)                                       
    {
        printf("-",i);
    	for (j=0;j<32;j++)
    	{
    		printf("-",j);
		}
	}
	printf("\n|\tA.Apple Juice     \t|\t\tRM 5.00\t\t |\n");
	printf("\n|\tB.Orange Juice    \t|\t\tRM 7.00\t\t |\n");
	printf("\n|\tC.Coke            \t|\t\tRM 6.00\t\t |\n");
	printf("\n|\tD.Mineral Water   \t|\t\tRM 9.00\t\t |\n");
	printf("\n|\tE.Milkshakes      \t|\t\tRM 5.00\t\t |\n");
	for (i=0; i<=1;i++)                                       
    {
        printf("-",i);
    	for (j=0;j<32;j++)
    	{
    		printf("-",j);
		}
	}
	{
	printf("\nEnter your choice >>");	
	}
}

void set_b()
{
    printf("|\t\tSET\t\t|\t\tPRICE\t\t |\n");
    for (i=0; i<=1;i++)                                       
    {
        printf("-",i);
    	for (j=0;j<32;j++)
    	    {
    		    printf("-",j);
		    }
	}
	printf("\n|\tA.Western Set\t\t|\t\tRM 15.00\t |\n");
	printf("\n|\tB.Malayan Set\t\t|\t\tRM 17.00\t |\n");
	printf("\n|\tC.Seafood Set\t\t|\t\tRM 16.00\t |\n");
	for (i=0; i<=1;i++)                                       
    {
        printf("-",i); 
    	for (j=0;j<32;j++)
    	{
    		printf("-",j);
		}
	}
	{
	printf("\nEnter your choice >>");
	}
}

void dessert_b()

{
    printf("|\t DESSERTS\t\t|\t\tPRICE\t\t |\n");
    for (i=0; i<=1;i++)                                       
    {
        printf("-",i);
    	for (j=0;j<32;j++)
    	    {
    		    printf("-",j);
		    }
	}
	printf("\n|\tA.Deep Fries Oreos\t|\t\tRM 5.00\t\t |\n");
	printf("\n|\tB.Candy Apples    \t|\t\tRM 4.50\t\t |\n");
	printf("\n|\tC.Cotton Candy    \t|\t\tRM 3.00\t\t |\n");
	printf("\n|\tD.Ice Cream       \t|\t\tRM 2.00\t\t |\n");
	printf("\n|\tE.Cheese Cake     \t|\t\tRM 5.00\t\t |\n");
	for (i=0; i<=1;i++)                                       
    {
        printf("-",i);
    	for (j=0;j<32;j++)
    	{
    		printf("-",j);
		}
	}
	{
	printf("\nEnter your choice >>");
	}
}

float prog3(int)	//event reservation
{
	
	int l,i,j,p,T,show;
	char day[]={'mon','tue','wed','thu','fri','sat','sun'};
	
	printf("\nENTER YOUR NAME:\n");
	scanf(" %[^\n]", &name);
	
	printf("\t\t\t\tSHOWS RESERVATION\n");
	{
		for(l=0;l<=77;l++) 
		printf("+");
	}
	printf("\n1.WILDLIFE ANIMAL SHOWS\t\t2.WORLD OF COLOR\t3.4D MOVIE THEATRE\n");
	printf("\t(EVERYDAY)\t\t   (WEEKENDS)\t\t(EVERYDAY)\n");
	printf("\n                                \t\t\tMONDAY&WEDNESDAY\n\t\t\t\t\t\t\t-ICEPLORATION\n");
    printf("                                   \t\t\tTUESDAY&THURSDAY\n\t\t\t\t\t\t\t-MICKEY&THE MAGICAL MAP\n");
	printf("                                    \t\t\tFRIDAY&SUNDAY\n\t\t\t\t\t\t\t-ALADDIN\n");
	printf("                                     \t\t\tSATURDAY\n\t\t\t\t\t\t\t-SPECIAL EFFECTSTAGE\n");
	{
		for(l=0;l<=77;l++) 
		printf("+");
	}
	
	printf("\n\nPick A day[MON/TUE/WED/THU/FRI/SUN/SAT]:\n");
	scanf("%s", &day);
	
	printf("\nThe Amount Ticket to purchase:\n");
	scanf(" %d", &T);
	
    printf("\nPlease choose which show(1/2/3) that you want to watch :\n");
	scanf(" %d", &show);
	
	
	for (j=1; j<=T; j++)
	{
		
	switch(show)
		{
		case 1:
			
			                                      
    printf("\n--------------------------------------------------------------\n");
	printf("|\t\t\t     STAGE\t\t\t     |\n");
	printf("--------------------------------------------------------------\n");
	printf("\n01-02-03-04-05\t06-07-08-09-10\t11-12-13-14-15\t16-17-18-19-20\n");
	printf("21-22-23-24-25\t26-27-28-29-30\t31-32-33-34-35\t36-37-38-39-40\n");
	printf("41-42-43-44-45\t\t\t\t\t46-47-48-49-50\n");
			do
			{
                printf("\nPick a seat:\n");
                scanf("%i",&p);
                s[j]=p;
              
			    for (i=0; i<j; i++)
			    {
                    if (s[j]==s[i])
                    {
                        printf("\nSeat taken.\n\n");
                        break;
                    }
			    }
            }
            while (i!=j);
			
            
                if(s[j] <= 50)
                {
                printf("\n\n");
                printf("\t---------------------SHOWS BOOKING TICKET-------------------\n");
                printf("\t============================================================\n");
                printf("\t Show Name : Wild Life Animal Show\n");
                printf("\t Cust Name : %s\n",name);
                printf("\t                                          DAY   : %s\n", day);
                printf("\t                                          Time  : 11:20am\n");
                printf("\t Hall      : Wild Life Theatre\n");
                printf("\t Seat no   : %d\n",s[j]);
                printf("\t price     : RM %d  \n\n",price);
                }
                else
                printf("\nWrong number!  No seat for you!\n\n");
                
            break;
	     
	   case 2:
	   	
		 printf("\n--------------------------------------------------------------\n");
	printf("|\t\t\t     STAGE\t\t\t     |\n");
	printf("--------------------------------------------------------------\n");
	printf("\n01-02-03-04-05\t06-07-08-09-10\t11-12-13-14-15\t16-17-18-19-20\n");
	printf("21-22-23-24-25\t26-27-28-29-30\t31-32-33-34-35\t36-37-38-39-40\n");
	printf("41-42-43-44-45\t\t\t\t\t46-47-48-49-50\n");
			do
			{
                printf("\nPick a seat:\n");
                scanf("%i",&p);
                s[j]=p;
			    for (i=0; i<j; i++)
			    {
                    if (s[j]==s[i])
                    {
                        printf("\n\nSeat taken.\n\n");
                        break;
                    }
			    }
            }
            
            while (i!=j);
                if(s[j] <= 50)
                {
                printf("\n\n");
                printf("\t---------------------SHOWS BOOKING TICKET-------------------\n");
                printf("\t============================================================\n");
                printf("\t Show Name : World Of Color\n");
                printf("\t Cust Name : %s\n",name);
                printf("\t                                          DAY   : %s\n", day);
                printf("\t                                         Time   : 9:00pm\n");
                printf("\t Hall      : Main Stage\n");
                printf("\t Seat no   : %d\n",s[j]);
                printf("\t price     : RM %d  \n\n",price);
                }
                else
                printf("\nWrong number!  No seat for you!\n\n");
                
            break;
            
       case 3:
       	
	 printf("\n--------------------------------------------------------------\n");
	printf("|\t\t\t     STAGE\t\t\t     |\n");
	printf("--------------------------------------------------------------\n");
	printf("\n01-02-03-04-05\t06-07-08-09-10\t11-12-13-14-15\t16-17-18-19-20\n");
	printf("21-22-23-24-25\t26-27-28-29-30\t31-32-33-34-35\t36-37-38-39-40\n");
	printf("41-42-43-44-45\t\t\t\t\t46-47-48-49-50\n");
		
			do
			{
                printf("\nPick a seat:\n");
                scanf(" %d", &p);
                s[j]=p;
			    for (i=0; i<j; i++)
			    {
                    if (s[j]==s[i])
                    {
                        printf("\n\nSeat taken.\n\n");
                        break;
                    }
			    }
            }
            while (i!=j);
            
                if(s[j] <=50)
                {
                printf("\n\n");
                printf("\t---------------------SHOWS BOOKING TICKET-------------------\n");
                printf("\t============================================================\n");
                printf("\t Show Name : 4D Movie\n");
                printf("\t Cust Name : %s\n",name);
                printf("\t                                          DAY   : %s\n", day);
                printf("\t                                          Time  : 2:30pm\n");
                printf("\t Hall      : 4D Hall\n");
                printf("\t Seat no   : %d\n",s[j]);
                printf("\t price     : RM %d  \n\n",price);
                }
                else
                printf("\nWrong number!  No seat for you!\n\n");
            
            break;  
	
	
	     default:
	     		printf("\nInvalid input\n");
     }}


    total=T*price;
	printf("\n\nTotal = RM %3.2f\n",total);
	printf("Thank You!\n");
	return total;
}


void prog4(int) {	//ride restrictions 


int height;	
void func1(int height);
void func2(int height);
void func3(int height);
void func4(int height);
	
do

{
printf("Enter your height in cm\n"); 
scanf ("%d",&height); 

system("cls");

if (height > 0)
	
{
	for (i=0; i<=1;i++)	//loop to print stars
{
	printf("*",i);				
	for (j=0; j<16; j++)
	{ 
		printf("*",j);
	}
}	
printf("\n\tRIDES AVAILABLE\n");

	for (i=0; i<=1;i++)	//loop to print stars
{
	printf("*",i);				
	for (j=0; j<16; j++)
	{ 
		printf("*",j);
	}
}	

	if (height < 100 )
{
	printf("\n -> Mirror Maze\n -> Red Baron\n -> Holodeck\n");
}
	
	else if (height >= 100 && height < 110 )
	{
		printf("\n -> Mirror Maze\n -> Red Baron\n -> Holodeck\n");
		func1(height);
		printf(" -> Happy Swing\n -> Ghost Train\n");
		
	}
	

	else if (height >= 110 && height < 120)
	{
		printf("\n -> Mirror Maze\n -> Red Baron\n -> Holodeck\n");
		func1(height);
		printf(" -> Happy Swing\n -> Ghost Train\n");
		func2(height);
		printf(" -> Moon Balloons\n -> Betty Choo Choo\n -> Carousel\n -> Roller Coaster\n -> Spider\n -> Twin Dragon\n -> Arabian Merry\n -> Coney Drop\n");
	}
	
	else if (height >= 120 && height < 130)
	{
		printf("\n -> Mirror Maze\n -> Red Baron\n -> Holodeck\n");
		func1(height);
		printf(" -> Happy Swing\n -> Ghost Train\n");
		func2(height);
		printf(" -> Moon Balloons\n -> Betty Choo Choo\n -> Carousel\n -> Roller Coaster\n -> Spider\n -> Twin Dragon\n -> Arabian Merry\n -> Coney Drop\n");
		func3(height);
		printf(" -> Speedy Beetle\n -> Road Runner\n -> Dodgems\n -> Sky Rider\n -> Pharaoh's Curse\n");	
	
	}
	
		else if (height >= 130 && height < 140)
	{
		printf("\n -> Mirror Maze\n -> Red Baron\n -> Holodeck\n");
		func1(height);
		printf(" -> Happy Swing\n -> Ghost Train\n");
		func2(height);
		printf(" -> Moon Balloons\n -> Betty Choo Choo\n -> Carousel\n -> Roller Coaster\n -> Spider\n -> Twin Dragon\n -> Arabian Merry\n -> Coney Drop\n");
		func3(height);
		printf(" -> Speedy Beetle\n -> Road Runner\n -> Dodgems\n -> Sky Rider\n -> Pharaoh's Curse\n");		
		func4(height);
		printf(" -> The Power Surge\n");
	}

	else
	{
		printf("\nAll rides available\n");
	
	}
}

	else 
	printf ("Invalid.");
	
}while ( height <= 0);
}

void func1(int height)
{
	printf("\n(Below 90 can ride with adult)\n");	
}

void func2(int height)
{
	printf("\n(Between 100-110 can ride with adult)\n");	
}

void func3(int height)
{
	printf("\n(Between 110-120 can ride with adult)\n");	
}
void func4(int height)
{
	printf("(\nBetween 120-130 can ride with adult)\n");	
}


