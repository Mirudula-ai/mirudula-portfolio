import re 
print('\n********************************************************************
 *********************************************') 
print('                             SORTING OF STRINGS & EXPORTING TO A TEXT FILE             
') 
print('**********************************************************************
 *******************************************') 
print('                         NAME:MIRUDULA.M ,ENO:27502,COURSE 
:ADPP,FACULTY:MAHAJOTHI') 
print('**********************************************************************
 *******************************************') 
def inputt(): 
    global a 
    a= input ('How many Numbers you want to Sort (between 2 to 10):') 
    if (len(a)==0): 
       print('null input not accepted') 
       inputt()    
    if(a.isdigit() and int(a)>1 and int(a)<11 ):    
       pass 
    else: 
       print('ERROR!!!!Enter number between 1 to 10') 
       inputt() 
    global A 
    A=int(a) 
def sort(): 
    global R 
    global b 
    R=[] 
    for i in range(1,A+1): 
        b=input('Enter string '+ str(i)+':') 
        if ((re.match("^[a-zA-Z\s]+$",b))): 
            R.append(b) 
        else: 
            print('ERROR!!!!Enter only string') 
            inputt() 
            sort() 
 
            break 
def ad(): 
    global O 
    O=input('Enter the Type of Sorting (Ascending/Descending):') 
    if (len(O)==0): 
       print('null input not accepted') 
       ad() 
    elif(len(O)!=1): 
        print('ERROR!!!!enter only A or D') 
        ad() 
    elif(O[0] in ['a','A'] ): 
        R.sort() 
    elif(O[0] in ['d','D'] ): 
        R.sort() 
        R.reverse() 
    else: 
        print('ERROR!!!!Enter only a or A or d or D  ') 
        ad() 
    global r 
    r=str(R) 
def fil(): 
    global f 
    f=input("Do you want to write the output to a text file (Y/N) :") 
    if(len(f)==0): 
        print('Null input not accepted') 
        fil() 
    elif(len(f)!=1): 
        print("ERROR!!!!The length of the input should not be more than 1.") 
        fil() 
    elif(f[0] in['y','Y']): 
        pass 
    elif(f[0] in['n','N']): 
        run() 
    else: 
        print("\nEnter just 'y' or 'Y' or 'n' or 'N'") 
        fil() 
def y(): 
    global c 
    if(f[0] in ['y','Y'] ): 
        c=input("If Yes, Enter output file name with path (Example: e:\student\exporttxt.txt):") 
        if(len(c)==0): 
                print('Null input not accepted') 
 
                y() 
        if(len(c)>4): 
                if c.endswith('.txt'): 
                    global m 
                    m=open(c,'w') 
                    m.write(r) 
                    m.close() 
                    
print('**********************************************************************
 *******************************************') 
                    print('                                 OUTPUT PRINTED SUCCESSFULLY') 
                    
print('**********************************************************************
 *******************************************') 
        else: 
                print("Enter a proper file name with path") 
                y()            
def run(): 
    global b 
    b=input("Do you want to run again (Y\\N)") 
    if(len(b)==0): 
        print('null input not accepted') 
        run() 
    elif(b[0] in ['Y','y']): 
        inputt() 
        sort() 
        ad() 
        fil() 
        y() 
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
        print('                                PROGRAM SUCCESSFULLY ENDED') 
print('**********************************************************************
 *******************************************') 
exit(0) 
inputt()  
sort() 
ad() 
fil() 
y() 
run()
