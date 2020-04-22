#include<stdio.h>
#include<stdbool.h>
int main()
{
	int d,m,y;
	printf("Enter Day");
	scanf("%d",&d);
	printf("Enter Month");
	scanf("%d",&m);
	printf("Enter year");
	scanf("%d",&y);
	bool flag=false;
	if(y>0)
	{
		switch(m)
		{
		case 1:
	    case 3:
	    case 5:
	    case 7:
	    case 8:
		case 10:
		case 12:
		if(d>=1 && d<=31)
		flag=true;
        break;
		case 4:
		case 6:
		case 9:
		case 11:if(d>=1&&d<=30)
		        flag=true;
		    break;
		case 2:if(y%4==0 && y%100!=0 || y%400==0)
		{
			if(d>=1 && d<=29)
			flag=true;
		}
		else
		{
			if(d>=1 && d<=28)
			flag=true;
		}
		    break;
		       			
	}
	}
	if(flag)
	printf("Date is Valid");
	else
	printf("Date is Invalid");
}

