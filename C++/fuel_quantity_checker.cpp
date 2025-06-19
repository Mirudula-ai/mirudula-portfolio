#include<stdio.h> 
#include<iostream.h> 
#include<iomanip.h> 
#include<conio.h> 
#include<stdlib.h> 
#include<string.h> 
#include<ctype.h> 
int main() 
{ 
char a1[50],amt[50]; 
char fuel[50],yn[50],key; 
int amount,i; 
float qty,usd,ringgit; 
ee: 
clrscr(); 
cout<<"\n*******************************************************************
 ************"; 
• cout<<"\n   Finding The Quantity of Petrol And Diesel in Litres  
"; 
cout<<"\n*******************************************************************
 ************"; 
cout<<"\n       
DONE BY :MIRUDULA,ENO:27502,COURSE:ADPP,FACULTY:REKHA"; 
cout<<"\n*******************************************************************
 ************"; 
aa: 
cout<<"\nEnter Vehicle Number (Example: TN253241) :"; 
gets(a1); 
if(strlen(a1)==0) 
{ 
cout<<"Error!!!!Null Input should not be accepted.."; 
goto aa; 
} 
if(strlen(a1)!=8) 
{ 
cout<<"Error!!!Vehicle Number must be 8 digit alpha numeric input."; 
goto aa; 
} 
if(a1[0]=='T'&&a1[1]=='N'||a1[0]=='t'&&a1[1]=='n'||a1[0]=='A'&&a1[1]=='P'||a1[0]=='a'&&
 a1[1]=='p'||a1[0]=='K'&&a1[1]=='A'||a1[0]=='k'&&a1[1]=='a'||a1[0]=='K'&&a1[1]=='L'||a1[0
 ]=='k'&&a1[1]=='l'||a1[0]=='M'&&a1[1]=='H'||a1[0]=='m'&&a1[1]=='h') 
{ 
} 
else 
{ 
cout<<"Error!!!First two digits must be any one character set of AP / KA / KL / MH / TN"; 
goto aa; 
} 
if(a1[2]=='0'&& a1[3]=='0') 
{ 
cout<<"Error!!!Next two digits must be between 01 to 99"; 
goto aa; 
} 
if(a1[4]=='0'&&a1[5]=='0'&&a1[6]=='0'&&a1[7]=='0') 
{ 
cout<<"Error!!!Last four digits must be between 0001 to 9999"; 
goto aa; 
} 
bb: 
cout<<"\nType of Fuel (Petrol / Diesel) (P/D) :"; 
gets(fuel); 
if(strlen(fuel)==0) 
{ 
cout<<"Error!!!Null input should not be accepted"; 
goto bb; 
} 
if(strlen(fuel)!=1) 
{ 
cout<<"Error!!!Input Must be P or D"; 
goto bb; 
} 
if(fuel[0]=='p'||fuel[0]=='P'||fuel[0]=='d'||fuel[0]=='D') 
{ 
} 
else 
{ 
cout<<"Error!!!Input Must be P or D"; 
goto bb; 
} 
if(fuel[0]=='p'||fuel[0]=='P') 
{ 
cout<<"\nPrice Per Litre Petrol = Rs.101.40"; 
cc: 
flushall(); 
cout<<"\nEnter Amount for Petrol(Rs.) :"; 
gets(amt); 
if(strlen(amt)==0) 
{ 
cout<<"Error!!!Null input should not be accepted"; 
goto cc; 
} 
for(i=0;i<strlen(amt);i++) 
{ 
if(isdigit(amt[i])) 
{ 
amount=atoi(amt); 
} 
else 
{ 
flushall(); 
cout<<"Error!!!Special char, Decimal,Alphabets are not accepted"; 
goto cc; 
} 
} 
if(amount>=50&&amount<=10000) 
{ 
qty=amount/101.40; 
usd=amount/75; 
ringgit=amount/17.93; 
clrscr(); 
• cout<<"\t\t\t   Finding The Quantity of Petrol And Diesel in Litres  
"; 
cout<<"\n===========================================================
 ===================="; 
cout<<"\n\t\t\tINDIAN OIL CORPORATION"; 
cout<<"\n\n\t\t     
35, Lakshmi Amman Koil Street,"; 
cout<<"\n\n\t\t\tPerambur, Chennai 600011."; 
cout<<"\n\n==========================================================
 ==================="; 
cout<<"\n\n\t\tVehicle No.     : "<<a1; 
cout<<"\n\n\t\tType of Fuel    : PETROL"; 
cout<<"\n\n\t\tFilled Amount   : Rs."<<amount<<"(USD="<<usd<<setprecision(2)<<", 
Ringgits="<<ringgit<<setprecision(2)<<")"; 
cout<<"\n\n\t\tFilled Qty      
: "<<qty<<setprecision(4)<<"Litres (Price Per Litre: 
Rs.101.40)"; 
cout<<"\n\n\t\t\tThank You !!! Welcome !!!"; 
cout<<"\n\n==========================================================
 ==================="; 
} 
else 
{ 
cout<<"\nAmount must be in Range between Rs.50 to Rs.10000"; 
goto cc; 
} 
} 
if(fuel[0]=='d'||fuel[0]=='D') 
{ 
cout<<"\nPrice Per Litre DIESEL = RS.91.43 "; 
dd: 
flushall(); 
cout<<"\nEnter Amount for Diesel(Rs.) :"; 
gets(amt); 
if(strlen(amt)==0) 
{ 
cout<<"Error!!!Null input should not be accepted"; 
goto dd; 
} 
for(i=0;i<strlen(amt);i++) 
{ 
if(isdigit(amt[i])) 
{ 
amount=atoi(amt); 
} 
else 
{ 
flushall(); 
cout<<"Error!!!Special char, Decimal,Alphabets are not accepted"; 
goto dd; 
} 
} 
if(amount>=50&&amount<=10000) 
{ 
qty=amount/91.43; 
usd=amount/75; 
ringgit=amount/17.93; 
clrscr(); 
• cout<<"\t\t\t   Finding The Quantity of Petrol And Diesel in Litres  
"; 
cout<<"\n===========================================================
 ===================="; 
cout<<"\n\t\t\tINDIAN OIL CORPORATION"; 
cout<<"\n\n\t\t     
35, Lakshmi Amman Koil Street,"; 
cout<<"\n\n\t\t\tPerambur, Chennai 600011."; 
cout<<"\n\n==========================================================
 ==================="; 
cout<<"\n\n\t\tVehicle No.     : "<<a1; 
cout<<"\n\n\t\tType of Fuel    : DIESEL"; 
cout<<"\n\n\t\tFilled Amount   : Rs."<<amount<<"(USD="<<usd<<setprecision(2)<<", 
Ringgits="<<ringgit<<setprecision(2)<<")"; 
cout<<"\n\n\t\tFilled Qty      
: "<<qty<<setprecision(2)<<"Litres (Price Per Litre: 
Rs.101.40)"; 
cout<<"\n\n\t\t\tThank You !!! Welcome !!!"; 
cout<<"\n\n==========================================================
 ==================="; 
} 
else 
{ 
cout<<"\nAmount must be in Range between Rs.50 to Rs.10000"; 
goto dd; 
} 
} 
ff: 
cout<<"\nDo you want to run again(Y/N) :"; 
gets(yn); 
if(strlen(yn)==0) 
{ 
cout<<"Null input not be accepted"; 
goto ff; 
} 
if(strlen(yn)>1) 
{ 
cout<<"Other than Y/N not accepted"; 
goto ff; 
} 
if(yn[0]=='N'||yn[0]=='n'||yn[0]=='y'||yn[0]=='Y') 
{ 
} 
else 
{ 
cout<<"Other than Y/N not accepted"; 
goto ff; 
} 
if(yn[0]=='Y'||yn[0]=='y') 
{ 
goto ee; 
} 
else if (yn[0]=='n'||yn[0]=='N') 
{ 
cout<<"\n*******************************************************************
 ************"; 
cout<<"\n                 
Program Ended sucessfully"; 
cout<<"\n*******************************************************************
 ************"; 
} 
getch(); 
return 0; 
} 
