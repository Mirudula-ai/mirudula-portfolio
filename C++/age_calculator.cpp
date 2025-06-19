#include<stdio.h>
 #include<conio.h>
 #include<string.h>
 #include<ctype.h>
 #include<stdlib.h>
 #include<iostream.h>
 class valid
 {
 private:
 char a1[15],b1[15],c1[15],d1[15],e1[15],f1[15],m1[15];
 int A1,B1,C1,D1,E1,F1,ANS1,ANS2,ANS3;
 public:
 void fun1()
 {
 clrscr();
 cout<<"\n*******************************************************************
 ************";
 cout<<"\n             
AGE  CALCULATOR           
";
 cout<<"\n*******************************************************************
 ************";
 cout<<"\n       
DONE BY :MIRUDULA,ENO:27502,COURSE:ADPP,FACULTY:REKHA";
 cout<<"\n*******************************************************************
 ************";
 aa:
 cout<<"\n\n Enter the birth date:";
 gets(a1);
 if(strlen(a1)==0)
 {
 cout<<"Null input not accepted";
 goto aa;
 }
 if(isdigit(a1[0])&&isdigit(a1[1]))
 {
 }
else
 {
 cout<<"Enter the number between 1 to 31";
 goto aa;
 }
 if(strlen(a1)!=2)
 {
 cout<<"Enter the number between 1 to 31";
 goto aa;
 }
 A1=atoi(a1);
 if(A1>=1&&A1<32)
 {
 }
 else
 {
 cout<<"Enter the number between 1 to 31";
 goto aa;
 }
 bb:
 cout<<"\n\n Enter the birth month:";
 gets(b1);
 if(strlen(b1)==0)
 {
 cout<<"Null input not accepted";
 goto bb;
 }
 if(isdigit(b1[0])&&isdigit(b1[1]))
 {
 }
 else
 {
 cout<<"Enter the number between 1 to 12";
 goto bb;
 }
 if(strlen(b1)!=2)
 {
 cout<<"Enter the number between 1 to 12";
 goto bb;
 }
B1=atoi(b1);
 if(B1>=1&&B1<13)
 {
 }
 else
 {
 cout<<"Enter the number between 1 to 12";
 goto bb;
 }
 cc:
 cout<<"\n\n Enter the birth year:";
 gets(c1);
 if(strlen(c1)==0)
 {
 cout<<"Null input not accepted";
 goto cc;
 }
 if(isdigit(c1[0])&&isdigit(c1[1])&&isdigit(c1[2])&&isdigit(c1[3]))
 {
 }
 else
 {
 cout<<"Enter the proper year";
 goto cc;
 }
 if(strlen(c1)!=4)
 {
 cout<<"Enter the proper year";
 goto cc;
 }
 C1=atoi(c1);
 if(C1>1899&&C1<2024)
 {
 }
 else
 {
 cout<<"Enter the number between 1900 to 2023";
 goto cc;
 }
 dd:
 cout<<"\n\n Enter the current date:";
gets(d1);
 if(strlen(d1)==0)
 {
 cout<<"Null input not accepted";
 goto dd;
 }
 if(isdigit(d1[0])&&isdigit(d1[1]))
 {
 }
 else
 {
 cout<<"Enter the number between 1 to 31";
 goto dd;
 }
 if(strlen(d1)!=2)
 {
 cout<<"Enter the number between 1 to 31";
 goto aa;
 }
 D1=atoi(d1);
 if(D1>=1&&D1<32)
 {
 }
 else
 {
 cout<<"Enter the number between 1 to 31";
 goto dd;
 }
 ee:
 cout<<"\n\n Enter the current month:";
 gets(e1);
 if(strlen(e1)==0)
 {
 cout<<"Null input not accepted";
 goto ee;
 }
 if(isdigit(e1[0])&&isdigit(e1[1]))
 {
 }
 else
{
 cout<<"Enter the number between 1 to 12";
 goto ee;
 }
 if(strlen(e1)!=2)
 {
 cout<<"Enter the number between 1 to 12";
 goto ee;
 }
 E1=atoi(e1);
 if(E1>=1&&E1<13)
 {
 }
 else
 {
 cout<<"Enter the number between 1 to 12";
 goto ee;
 }
 ff:
 cout<<"\n\n Enter the current year:";
 gets(f1);
 if(strlen(f1)==0)
 {
 cout<<"Null input not accepted";
 goto ff;
 }
 if(isdigit(f1[0])&&isdigit(f1[1])&&isdigit(f1[2])&&isdigit(f1[3]))
 {
 }
 else
 {
 cout<<"Enter the proper year";
 goto ff;
 }
 if(strlen(f1)!=4)
 {
 cout<<"Enter the proper year";
 goto ff;
 }
 F1=atoi(f1);
if(F1>2000&&F1<2040)
 {
 }
 else
 {
 cout<<"Enter the year between 2000 to 2040";
 goto ff;
 }
 cout<<"\n\n      
DOB   :" <<A1<<'/'<<B1<<'/'<< C1 ;
 cout<<"\n\n      
CDATE :" <<D1<<'/'<<E1<<'/'<< F1 ;
 ANS1=D1-A1;
 if(D1<A1)
 {
 ANS1=A1-D1;
 }
 ANS2=E1-B1;
 if(E1<B1)
 {
 ANS2=B1-E1;
 }
 ANS3=F1-C1;
 if(F1<C1)
 {
 cout<<"\n                   
INPUT ERROR !!!!!";
 goto aa;
 }
 else
 {
 cout<<"\n*******************************************************************
 ************";
 cout<<"\n       
ANSWER :"<<ANS1<<"Days"<<ANS2<<"Months"<<ANS3<<"years";
 cout<<"\n*******************************************************************
 ************";
 }
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
 ************";
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
 m.fun1();
 m.fun2();
 getch();
 }
