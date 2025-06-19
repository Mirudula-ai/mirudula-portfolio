#include<stdio.h> 
#include<conio.h> 
#include<string.h> 
#include<ctype.h> 
#include<stdlib.h> 
int main() 
{ 
float dollar,result; 
long int currency; 
int country,i; 
char a1[10],b1[10],c1[10],miru[10]; 
mi: 
clrscr(); 
printf("\n*******************************************************************
 ***********"); 
printf("\n             
TO DISPLAY INDIAN CURRENCY INTO MULTINATIONAL 
CURRENCY       "); 
printf("\n*******************************************************************
 ***********"); 
printf("\n               
DONE BY 
:MIRUDULA,ENO:27502,COURSE:ADPP,FACULTY:MAHAJOTHI"); 
printf("\n*******************************************************************
 ***********"); 
aa: 
printf("\n\n Enter the country choice (integer between 1 to 5):"); 
gets(a1); 
if(strlen(a1)==0) 
{ 
printf("Null input not accepted"); 
goto aa; 
} 
if(strlen(a1)!=1) 
{ 
printf("input must be from 1 to 5"); 
goto aa; 
} 
for(i=0;i<strlen(a1);i++) 
{ 
if(isdigit(a1[i])) 
{ 
} 
else 
{ 
printf("input must be an integer"); 
goto aa; 
} 
country=atol(a1); 
if(country>0&&country<6) 
{ 
} 
else 
{ 
printf("Input must be from 1 to 5 "); 
goto aa; 
} 
bb: 
printf("\n\n Enter the country price per dollar (Rs.):"); 
gets(b1); 
if(strlen(b1)==0) 
{ 
printf("Null input not accepted"); 
goto bb; 
} 
if(isdigit(b1[0])&&isdigit(b1[1])&&(b1[2])=='.'&&isdigit(b1[3])&&isdigit(b1[4])) 
{ 
} 
else 
{ 
printf("Number must be in decimal (Eg:61.21):"); 
goto bb; 
} 
for(i=0;i<strlen(b1);i++) 
{ 
/*if(isdigit(b1[i])) 
{ 
} 
else 
{ 
printf("input must be an integer"); 
goto bb; 
}*/ 
} 
dollar=atof(b1); 
} 
cc: 
printf("\n\n Enter the Indian currency (Rs.):"); 
gets(c1); 
if(strlen(c1)==0) 
{ 
printf("Null input not accepted"); 
goto cc; 
} 
if(strlen(c1)>9) 
{ 
printf("Input lenght must be less than 10"); 
goto cc; 
} 
for(i=0;i<strlen(c1);i++) 
{ 
if(isdigit(c1[i])) 
{ 
} 
else 
{ 
printf("input must be an integer"); 
goto cc; 
} 
if(isdigit(c1)<10) 
{ 
} 
else 
{ 
printf("Input lenght must be less than 10"); 
goto cc; 
} 
currency=atof(c1); 
if(currency>dollar) 
{ 
} 
else 
{ 
printf("currency must be greater than dollar "); 
goto cc; 
} 
} 
result = currency/dollar ; 
switch(country) 
{ 
case 1: 
printf("\n*******************************************************************
 ***********"); 
printf("\n          
INDIAN CURRENCY %ld IN SINGAPORE DOLLAR= %.2f 
SD",currency,result ); 
printf("\n*******************************************************************
 ***********"); 
break; 
case 2: 
printf("\n*******************************************************************
 ***********"); 
printf("\n          
INDIAN CURRENCY %ld IN MALASIYA DOLLAR= %.2f RINGGIT 
",currency,result); 
printf("\n*******************************************************************
 ***********"); 
break; 
case 3 : 
printf("\n*******************************************************************
 ***********"); 
printf("\n          
INDIAN CURRENCY %ld IN DUBAI DOLLAR = %.2f DIRHAM 
",currency,result); 
printf("\n*******************************************************************
 ***********"); 
break; 
case 4: 
printf("\n*******************************************************************
 ***********"); 
printf("\n         
INDIAN CURRENCY %ld IN AUSTRALIA DOLLAR = %.2f AUD 
",currency,result); 
printf("\n*******************************************************************
 ***********"); 
break; 
case 5: 
printf("\n********** 
********************************************************************"); 
printf("\n        
INDIAN CURRENCY %ld IN USA DOLLAR = %.2f USD ",currency,result); 
printf("\n*******************************************************************
 ***********"); 
break; 
} 
{ 
again: 
flushall(); 
printf("\n\nDo you want to run again(Y/N) : "); 
//scanf("%s",&miru); 
gets(miru); 
if(strlen(miru)==0) 
{ 
printf("null input not accepted"); 
goto again; 
} 
if(strlen(miru)!=1) 
{ 
printf("string length must be 1"); 
goto again; 
} 
else if(miru[0]=='Y' || miru[0]=='y') 
{ 
goto mi; 
} 
else if (miru[0]=='N' || miru[0]=='n') 
{ 
printf("\n*******************************************************************
 ***********"); 
printf("\n                        
Program Ended Successfully....!!!"); 
printf("\n*******************************************************************
 ***********"); 
} 
else if(miru[0]!='Y' && miru[0]!='y' && miru[0]!='N' && miru[0]!='n') 
{ 
printf("\n\nInput Error...Pls Enter Y or N"); 
goto again; 
} 
} 
getch(); 
return 0;
}
