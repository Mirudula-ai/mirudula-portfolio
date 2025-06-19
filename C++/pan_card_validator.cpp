#include<stdio.h> 
#include<conio.h> 
#include<string.h> 
#include<ctype.h> 
#include<stdlib.h> 
#include<iostream.h> 
class valid 
{ 
private: 
char a1[15],b1[15],*c1,d1[15],e1[15],m1[15],l[15]; 
int i,B1; 
public: 
void fun1() 
{ 
clrscr(); 
cout<<"\n*******************************************************************
 ************"; 
cout<<"\n                   
PAN CARD VALIDATION             
"; 
cout<<"\n*******************************************************************
 ************"; 
cout<<"\n       
DONE BY :MIRUDULA,ENO:27502,COURSE:ADPP,FACULTY:REKHA"; 
cout<<"\n*******************************************************************
 ************"; 
aa: 
cout<<"\n\n Enter 3 character(Between AAA to AAZ):"; 
gets(a1); 
if(strlen(a1)==0) 
{ 
cout<<"Null input not accepted"; 
goto aa; 
} 
if(strlen(a1)!=3) 
{ 
cout<<"Input length must be 3"; 
goto aa; 
} 
for(i=0;i<strlen(a1);i++) 
{ 
if(isalpha (a1[i])) 
{ 
} 
else 
{ 
cout<<"Input must be a Alphabet"; 
goto aa; 
} 
} 
if(( a1[0]=='a'||a1[0]=='A')&&(a1[1]=='a'||a1[1]=='A')) 
{ 
} 
else 
{ 
cout<<"ERROR!!!!! Enter only A or a in first 2 character"; 
goto aa; 
} 
cout<<"\n*******************************************************************
 ************"; 
cout<<"\n1. P stands for Individual"; 
cout<<"\n2. C stands for Company"; 
cout<<"\n3. H stands for Hindu Undivided Family (HUF)"; 
cout<<"\n4. A stands for Association of Persons (AOP)"; 
cout<<"\n5. B stands for Body of Individuals (BOI)"; 
cout<<"\n6. G stands for Government Agency"; 
cout<<"\n7. J stands for Artificial Juridical Person"; 
cout<<"\n8. L stands for Local Authority"; 
cout<<"\n9. F stands for Firm/ Limited Liability Partnership"; 
cout<<"\n10.T stands for Trust"; 
cout<<"\n*******************************************************************
 ************"; 
bb: 
cout<<"\n\nEnter the Type of User (Enter a Choice between 1 to 10):"; 
gets(b1); 
if(strlen(b1)==0) 
{ 
cout<<"Null input not Accepted"; 
goto bb; 
} 
B1=atoi(b1); 
if(B1>0&&B1<11) 
{ 
} 
else 
{ 
cout<<"input must be from 1 to 10"; 
goto bb; 
} 
cc: 
cout<<"Enter your Name (Example: Mirudula M):"; 
gets(c1); 
if(strlen(c1)==0) 
{ 
cout<<"Null input not accepted"; 
goto cc; 
} 
for(i=0;i<strlen(c1);i++) 
{ 
if(isalpha(c1[i])||isspace(c1[i])) 
{ 
} 
else 
{ 
cout<<"Input must be a Alphabet"; 
goto cc; 
} 
} 
dd: 
cout<<"Enter your PAN Card number ( between 0001 to 9999):"; 
gets(d1); 
if(strlen(d1)==0) 
{ 
cout<<"Null input not Accepted"; 
goto dd; 
} 
if(d1[0]=='0'&&d1[1]=='0'&&d1[2]=='0'&&d1[3]=='0') 
{ 
cout<<"Input other than between (0001 to 9999 ) not accept"; 
goto dd; 
} 
for(i=0;i<strlen(d1);i++) 
{ 
if(isdigit(d1[i])) 
{ 
} 
else 
{ 
cout<<"Numbers only accepted"; 
goto dd; 
} 
} 
if(strlen(d1)!=4) 
{ 
cout<<"Input length must be 4"; 
goto dd; 
} 
ee: 
cout<<"\nEnter Last Character of your PAN Card ( one character between A to Z):"; 
gets(e1); 
if(strlen(e1)==0) 
{ 
cout<<"Null input not Accepted"; 
goto ee; 
} 
if(strlen(e1)!=1) 
{ 
} 
else if(isalpha(e1[0])) 
{ 
} 
else 
{ 
cout<<"input must be one alphabet"; 
goto ee; 
} 
if(strlen(e1)!=1) 
{ 
cout<<"Input length must be 1"; 
goto ee; 
} 
switch(B1) 
{ 
case 1: 
itoa(B1,l,10); 
strcpy(l,"P"); 
break; 
case 2: 
itoa(B1,l,10); 
strcpy(l,"C"); 
break; 
case 3: 
itoa(B1,l,10); 
strcpy(l,"H"); 
break; 
case 4: 
itoa(B1,l,10); 
strcpy(l,"A"); 
break; 
case 5:(B1,l,10); 
strcpy(l,"B"); 
break; 
case 6: 
itoa(B1,l,10); 
strcpy(l,"G"); 
break; 
case 7: 
itoa(B1,l,10); 
strcpy(l,"J"); 
break; 
case 8: 
itoa(B1,l,10); 
strcpy(l,"L"); 
break; 
case 9: 
itoa(B1,l,10); 
strcpy(l,"F"); 
break; 
case 10: 
itoa(B1,l,10); 
strcpy(l,"T"); 
break; 
} 
c1=strupr(c1); 
clrscr(); 
cout<<"\n*******************************************************************
 ************"; 
cout<<"\n            
ENTERED PAN CARD NUMBER : 
"<<strupr(a1)<<strupr(l)<<c1[0]<<d1<<strupr(e1); 
cout<<"\n*******************************************************************
 ************"; 
} 
void fun2() 
{ 
cout<<"\n\n Do you want to run again(Y/N) : "; 
gets(m1); 
if(strlen(m1)==0) 
{ 
cout<<"Null input not accepted"; 
fun2(); 
} 
else if(strlen(m1)!=1) 
{ 
cout<<"string length must be 1"; 
fun2(); 
} 
else if(m1[0]=='Y' || m1[0]=='y') 
{ 
fun1(); 
fun2(); 
} 
else if (m1[0]=='N' || m1[0]=='n') 
{ 
cout<<"\n*******************************************************************
 ************"; 
cout<<"\n                 
Program Ended Successfully....!!!"; 
cout<<"\n*******************************************************************
 *************"; 
} 
else if(m1[0]!='Y' && m1[0]!='y' && m1[0]!='N' && m1[0]!='n') 
{ 
cout<<"\n\nInput Error...Pls Enter Y or N"; 
fun2(); 
} 
} 
}; 
void main() 
{ 
valid m; 
clrscr(); 
m.fun1(); 
m.fun2(); 
getch();
}
