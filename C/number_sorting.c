#include<stdio.h> 
#include<conio.h> 
#include<string.h> 
#include<ctype.h> 
#include<stdlib.h> 
int main() 
{ 
long i,j,temp,M1[5]; 
char a1[10],b1[10],c1[10],d1[10],e1[10],miru[10],wish[10]; 
mi: 
clrscr(); 
printf("\n*******************************************************************
 ***********"); 
printf("\n        
SORTING OF 5 NUMBERS"); 
printf("\n*******************************************************************
 ***********"); 
printf("\nDONE BY 
:MIRUDULA,ENO:27502,COURSE:ADPP,FACULTY:MAHAJOTHI"); 
printf("\n*******************************************************************
 ***********"); 
aa: 
printf("\n\nEnter the first number:"); 
gets(a1); 
if(strlen(a1)==0) 
{ 
printf("Null input not accepted"); 
goto aa; 
} 
if(strlen(a1)>9) 
{ 
printf("input length must be less than 10"); 
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
} 
M1[0]=atol(a1); 
bb: 
printf("\nEnter the second number:"); 
gets(b1); 
if(strlen(b1)==0) 
{ 
printf("null input not accepted"); 
goto bb; 
} 
if(strlen(b1)>9) 
{ 
printf("input length must be less than 10"); 
goto bb; 
} 
for(i=0;i<strlen(b1);i++) 
{ 
if(isdigit(b1[i])) 
{ 
} 
else 
{ 
printf("input must be an integer"); 
goto bb; 
} 
} 
M1[1]=atol(b1); 
cc: 
printf("\nEnter the third number:"); 
gets(c1); 
if(strlen(c1)==0) 
{ 
printf("null input not accepted"); 
goto cc; 
} 
if(strlen(c1)>9) 
{ 
printf("input length must be less than 10"); 
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
} 
M1[2]=atol(c1); 
dd: 
printf("\nEnter the fourth number:"); 
gets(d1); 
if(strlen(d1)==0) 
{ 
printf("null input not accepted"); 
goto dd; 
} 
if(strlen(d1)>9) 
{ 
printf("input length must be less than 10"); 
goto dd; 
} 
for(i=0;i<strlen(d1);i++) 
{ 
if(isdigit(d1[i])) 
{ 
} 
else 
{ 
printf("input must be an integer"); 
goto dd; 
} 
} 
M1[3]=atol(d1); 
ee: 
printf("\nEnter the fifth number:"); 
gets(e1); 
if(strlen(e1)==0) 
{ 
printf("Null input not accepted"); 
goto ee; 
} 
if(strlen(e1)>9) 
{ 
printf("input length must be less than 10"); 
goto ee; 
} 
for(i=0;i<strlen(e1);i++) 
{ 
if(isdigit(e1[i])) 
{ 
} 
else 
{ 
printf("Input must be an integer"); 
goto ee; 
} 
} 
M1[4]=atol(e1); 
mm: 
printf("\nType of Sorting(Ascending/Descending):"); 
gets(wish); 
if(strlen(wish)==0) 
{ 
printf("Null Input not accepted."); 
goto mm; 
} 
if(strlen(wish)!=1) 
{ 
printf("Input Length Must be 1"); 
goto mm; 
} 
if(wish[0]=='A'||wish[0]=='a') 
{ 
for(i=0;i<5;i++) 
{ 
for(j=i+1;j<5;j++) 
{ 
if(M1[i]>M1[j]) 
{ 
temp=M1[i]; 
M1[i]=M1[j]; 
M1[j]=temp; 
} 
} 
} 
{ 
printf("\n*******************************************************************
 ***********"); 
printf("\n     
The given Number is Assending Order"); 
printf("\n*******************************************************************
 ***********"); 
} 
for(i=0;i<5;i++) 
{ 
printf("\n%ld",M1[i]); 
} 
} 
if(wish[0]=='D'||wish[0]=='d') 
{ 
for(i=0;i<5;i++) 
{ 
for(j=i+1;j<5;j++) 
{ 
if(M1[i]<M1[j]) 
{ 
temp=M1[i]; 
M1[i]=M1[j]; 
M1[j]=temp; 
} 
} 
} 
{ 
printf("\n*******************************************************************
 ***********"); 
printf("\n     
The given Number is desending Order"); 
printf("\n*******************************************************************
 ***********"); 
} 
for(i=0;i<5;i++) 
{ 
printf("\n%ld",M1[i]); 
} 
} 
if(strlen(wish)==0) 
{ 
printf("Null Input not accepted."); 
goto mm; 
} 
else if(wish[0]!='A' && wish[0]!='a' && wish[0]!='d' && wish[0]!='D') 
{ 
printf("\nInput Error...Pls Enter A or D"); 
goto mm; 
} 
{ 
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
} 
getch(); 
return 0; 
}
