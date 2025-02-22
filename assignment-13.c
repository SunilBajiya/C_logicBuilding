welcome to india through function
#include<stdio.h>
void show();
int main(){
    
 show();
 return 0;
}

void show(){
    printf("welcome to My india ...");
}

--------------------------------------------------------------
#include<stdio.h>
void add();
void Sub();
 void divid();
void multi();
 void mod();
 
int main(){
 add();
 Sub();
 divid();
multi();
mod();

 return 0;
}

void add(){
    
    int a,b,c;
    printf("enter the value of a and b ");
    scanf("%d %d",&a, &b);
    c = a+b;
    printf("add :- %d",c);
}


void Sub(){
    
    int a,b,c;
    printf(" \n \nenter the value of a and b ");
    scanf("%d %d",&a, &b);
    c = a-b;
    printf("sub :- %d",c);
}


void divid(){
    
    int a,b,c;
    printf(" \n \nenter the value of a and b ");
    scanf("%d %d",&a, &b);
    c = a/b;
    printf("divid :- %d",c);
}
void multi(){
    
   int a,b,c;
    printf(" \n \nenter the value of a and b ");
    scanf("%d %d",&a, &b);
    c = a*b;
    printf("multi :- %d",c);
}
void mod(){
    
    int a,b,c;
    printf(" \n \nenter the value of a and b ");
    scanf("%d %d",&a, &b);
    c = a%b;
    printf("mod :- %d",c);
}


add()
sub()
div()
multi()
mod()
----------------------------------------------------------------------------------
#include<stdio.h>
  void  swap() ;
  void  even();
  void  maximum();
  void  vowel();
  void  gender();
  void  voter();
  void  electricity();
  void  salary();
  void  marksheet();
  void  keyboard();

 
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


 return 0;
}

void swap(){
    
    int a,b;
    printf("enter the value of a and b for the swap number ");
    scanf("%d %d",&a, &b);
    a = a+b;
    b = a-b;
    a= a-b;
    printf("add :- %d %d",a,b);
}


void even(){
    
    int n;
    printf(" \n \nenter the number for check the even or odd  ");
    scanf("%d ",&n);
    if(n%2==0){
        printf("envn number ");
    }else {
        printf("odd number ");
    }
}


void maximum(){
    
    int a,b,c;
    printf(" \n \nenter the value of a and b  and c --which is maximum");
    scanf("%d %d %d",&a, &b,&c);
   if(a>b && a>c){
       printf("a is maximum");
   }else if(b>c && b>a){
       printf(" b is muximum");
   }else{
       printf(" c is muximum");
   }
}
void vowel(){
    
   char ch;
    printf(" \n \n enter  any character for the vowel checking");
    scanf("%c",&ch);
    if(ch=='a' || ch =='e' || ch =='i' || ch =='o' || ch=='u'){
        printf("vowel");
    }else{
        printf("consonate");
    }
   
}
void gender(){
    
    char ch;
    printf(" \n \nenter the character for the male and female");
    scanf("%c",&ch);
   if(ch =='m' ){
       printf("male");
   }else {
       printf("female");
   }
}

void voter(){
    int age;
    printf("enter you age.. for the vote");
    scanf("%d",&age);
    if(age>=18){
        printf("you can give votes");
    }else{
        printf("your not give votes");
    }
    
}

void electricity(){
    int units;
    printf("enter the units this months for the electricity bill");
    scanf("%d",&units);
    if(units >=1 && units <=10){
        int totalAmout = units*10;
        printf("your bill this months %d",totalAmout);
    }else if(units >=11 && units <=20){
        int totalAmout = units*15;
        printf("your bill this months %d",totalAmout);
    }else if(units >=20 ){
        int totalAmout = units*20;
        printf("your bill this months %d",totalAmout);
    }else {
        printf(" no connection  .....");
    }
    
}
void salary(){
     int Income;
  int tax;
  printf("Please Enter the total income:- \n");
  scanf("%d",&Income);
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

void marksheet(){
    int hindi ,english, Physics, science, so_science, math;
     printf("Well come to the Rajasthan state Bord Mark sheet Portal");
    printf("Enter the your subjects marks :- \n  hindi :\n english :\n Physics :\n science :\n so_science :\n math :\n ");
    scanf("%d %d %d %d %d %d",&hindi, &english , &Physics, &science ,&so_science, &math);
    int totalNumber = ((hindi + english+ Physics + science + so_science + math)/600)*100;
  
   if(totalNumber < 25 ){
    printf("Grade : F");
   }else if( totalNumber >25 && totalNumber <45){
    printf("Grade : E");
   }else if (totalNumber >45 && totalNumber <50){
    printf("Grade : D"); 
   }else if (totalNumber  >50 && totalNumber <60){
    printf("Grade : C");
   }else if (totalNumber > 60 && totalNumber <80){
    printf("Grade : B");
   }else if (totalNumber > 80){
    printf("Grade : A \n  Hurry! Well done.. ");
   }else{
    printf("Result not found !!please Check later....");
   }
}


void keyboard(){
    char ch;
  	printf("enter the any character for the keyboard ");
  	scanf("%c",&ch);
  	if(ch=='a' || ch =='s' || ch =='d' || ch =='f' || ch =='g' || ch =='h' || ch =='j' || ch =='k' || ch =='l' ){
  		printf("these are the midle line");

  	}else if(ch=='z' || ch =='x' || ch =='c' || ch =='v' || ch =='b' || ch =='n' || ch =='m'){
  		printf("these are the lower line ");

  	}
  	
  	else{
  		printf("The input is not matched");
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
void    Armstrong()    ;
void   reversenumber();
void   palindrome()   ;
void  	sumofdigit();
void  	count()   ;
void  	neon()    ;
void  	factoriavoid();
void 	Fibonacci()    ;
void    sum();  

 // function declaration 
 int main(){
     char ch ;
     printf("enter the character ");
     scanf("%c",&ch);
     if(ch =='a'){
       Armstrong() ;  
     }else if(ch =='r'){
             reversenumber();

     }else if (ch =='p'){
             palindrome()   ;

     }else if(ch =='s'){
         sumofdigit();
     }else if (ch =='c'){
         	count()   ;
     }else if (ch=='n'){
        neon()    ; 
     }else if (ch =='f'){
         factoriavoid();
     }else if (ch =='b'){
        Fibonacci()    ; 
     }else if(ch=='y'){
         sum();
     }else {
         printf("input is invail please try again");
     }
      
     
     // calling
     
     return 0;
 }
 
 
 void  Armstrong()   {
     int num = 151;
     int sum= 0;
     int rem ;
     int temp = num;
     while (num>0){
         rem = num%10;
         sum = sum +rem *rem *rem;
         num = num/10;
     }
     if(temp==sum){
         printf("Armstrong number");
     }else{
         printf("number not Armstrong");
     }
     
 }
 void   reversenumber(){
     int number =1232434;
     int sum = 0;
     int rem;
    
     while(number>0){
         rem = number%10;
         sum = sum*10+rem;
         number = number/10;
         
     }
     printf("%d",sum);
     
 }
 void   palindrome()  {
       int number =1232434;
     int sum = 0;
     int rem;
     int temp = number;
    
     while(number>0){
         rem = number%10;
         sum = sum*10+rem;
         number = number/10;
         
     }
    if(temp == sum){
        printf("palindrome number");
    }else{
        printf("not palindrome number");
    }
     
     
 }
void	sumofdigit(){
  int sum=0;
	for(int i =1; i<=100; i++){
		sum = sum+i;
	
	}
		printf("%d",sum);

}
void	count()  {
    int num = 21344552;
    int count=0;
    while(num>0){
        num =   num/10;
        count++;
    }
    
}

void	factoriavoid() {
    int fact=1;
	for(int i =1; i<=5; i++){
		fact = fact*i;
	}
	printf("%d",fact);
		
    
}
void	Fibonacci (){
     int n1 =0,n2=1,n3;
    printf("%d %d ",n1,n2);
    for(int i = 2; i<=10;i++){
    n3= n1+n2;
    printf("%d ",n3);
    n1= n2;
    n2=n3;
    }
    
}
void   sum(){
    int sum =0;
    int num =100;
    int rem;
    for(int i =1; i<=num;i++){
        rem = num%10;
        sum = sum+rem;
        num = num/10;
        
    }
    printf("%d",sum);
    
}
void neon(){
    int num = 9;
	int squar = num*num;
	int n = squar;
	int sum =0;
    int rem;
	while(n>0){
		rem = n%10;
		sum = sum+rem ;
		n = n/10;
	}
     if(sum== num){
     	printf("neon number");
     }else{
     	printf("not neon number");
     }
}
 // function definations.....

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