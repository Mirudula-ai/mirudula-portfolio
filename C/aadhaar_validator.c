#include<stdio.h> 
#include<conio.h> 
#include<string.h> 
#include<ctype.h> 
#include<stdlib.h> 
int main() 
{ 
int i,number; 
char miru[10],m1[14],a1[15]; 
mi: 
clrscr(); 
printf("\n*******************************************************************
 ***********"); 
printf("\n               
AADHAAR CARD VALIDATION     "); 
printf("\n*******************************************************************
 ***********"); 
printf("\nDONE BY 
:MIRUDULA,ENO:27502,COURSE:ADPP,FACULTY:MAHAJOTHI"); 
printf("\n*******************************************************************
 ***********"); 
aa: 
printf("\n\n Enter the Aadhaar number:"); 
gets(a1); 
if(strlen(a1)==0) 
{ 
printf("Null input not accepted"); 
goto aa; 
} 
if(strlen(a1)!=14) 
{ 
printf("input must have only fourteen digit "); 
goto aa; 
} 
if((a1[4])!=' '||(a1[9])!=' ') 
{ 
printf("Should have space for 5th and 10th number "); 
goto aa; 
} 
if((a1[0])=='0'||(a1[0])=='1') 
{ 
printf("First number must not contain 1 OR 0 "); 
goto aa; 
} 
if(isdigit(a1[0])&&isdigit(a1[1])&&isdigit(a1[2])&&isdigit(a1[3])&&isspace(a1[4])&&isdig
 it(a1[5])&&isdigit(a1[6])&&isdigit(a1[7])&&isdigit(a1[8])&&isspace(a1[9])&&isdigit(a1[1
 0])&&isdigit(a1[11])&& isdigit(a1[12])&&isdigit(a1[13])) 
{ 
printf("\n*******************************************************************
 ***********"); 
printf("\nEntered Aadhaar number %s is correct",a1); 
printf("\n*******************************************************************
 ***********"); 
} 
else 
{ 
printf("\n*******************************************************************
 ***********"); 
printf("\nEntered Aadhaar number is wrong"); 
printf("\n*******************************************************************
 ***********"); 
goto aa; 
} 
again: 
flushall(); 
printf("\n\nDo you want to run again(Y/N) : "); 
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
printf("\nProgram Ended Successfully....!!!"); 
printf("\n*******************************************************************
 ***********"); 
} 
else if(miru[0]!='Y' && miru[0]!='y' && miru[0]!='N' && miru[0]!='n') 
{ 
printf("\nInput Error...Pls Enter Y or N"); 
goto again; 
} 
getch(); 
return 0; 
} 
