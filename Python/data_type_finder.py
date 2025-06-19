import re 
print('\n********************************************************************
 *********************************************') 
print('                   IDENTIFICATION OF DATA TYPES') 
print('**********************************************************************
 *******************************************') 
print('     NAME:MIRUDULA.M ,ENO:27502,COURSE :ADPP,FACULTY:MAHAJOTHI') 
print('**********************************************************************
 *******************************************') 
def fl(t): 
    if(re.match("^[0-9]*[.]{1}[0-9]+$",t)): 
        return True 
    else: 
        return False 
def inputt(): 
    global a 
    a= input ('Enter any input:') 
    if (len(a)==0): 
       print('null input not accepted') 
       inputt() 
    elif(len(a)==10 and (a[0:2]>='01' and a[0:2]<'32') and  (a[2] in['/']) and(a[3:5]>='01' and 
a[3:5]<'13') and (a[5] in['/']) and (a[6:10]>='1600' and a[6:10]<'2090')): 
       print('Entered Data Type is ....DATE') 
    elif(len(a)==10 and a.isdigit() and a[0] in['6','7','8','9'] and a[1:11]!='000000000'): 
        print("Entered Data Type is ....MOBILE NUMBER")  
    elif(a.isdigit() and (len(a)>=6 and len(a)<=10)): 
       print('Entered Data Type is .... LONG INTEGER') 
    elif(a.isdigit() and len(a)>10 ): 
       print('Entered Data Type is ....LONG DOUBLE') 
    elif(a.isdigit() and len(a)<=5): 
       print('Entered Data Type is ....INTEGER') 
    elif(fl(a)): 
       print('Entered Data Type is ....FLOAT') 
    elif(len(a)==1 and a.isalpha()): 
       print('Entered Data Type is ....CHARACTER') 
 
    elif(re.match("^[a-zA-Z\s]+$",a)): 
       print('Entered Data Type is ....STRING') 
    elif(a.isalnum() and len(a) !=1 ) : 
       print('Entered Data Type is ....Alpha Numeric')        
    else: 
       print('ERROR!!!!! Enter the proper data type ') 
       inputt() 
def run(): 
    global b 
    b=input("Do you want to run again (Y/N):") 
    if(len(b)==0): 
        print('null input not accepted') 
        run() 
    elif(b[0] in ['Y','y']): 
        inputt() 
        run() 
    elif(len(b)!=1): 
        print('Input length must be 1') 
        run() 
    elif(b[0]!='Y' and b[0]!='y' and b[0]!='N' and b[0]!='n'): 
        print('Input must be Y or N') 
        run() 
    elif (b[0] in['N','n']): 
        
print('**********************************************************************
 *******************************************') 
        print('                 PROGRAM SUCCESSFULLY ENDED') 
        
print('**********************************************************************
 *******************************************') 
   
inputt() 
run() 
 
 
 
 
