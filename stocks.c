#include<stdio.h>




struct date

{

int date;

char month[10];

int year;

};



struct stock_details
{

char stock_name[50];

char code;

float price;

struct date exp_date;

int quantity;

};
void main()

{

struct stock_details stocks[25];

char x,i,add=0,n,rem=0,price_tot=0,sum=0;

printf("Welcome to ABC Departmental Store\n");

printf("Enter a choice:\n");

printf("A.Enter new stocks\n");

printf("B.Enter new stocks\n");

printf("C.Add today's sales details\n");

printf("D.Find remaining stocks\n");

printf("E.Balance calculation\n");

scanf("%d",&x);

switch(x)
{

case 'A' : stock_entry();
         
           break;

case 'B' : stock_view();
  
           break;

case 'C' : stock_addn();
       
           break;

case 'D' : stock_remaining();
    
           break;

case 'E' : balance_calc();
         
           break;

default  : printf("Enter a valid option");

}

int stock_entry()

{

printf("Enter the stock name, product code, price, expiry date, quantity");

for(i=0;i<=25;i++)

{
scanf("%s",stocks[i].stock_name);

scanf("%d",stocks[i].code);

scanf("%.2f",stocks[i].price);

scanf("%d/%s/%d",stocks[i].exp_date.date,stocks[i].exp_date.month,stocks[i].exp_date.year);

scanf("%d",stocks[i].quantity);

}

}



int stock_view()

{

printf("The entered stock details is");

for(i=0;i<=25;i++)

{

printf("%s",stocks[i].stock_name);

printf("%d",stocks[i].code);

printf("%.2f",stocks[i].price);

printf("%d/%s/%d",stocks[i].exp_date.date,stocks[i].exp_date.month,stocks[i].exp_date.year);

printf("%d",stocks[i].quantity);

}

}



int stock_addn()

{

for(i=0;i<=25;i++)

{

add=add+stocks[i].quantity;

price_tot=price_tot+stocks[i].price;

}

printf("Stocks added=%d \n Stocks price=%d",add,price_tot);

}



int stock_remaining()

{

printf("Enter the details of product sold today\n");

printf("Enter the number of products sold today:\n");

scanf("%d",&n);

for(i=0;i<=n;i++)

{

scanf("%d",stocks[i].quantity);

sum=sum+stocks[i].quantity;

}

printf("Amount for the stocks sold= %d\n",sum);

printf("Today's remaining stocks:");

rem=add-sum;
printf("%d",rem);

}



int balance_calc()

{

int closing_bal[25];

for(i=0;i<=25;i++)

{

closing_bal[i]=(stocks[i].quantity)*(stocks[i].price);

printf("Closing balance = %d",closing_bal[i]);

}

int opening_bal[25];

for(i=0;i<=25;i++)

{

opening_bal[i]=closing_bal[i];

printf("Opening balance = %d",opening_bal[i]);

}

}

}