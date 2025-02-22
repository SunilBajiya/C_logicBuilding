		NO RETURN AND ARGUMENT 
--------------------------------------------------------------
#include<stdio.h>
void add(int a, int b);
void sub(int a, int b);
void divi(int a, int b);
void multi(int a, int b);
void mod(int a , int b);
int main(){
 add(12,423);
 sub(12,3);
 divi(12,3);
 multi(122,43);
 mod(2,43);

	return 0;
}

void add(int a, int b){
    int c=a+b;
	printf(" add %d",c);
}
void sub(int a, int b){
    int c=a-b;
	printf(" \n  sub is :- %d",c);
}
void divi(int a, int b){
    int c=a/b;
	printf(" \n  divide is :- %d",c);
}
void multi(int a, int b){
    int c=a*b;
	printf(" \n  mutltiple is :- %d",c);
}
void mod(int a , int b){
     int c=a%b;
	printf(" \n  mod is :- %d",c);
}




add()
sub()
div()
multi()
mod()
----------------------------------------------------------------------------------
#include<stdio.h>
void swap(int n1, int n2) ;
void even(int num);
void maximum(int a,int b, int c);
void vowel(char ch);
void gender(char ch);
void voter(int num);
void electricity(int units);
void salary(int Income);
void marksheet( int hindi ,int english, int Physics,int  science,int  so_science,int math);
void keyboard(char ch);


int main(){
 swap(2,3) ;
 even(23);
 maximum(23,4,54);
 vowel('e');
 gender('m');
 voter(23);
 electricity(23);
 salary(25400);
 marksheet(56,65,76,34,67,80);
 keyboard('a');

	return 0;
}
void swap(int n1,int n2) {
    n1 = n1+n2;
    n2=  n1-n2;
    n1= n1-n2;
    printf(" the number is %d %d  ",n1,n2);
 
}
void even(int num){
     printf("\n");
    if(num%2==0){
        printf(" number is even ");
    }else{
        printf("number is odd");
    }

}
void maximum(int a, int b, int c){
    printf("\n");
    if(a>b && a>c){
        printf("a is maximum");
    }else if(b>c && b>a){
        printf(" b is maximum");
    }else{
        printf(" c is maximum");
    }

}
void vowel(char ch){
    printf("\n");
    if(ch=='a'|| ch =='e'|| ch =='i'|| ch =='o'|| ch =='u'){
        printf("your character is vowel");
    }else{
        printf("your character is cosonted ");
    }

}
void gender(char ch){
    printf("\n");
    printf("please check your gender male & female");
    printf("\n");
    if(ch =='m' || ch =='M'){
     printf("He 😊");
}else if (ch == 'f'||ch =='F'){
    printf("she 🐶");
}else {
    printf("\nyour input is not right according gender ☠ ");
}
printf("------------------------------------");
}
void voter(int age){
    printf("\n");
    if(age>=18){
        printf("your can deposite your vote in BJP😁");
    }else{
        printf("your age is not upto 18 + ");
    }
    

}
void electricity(int units){
    printf("\n");
    if(units >=1 && units <=10){
        int totalAmout = units*10;
        printf("This months total bill Amout is %d",totalAmout);
    }else if(units >=11 && units <=20){
        int totalAmout = units*15;
        printf("This months total bill Amout is %d",totalAmout);
    }else if(units >=20 ){
        int totalAmout = units*20;
        printf("This months total bill Amout is %d",totalAmout);
    }else {
        printf(" sorry have no connection under your name  .....");
    }

}
void salary(int Income){
    printf("\n");
     
  if(Income <= 10000){
    printf("Dear user have no Income tax your balance!! %d ",Income);
  }else if(Income >= 10001 && Income <=30000){
    float New_Balance_afterTax = Income*0.90 ;
    printf("Dear customer, Your bank balance is under the Income tax  10 percentage accordingly GovtTaxs %f",New_Balance_afterTax);
  }else if(Income >= 30001 && Income < 50000){
        float New_Balance_afterTax = Income*0.80 ;
    printf("Dear customer, Your bank balance is under the Income tax  20 percentage accordingly GovtTaxs %f",New_Balance_afterTax);
  }else if(Income > 50000){
       float New_Balance_afterTax = Income*0.50 ;
    printf("Dear customer, Your bank balance is under the Income tax  30 percentage accordingly GovtTaxs %f ",New_Balance_afterTax);
  }
  else{
    printf("Dear customer your no balance in bank account  %d ",Income);
    
  }
}

void marksheet( int hindi ,int english, int Physics,int  science,int  so_science,int math)
{
    printf("\n");
int totalNumber = ((hindi + english+ Physics + science + so_science + math)/600)*100;
  
   if(totalNumber < 25 ){
    printf("your Result Grade is: F   😥");
   }else if( totalNumber >25 && totalNumber <45){
    printf("your Result Grade is: E");
   }else if (totalNumber >45 && totalNumber <50){
    printf("your Result Grade is : D"); 
   }else if (totalNumber  >50 && totalNumber <60){
    printf("your Result Grade is : C");
   }else if (totalNumber > 60 && totalNumber <80){
    printf("your Result Grade is: B");
   }else if (totalNumber > 80){
    printf(" consurgation ☺ your Result Grade is: A \n  Hurry! Well done.. ");
   }else{
    printf("Result not found under this Board exam !!please Check later....");
   }
}
void keyboard(char ch ){
    printf("\n");
  	if(ch=='a' || ch =='s' || ch =='d' || ch =='f' || ch =='g' || ch =='h' || ch =='j' || ch =='k' || ch =='l' ){
  		printf("these are the midle line");

  	}else if(ch=='z' || ch =='x' || ch =='c' || ch =='v' || ch =='b' || ch =='n' || ch =='m'){
  		printf("these are the lower line ");

  	}else {
  	    printf(" these line is upper line....");
  	}
  

}



output :---

 the number is 3 2  
number is odd
 c is maximum
your character is vowel
please check your gender male & female
He 😊------------------------------------
your can deposite your vote in BJP😁
This months total bill Amout is 460
Dear customer, Your bank balance is under the Income tax  10 percentage accordingly GovtTaxs 22860.000000
your Result Grade is: F   😥
these are the midle line




swap() 
even()
maximum()
vowel()
gender()
voter()
electricity()
salary()
marksheet()
keyboard()
----------------------------------------------------------------------------------

#include<stdio.h>
void Armstron(int num);
void reversenumber(int number);
void palindrome(int number);
void sumofdigit(int number);
void count(int number);
void neon(int number) ;
void factorial(int number );
void Fibonacci(int number);
void sumofEven1to100(int number); 

int main(){
    char ch ;
    printf("Dear user enter the character for the diffrent program runs...\n");
    printf(" a - Armstrong ,r - reversenumber, p - palindrome, s- sumofdigit \n c- countdigits , n -neon ,f - factorial , b- Fibonacci \n y - sumofEven1to100");
    printf("\n please press any given referese according ");
    printf("\n \n");
    scanf("%c",&ch);
    if(ch =='a'){
       Armstron(153); 
    }else if (ch =='r'){
         reversenumber(13456);
    }else if (ch == 'p'){
         palindrome(1234321);
    }else if(ch=='s'){
         sumofdigit(145264);

    }else if (ch=='c'){
         count(124354656);

    }else if(ch=='n'){
       neon(9) ; 
    }else if (ch=='f'){
        factorial(4);
    }else if (ch=='b'){
         Fibonacci(5);
    }else if(ch=='y'){
         sumofEven1to100(100); 

    }else {
        printf("sorry your are not see carefully what are the input put here .. try again thankyou...");
    }
	return 0;
}
void Armstron(int num){
    int sum =0, rem;
    int temp = num;
    while(num>0){
        rem = num%10;
        sum = sum+rem *rem *rem;
        num = num/10;
    }
    if(temp==sum){
        printf("The num is Armstrong");
    }
    else {
        printf("number is not Armstrong");
    }
    
}
void reversenumber(int number){
    printf("\n");
    int rem , sum=0;
    while(number>0){
        rem = number%10;
        sum = sum*10+rem;
        number = number/10;
    }
    printf("reversenumber is %d",sum);
    
}
void palindrome(int number){
    
    printf("\n");
    int rem , sum = 0;
    int temp = number;
    while(number>0){
        rem = number%10;
        sum = sum*10 + rem;
        number = number/10;
    }
    if(temp == sum){
        printf("number is palindrome .... surely.");
    }
    else{
        printf("number is not palindrome");
    }
}
void sumofdigit(int number){
    printf("\n");
    int rem , sum=0;
    while(number>0){
    rem = number%10;
    sum = sum+rem;
    number= number/10;
}
printf("sum of all degits %d",sum);
}
void count(int number){
    
    printf("\n");
    int count = 0;
  while(number>0){
        
      number = number/10;
       count ++;
      
  }      printf("The totla number of digits is present...%d ",count);

    
}
void neon(int number) {
    printf("\n");
    int sum = 0,rem;
    int squre = number*number;
    while(squre>0){
        rem = squre%10;
        sum = sum+rem;
        squre= squre/10;
    }
    if(number == sum){
        printf("the number is neon .. definatily...");
    }else {
        printf("the number is not neon");
    }
    
    
}
void factorial(int number){
    printf("\n");
    int factorial =1;
    for(int i =1;i<=number;i++){
        factorial = factorial*i;
    }       
    printf("factorial number is %d",factorial);
}
void Fibonacci(int number){
    printf("\n");
    int n1=0,n2=1,n3;
    printf("Fibonacci series is : %d %d ",n1,n2);
    for(int i=1; i<= number; i++){
        n3= n1+n2;
        printf(" %d ",n3);
        n1=n2;
        n2=n3;
        
    }
    
    
}
void sumofEven1to100(int number){
    printf("\n");
    int sum =0;
    for(int i =1 ; i<=number; i++){
        if(i%2==0){
        sum = sum+i;

        }  

    }
        printf("the total sum os 1 to 100 :----- %d ",sum);

}
 output :-

Dear user enter the character for the diffrent program runs...
 a - Armstrong ,r - reversenumber, p - palindrome, s- sumofdigit 
 c- countdigits , n -neon ,f - factorial , b- Fibonacci 
 y - sumofEven1to100
 please press any given referese according 


 ALL opertion output is this :------ 



The num is Armstrong
reversenumber is 65431
number is palindrome .... surely.
sum of all degits 22
The totla number of digits is present...9 
the number is neon .. definatily...
factorial number is 24
Fibonacci series is : 0 1  1  2  3  5  8 
the total sum os 1 to 100 :----- 2550 






 


a :
	Armstrong() 

r :
	reversenumber()

p :
	palindrome()

s :
	sumofdigit()

c :
	count()

n :
	neon() 

f :
	factorial()

b:
	Fibonacci() 

y :
	sum 1 --100 even number 

otherwise :input is not matched 
=================================================
		 RETURN AND NO ARGUMENT 
   



--------------------------------------------------------------
#include<stdio.h>
int add();
int sub();
int divi();
int multi();
int mod();
int main(){
 add();
 sub();
 divi();
 multi();
 mod();

	return 0;
}

int add(){
    int a=10,  b=4;
    int c=a+b;
	printf(" add %d",c);
	return 0;
}
int sub(){
    int a=10,b=4;
    int c=a-b;
	printf(" \n  sub is :- %d",c);
	return 0;
}
int divi(){
    int a=10,b=4;
    int c=a/b;
	printf(" \n  divide is :- %d",c);
	return 0;
}
int multi(){
    int a=10,b=4;
    int c=a*b;
	printf(" \n  mutltiple is :- %d",c);
	return 0;
}
int mod(){
    int a=10,  b=4;
     int c=a%b;
	printf(" \n  mod is :- %d",c);
	return 0;
}




add()
sub()
div()
multi()
mod()
----------------------------------------------------------------------------------


#include<stdio.h>
int swap() ;
int even();
int maximum();
char vowel();
char gender();
int voter();
int electricity();
int salary();
int marksheet( );
char keyboard();


int main(){
 swap() ;
 even();
 maximum();
 vowel();
 gender();
 voter();
 electricity();
 salary();
 marksheet();
 keyboard();

	return 0 ;
}
int swap() {
    int n1=3,n2=4;
    n1 = n1+n2;
    n2=  n1-n2;
    n1= n1-n2;
    printf(" the number is %d %d  ",n1,n2);
 
}
int even(){
    int num=6;
     printf("\n");
    if(num%2==0){
        printf(" number is even ");
    }else{
        printf("number is odd");
    }

}
int maximum(){
    int a=5,  b=53,  c =33;
    printf("\n");
    if(a>b && a>c){
        printf("a is maximum");
    }else if(b>c && b>a){
        printf(" b is maximum");
    }else{
        printf(" c is maximum");
    }

}
char vowel(){
    char ch = 'a';
    printf("\n");
    if(ch=='a'|| ch =='e'|| ch =='i'|| ch =='o'|| ch =='u'){
        printf("your character is vowel");
    }else{
        printf("your character is cosonted ");
    }

}
char gender(){
    printf("\n");
    char ch = 'm';
    printf("please check your gender male & female");
    printf("\n");
    if(ch =='m' || ch =='M'){
     printf("He 😊");
}else if (ch == 'f'||ch =='F'){
    printf("she 🐶");
}else {
    printf("\nyour input is not right according gender ☠ ");
}
printf("------------------------------------");
}
int voter(){
    printf("\n");
    int age =19;
    if(age>=18){
        printf("your can deposite your vote in BJP😁");
    }else{
        printf("your age is not upto 18 + ");
    }
    

}
int electricity(){
    printf("\n");
    int units = 12;
    if(units >=1 && units <=10){
        int totalAmout = units*10;
        printf("This months total bill Amout is %d",totalAmout);
    }else if(units >=11 && units <=20){
        int totalAmout = units*15;
        printf("This months total bill Amout is %d",totalAmout);
    }else if(units >=20 ){
        int totalAmout = units*20;
        printf("This months total bill Amout is %d",totalAmout);
    }else {
        printf(" sorry have no connection under your name  .....");
    }

}
int salary(){
    printf("\n");
    int Income =23533;
     
  if(Income <= 10000){
    printf("Dear user have no Income tax your balance!! %d ",Income);
  }else if(Income >= 10001 && Income <=30000){
    float New_Balance_afterTax = Income*0.90 ;
    printf("Dear customer, Your bank balance is under the Income tax  10 percentage accordingly GovtTaxs %f",New_Balance_afterTax);
  }else if(Income >= 30001 && Income < 50000){
        float New_Balance_afterTax = Income*0.80 ;
    printf("Dear customer, Your bank balance is under the Income tax  20 percentage accordingly GovtTaxs %f",New_Balance_afterTax);
  }else if(Income > 50000){
       float New_Balance_afterTax = Income*0.50 ;
    printf("Dear customer, Your bank balance is under the Income tax  30 percentage accordingly GovtTaxs %f ",New_Balance_afterTax);
  }
  else{
    printf("Dear customer your no balance in bank account  %d ",Income);
    
  }
}

int marksheet( )
{
    int hindi =45 , english=65,  Physics=56,  science =87,  so_science=43, math =60;
    printf("\n");
int totalNumber = ((hindi + english+ Physics + science + so_science + math)/600)*100;
  
   if(totalNumber < 25 ){
    printf("your Result Grade is: F   😥");
   }else if( totalNumber >25 && totalNumber <45){
    printf("your Result Grade is: E");
   }else if (totalNumber >45 && totalNumber <50){
    printf("your Result Grade is : D"); 
   }else if (totalNumber  >50 && totalNumber <60){
    printf("your Result Grade is : C");
   }else if (totalNumber > 60 && totalNumber <80){
    printf("your Result Grade is: B");
   }else if (totalNumber > 80){
    printf(" consurgation ☺ your Result Grade is: A \n  Hurry! Well done.. ");
   }else{
    printf("Result not found under this Board exam !!please Check later....");
   }
}
char keyboard( ){
    printf("\n");
    char ch = 'a';
  	if(ch=='a' || ch =='s' || ch =='d' || ch =='f' || ch =='g' || ch =='h' || ch =='j' || ch =='k' || ch =='l' ){
  		printf("these are the midle line");

  	}else if(ch=='z' || ch =='x' || ch =='c' || ch =='v' || ch =='b' || ch =='n' || ch =='m'){
  		printf("these are the lower line ");

  	}else {
  	    printf(" these line is upper line....");
  	}
  

}


swap() 
even()
maximum()
vowel()
gender()
voter()
electricity()
salary()
marksheet()
keyboard()
----------------------------------------------------------------------------------


#include<stdio.h>
int Armstron();
int reversenumber();
int palindrome();
int sumofdigit();
int count();
int neon() ;
int factorial();
int Fibonacci();
int sumofEven1to100(); 

int main(){
    char ch ;
    printf("Dear user enter the character for the diffrent program runs...\n");
    printf(" a - Armstrong ,r - reversenumber, p - palindrome, s- sumofdigit \n c- countdigits , n -neon ,f - factorial , b- Fibonacci \n y - sumofEven1to100");
    printf("\n please press any given referese according ");
    printf("\n \n");
    scanf("%c",&ch);
    if(ch =='a'){
       Armstron(153); 
    }else if (ch =='r'){
         reversenumber(13456);
    }else if (ch == 'p'){
         palindrome(1234321);
    }else if(ch=='s'){
         sumofdigit(145264);

    }else if (ch=='c'){
         count(124354656);

    }else if(ch=='n'){
       neon(9) ; 
    }else if (ch=='f'){
        factorial(4);
    }else if (ch=='b'){
         Fibonacci(5);
    }else if(ch=='y'){
         sumofEven1to100(100); 

    }else {
        printf("sorry your are not see carefully what are the input put here .. try again thankyou...");
    }
	return 0;
}
int Armstron(){
    int num =152;
    int sum =0, rem;
    int temp = num;
    while(num>0){
        rem = num%10;
        sum = sum+rem *rem *rem;
        num = num/10;
    }
    if(temp==sum){
        printf("The num is Armstrong");
    }
    else {
        printf("number is not Armstrong");
    }
    
}
int reversenumber(){
    printf("\n");
    int number = 2145563;
    int rem , sum=0;
    while(number>0){
        rem = number%10;
        sum = sum*10+rem;
        number = number/10;
    }
    printf("reversenumber is %d",sum);
    
}
int palindrome(){
    
    printf("\n");
    int number = 1234321;
    int rem , sum = 0;
    int temp = number;
    while(number>0){
        rem = number%10;
        sum = sum*10 + rem;
        number = number/10;
    }
    if(temp == sum){
        printf("number is palindrome .... surely.");
    }
    else{
        printf("number is not palindrome");
    }
}
int sumofdigit(){
    int number=42567646;
    printf("\n");
    int rem , sum=0;
    while(number>0){
    rem = number%10;
    sum = sum+rem;
    number= number/10;
}
printf("sum of all degits %d",sum);
}
int count(){
    int number =425466;
    printf("\n");
    int count = 0;
  while(number>0){
        
      number = number/10;
       count ++;
      
  }      printf("The totla number of digits is present...%d ",count);

    
}
int neon() {
    int number =9;
    printf("\n");
    int sum = 0,rem;
    int squre = number*number;
    while(squre>0){
        rem = squre%10;
        sum = sum+rem;
        squre= squre/10;
    }
    if(number == sum){
        printf("the number is neon .. definatily...");
    }else {
        printf("the number is not neon");
    }
    
    
}
int factorial(){
    int number =5;
    printf("\n");
    int factorial =1;
    for(int i =1;i<=number;i++){
        factorial = factorial*i;
    }       
    printf("factorial number is %d",factorial);
}
int Fibonacci(){
    int number =6;
    printf("\n");
    int n1=0,n2=1,n3;
    printf("Fibonacci series is : %d %d ",n1,n2);
    for(int i=1; i<= number; i++){
        n3= n1+n2;
        printf(" %d ",n3);
        n1=n2;
        n2=n3;
        
    }
    
    
}
int sumofEven1to100(){
    int number = 100;
    printf("\n");
    int sum =0;
    for(int i =1 ; i<=number; i++){
        if(i%2==0){
        sum = sum+i;

        }  

    }
        printf("the total sum os 1 to 100 :----- %d ",sum);

}

a :
	Armstrong() 

r :
	reversenumber()

p :
	palindrome()

s :
	sumofdigit()

c :
	count()

n :
	neon() 

f :
	factorial()

b:
	Fibonacci() 

y :
	sum 1 --100 even number 

otherwise :input is not matched
---------------------------------------------------------
-----------------------------------------------------------
		RETURN AND ARGUMENT 
--------------------------------------------------------------
--------------------------------------------------------------
#include<stdio.h>
int add(int a, int b);
int sub(int a, int b);
int divi(int a, int b);
int multi(int a, int b);
int mod(int a , int b);
int main(){
 add(12,423);
 sub(12,3);
 divi(12,3);
 multi(122,43);
 mod(2,43);

	return 0;
}

int add(int a, int b){
    int c=a+b;
	printf(" add %d",c);
}
int sub(int a, int b){
    int c=a-b;
	printf(" \n  sub is :- %d",c);
}
int divi(int a, int b){
    int c=a/b;
	printf(" \n  divide is :- %d",c);
}
int multi(int a, int b){
    int c=a*b;
	printf(" \n  mutltiple is :- %d",c);
}
int mod(int a , int b){
     int c=a%b;
	printf(" \n  mod is :- %d",c);
}


add()
sub()
div()
multi()
mod()
----------------------------------------------------------------------------------

#include<stdio.h>
int swap(int n1, int n2) ;
int even(int num);
int maximum(int a,int b, int c);
char vowel(char ch);
char gender(char ch);
int voter(int num);
int electricity(int units);
int salary(int Income);
int marksheet( int hindi ,int english, int Physics,int  science,int  so_science,int math);
char keyboard(char ch);

int main(){
swap(2,3) ;
 even(23);
 maximum(23,4,54);
 vowel('e');
 gender('m');
 voter(23);
 electricity(23);
 salary(25400);
 marksheet(56,65,76,34,67,80);
 keyboard('a');


	return 0 ;
}
int swap(int n1,int n2) {
    n1 = n1+n2;
    n2=  n1-n2;
    n1= n1-n2;
    printf(" the number is %d %d  ",n1,n2);
 
}
int even(int num){
     printf("\n");
    if(num%2==0){
        printf(" number is even ");
    }else{
        printf("number is odd");
    }

}
int maximum(int a, int b, int c){
    printf("\n");
    if(a>b && a>c){
        printf("a is maximum");
    }else if(b>c && b>a){
        printf(" b is maximum");
    }else{
        printf(" c is maximum");
    }

}
char vowel(char ch){
    printf("\n");
    if(ch=='a'|| ch =='e'|| ch =='i'|| ch =='o'|| ch =='u'){
        printf("your character is vowel");
    }else{
        printf("your character is cosonted ");
    }

}
char gender(char ch){
    printf("\n");
    printf("please check your gender male & female");
    printf("\n");
    if(ch =='m' || ch =='M'){
     printf("He 😊");
}else if (ch == 'f'||ch =='F'){
    printf("she 🐶");
}else {
    printf("\nyour input is not right according gender ☠ ");
}
printf("------------------------------------");
}
int voter(int age){
    printf("\n");
    if(age>=18){
        printf("your can deposite your vote in BJP😁");
    }else{
        printf("your age is not upto 18 + ");
    }
    

}
int electricity(int units){
    printf("\n");
    if(units >=1 && units <=10){
        int totalAmout = units*10;
        printf("This months total bill Amout is %d",totalAmout);
    }else if(units >=11 && units <=20){
        int totalAmout = units*15;
        printf("This months total bill Amout is %d",totalAmout);
    }else if(units >=20 ){
        int totalAmout = units*20;
        printf("This months total bill Amout is %d",totalAmout);
    }else {
        printf(" sorry have no connection under your name  .....");
    }

}
int salary(int Income){
    printf("\n");
     
  if(Income <= 10000){
    printf("Dear user have no Income tax your balance!! %d ",Income);
  }else if(Income >= 10001 && Income <=30000){
    float New_Balance_afterTax = Income*0.90 ;
    printf("Dear customer, Your bank balance is under the Income tax  10 percentage accordingly GovtTaxs %f",New_Balance_afterTax);
  }else if(Income >= 30001 && Income < 50000){
        float New_Balance_afterTax = Income*0.80 ;
    printf("Dear customer, Your bank balance is under the Income tax  20 percentage accordingly GovtTaxs %f",New_Balance_afterTax);
  }else if(Income > 50000){
       float New_Balance_afterTax = Income*0.50 ;
    printf("Dear customer, Your bank balance is under the Income tax  30 percentage accordingly GovtTaxs %f ",New_Balance_afterTax);
  }
  else{
    printf("Dear customer your no balance in bank account  %d ",Income);
    
  }
}

int marksheet( int hindi ,int english, int Physics,int  science,int  so_science,int math)
{
    printf("\n");
int totalNumber = ((hindi + english+ Physics + science + so_science + math)/600)*100;
  
   if(totalNumber < 25 ){
    printf("your Result Grade is: F   😥");
   }else if( totalNumber >25 && totalNumber <45){
    printf("your Result Grade is: E");
   }else if (totalNumber >45 && totalNumber <50){
    printf("your Result Grade is : D"); 
   }else if (totalNumber  >50 && totalNumber <60){
    printf("your Result Grade is : C");
   }else if (totalNumber > 60 && totalNumber <80){
    printf("your Result Grade is: B");
   }else if (totalNumber > 80){
    printf(" consurgation ☺ your Result Grade is: A \n  Hurry! Well done.. ");
   }else{
    printf("Result not found under this Board exam !!please Check later....");
   }
}
char keyboard(char ch ){
    printf("\n");
  	if(ch=='a' || ch =='s' || ch =='d' || ch =='f' || ch =='g' || ch =='h' || ch =='j' || ch =='k' || ch =='l' ){
  		printf("these are the midle line");

  	}else if(ch=='z' || ch =='x' || ch =='c' || ch =='v' || ch =='b' || ch =='n' || ch =='m'){
  		printf("these are the lower line ");

  	}else {
  	    printf(" these line is upper line....");
  	}
  

}

swap() 
even()
maximum()
vowel()
gender()
voter()
electricity()
salary()
marksheet()
keyboard()
----------------------------------------------------------------------------------


#include<stdio.h>
int Armstron(int num);
int reversenumber(int number);
int palindrome(int number);
int sumofdigit(int number);
int count(int number);
int neon(int number) ;
int factorial(int number );
int Fibonacci(int number);
int sumofEven1to100(int number); 

int main(){
    char ch ;
    printf("Dear user enter the character for the diffrent program runs...\n");
    printf(" a - Armstrong ,r - reversenumber, p - palindrome, s- sumofdigit \n c- countdigits , n -neon ,f - factorial , b- Fibonacci \n y - sumofEven1to100");
    printf("\n please press any given referese according ");
    printf("\n \n");
    scanf("%c",&ch);
    if(ch =='a'){
       Armstron(153); 
    }else if (ch =='r'){
         reversenumber(13456);
    }else if (ch == 'p'){
         palindrome(1234321);
    }else if(ch=='s'){
         sumofdigit(145264);

    }else if (ch=='c'){
         count(124354656);

    }else if(ch=='n'){
       neon(9) ; 
    }else if (ch=='f'){
        factorial(4);
    }else if (ch=='b'){
         Fibonacci(5);
    }else if(ch=='y'){
         sumofEven1to100(100); 

    }else {
        printf("sorry your are not see carefully what are the input put here .. try again thankyou...");
    }
	return 0;
}int Armstron(int num){
    int sum =0, rem;
    int temp = num;
    while(num>0){
        rem = num%10;
        sum = sum+rem *rem *rem;
        num = num/10;
    }
    if(temp==sum){
        printf("The num is Armstrong");
    }
    else {
        printf("number is not Armstrong");
    }
    
}
int reversenumber(int number){
    printf("\n");
    int rem , sum=0;
    while(number>0){
        rem = number%10;
        sum = sum*10+rem;
        number = number/10;
    }
    printf("reversenumber is %d",sum);
    
}
int palindrome(int number){
    
    printf("\n");
    int rem , sum = 0;
    int temp = number;
    while(number>0){
        rem = number%10;
        sum = sum*10 + rem;
        number = number/10;
    }
    if(temp == sum){
        printf("number is palindrome .... surely.");
    }
    else{
        printf("number is not palindrome");
    }
}
int sumofdigit(int number){
    printf("\n");
    int rem , sum=0;
    while(number>0){
    rem = number%10;
    sum = sum+rem;
    number= number/10;
}
printf("sum of all degits %d",sum);
}
int count(int number){
    
    printf("\n");
    int count = 0;
  while(number>0){
        
      number = number/10;
       count ++;
      
  }      printf("The totla number of digits is present...%d ",count);

    
}
int neon(int number) {
    printf("\n");
    int sum = 0,rem;
    int squre = number*number;
    while(squre>0){
        rem = squre%10;
        sum = sum+rem;
        squre= squre/10;
    }
    if(number == sum){
        printf("the number is neon .. definatily...");
    }else {
        printf("the number is not neon");
    }
    
    
}
int factorial(int number){
    printf("\n");
    int factorial =1;
    for(int i =1;i<=number;i++){
        factorial = factorial*i;
    }       
    printf("factorial number is %d",factorial);
}
int Fibonacci(int number){
    printf("\n");
    int n1=0,n2=1,n3;
    printf("Fibonacci series is : %d %d ",n1,n2);
    for(int i=1; i<= number; i++){
        n3= n1+n2;
        printf(" %d ",n3);
        n1=n2;
        n2=n3;
        
    }
    
    
}
int sumofEven1to100(int number){
    printf("\n");
    int sum =0;
    for(int i =1 ; i<=number; i++){
        if(i%2==0){
        sum = sum+i;

        }  

    }
        printf("the total sum os 1 to 100 :----- %d ",sum);

}



a :
	Armstrong() 

r :
	reversenumber()

p :
	palindrome()

s :
	sumofdigit()

c :
	count()

n :
	neon() 

f :
	factorial()

b:
	Fibonacci() 

y :
	sum 1 --100 even number 

otherwise :input is not matched
------------------------
char 
float 
return and argument 