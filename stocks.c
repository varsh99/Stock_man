#include<stdio.h>
#include<unistd.h>
struct date
{
int date;
char month[10];
int year;
};
struct stock_details
{
char stock_name[50];
int code;
float price;
struct date exp_date;
int quantity;
};
void main()
{
struct stock_details stocks[100];
char x;
int i,add=0,n,total=0,sum=0;
float price_tot=0.0;
void stock_entry()
{
printf("Enter the number of stocks\n");
scanf("%d",&n);
printf("Enter the stock name, product code, price, expiry date, quantity\n");
for(i=1;i<=n;i++)
{
scanf("%s",stocks[i].stock_name);
scanf("%d",&stocks[i].code);
scanf("%f",&stocks[i].price);
scanf("%d/%s/%d",&stocks[i].exp_date.date,stocks[i].exp_date.month,&stocks[i].exp_date.year);
scanf("%d",&stocks[i].quantity);
}
printf("The entered stock details is\n");
for(i=1;i<=n;i++)
{
printf("Stock name:%s\n",stocks[i].stock_name);
printf("Stock code:%d\n",stocks[i].code);
printf("Stock price:%.2f\n",stocks[i].price);
printf("Exp. date:%d/%s/%d\n",stocks[i].exp_date.date,stocks[i].exp_date.month,stocks[i].exp_date.year);
printf("Stock quantity:%d\n",stocks[i].quantity);
}
}
void stock_addn()
{
printf("Enter for how many number of stocks the quantity and price are to be summed\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d %f",&stocks[i].quantity,&stocks[i].price);
add=add+stocks[i].quantity;
price_tot=price_tot+stocks[i].price;
}
printf("Stocks added=%d \n Stocks price=%.2f",add,price_tot);
}
void balance_calc()
{
int closing_bal[100];
printf("Enter for how many days balance is to be calculated\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d %f",&stocks[i].quantity,&stocks[i].price);
closing_bal[i]=(stocks[i].quantity)*(stocks[i].price);
total=total+closing_bal[i];
printf("Closing balance = %d\n",closing_bal[i]);
}
printf("Closing balance for %d days = %d\n", n,total);
}
printf("Welcome to ABC Departmental Store\n");
printf("Enter a choice:\n");
printf("A.Enter new stocks\n");
printf("B.Add today's sales details\n");
printf("C.Closing Balance calculation\n");
scanf("%c",&x);
switch(x)
{
case 'A' : stock_entry();
           break;
case 'B' : stock_addn();
           break;
case 'C' : balance_calc();
           break;
default  : printf("Enter a valid option");
}
}
