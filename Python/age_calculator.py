print('\n********************************************************************
 *********************************************') 
print('                                         AGE CALCULATOR') 
print('**********************************************************************
 *******************************************') 
print('                 NAME:MIRUDULA.M ,ENO:27502,COURSE 
:ADPP,FACULTY:MAHAJOTHI') 
print('**********************************************************************
 *******************************************') 
def inputt(): 
    global a 
    a= input ('Enter the Date of Birth :') 
    if (len(a)==0): 
       print('null input not accepted') 
       inputt() 
    if(len(a)==10 and (a[0:2]>='01' and a[0:2]<'32') and  (a[2] in['/']) and(a[3:5]>='01' and 
a[3:5]<'13') and (a[5] in['/']) and (a[6:10]>='1600' and a[6:10]<'2090')): 
       pass 
    else: 
       print('ERROR!!! enter the proper Date of Birth') 
       inputt() 
def cdate(): 
    global b 
    b= input ('Enter the Current Date :') 
    if (len(b)==0): 
       print('null input not accepted') 
       inputt() 
    if(len(b)==10 and (b[0:2]>='01' and b[0:2]<'32') and  (b[2] in['/']) and(b[3:5]>='01' and 
b[3:5]<'13') and (b[5] in['/']) and (b[6:10]>='1600' and b[6:10]<'2090')): 
       pass 
    else: 
       print('ERROR!!! enter the  Current Date') 
       cdate() 
def res(): 
    global cd,cm,cy,bd,bm,by,r,s,t 
    cd=int(b[0:2]) 
 
    cm=int(b[3:5]) 
    cy=int(b[6:10]) 
    bd=int(a[0:2]) 
    bm=int(a[3:5]) 
    by=int(a[6:10]) 
    if(cd>bd): 
       r=cd-bd 
    else: 
       r=bd-cd 
    if(cm>bm): 
       s=cm-bm 
    else: 
       s=bm-cm 
    if(cy>by): 
       t=cy-by 
    else: 
       print('ERROR!!!!Current year must be greater than birth year') 
       inputt() 
       cdate() 
       res() 
def ans(): 
    
print('\n********************************************************************
 ********************************************') 
    print('                                AGE= {}DAYES {} MONTHS {}YEARS'.format(r,s,t)) 
    
print('**********************************************************************
 ******************************************') 
def run(): 
    global b 
    b=input("Do you want to run again (Y\\N)") 
    if(len(b)==0): 
        print('null input not accepted') 
        run() 
    elif(len(b)!=1): 
        print('Input length must be 1') 
        run() 
    elif(b[0]!='Y' and b[0]!='y' and b[0]!='N' and b[0]!='n'): 
        print('Input must be Y or N') 
        run() 
    elif(b[0] in ['Y','y']): 
        inputt() 
 
        cdate() 
        res() 
        ans() 
        run() 
    elif (b[0] in['N','n']): 
        
print('**********************************************************************
 ******************************************') 
        print('                                        PROGRAM SUCCESSFULLY ENDED') 
        
print('**********************************************************************
 ******************************************')  
 
inputt()  
cdate() 
res() 
ans() 
run()  
