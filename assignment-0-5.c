write a c program input number :
  1---- 10 :number is present between 1 to 10 
  11 ---20 :number is present between 11 to 20 
  otherwise :input is not matched 
#include<stdio.h>
int main(){
  int num;
  printf("Enter the number to check 1 to 10 beteween");
  scanf("%d",&num);
  if(num > 1 && num < 10){
    printf("the number is present in the range 1 to 10");
  }else if (num >11 && num <20) {
    printf("the number is present in the range 11 to 20");
  }else{
    printf("the  input is not matched");
  }
}
-------------------------------------------------------------
C program to convert temperature from Fahrenheit to Celsius and Celsius to Fahrenheit
celsius 
f---->c 
fahrenheit
c---f 
----------------------------------------------------------
 C program to enter student marks and find percentage and grade
A college has the following rules for the grading system:


5 marks (grade + %)
1. Below 25 – F
2. 25 to 45 – E
3. 45 to 50 – D
4. 50 to 60 – C
5. 60 to 80 – B 
6. Above 80 – A


#include<stdio.h>
int main(){
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
   return 0;

}

--------------------------------------------------------------
Write a c program to read the roll no, name,fnname and marks of three subjects and calculate the total, percentage and division.
Test Data :
Input the Roll Number of the student :784
student name : 
fname:
mname:
address:
contact:
Input the marks of Physics, Chemistry and Computer Application : 70 80 90
total: 
precentage : % 
division:

#include<stdio.h>
int main(){
  double rollNo ;
  char name[]="xyz";
  char fName[] = "abc";
  char mothersN[] = "god";
  char address[] = " shri ram nager siker ..";
  double contact = 9843634567;

  int Physics , chemistry , computer_application;
  printf("please enter your exam RollNo. \n");
  scanf("%d",&rollNo);
  printf("Enter your subject marks :- \n Physics :- \n chemistry :- \n computer_application");
  scanf("%d %d %d ", &Physics, &chemistry, &computer_application);
  int totalNumber = Physics + chemistry + computer_application;
   int total_percentag = ( Physics + chemistry + computer_application/300)*100;
   if(totalNumber >= 25 ){
    printf("Grade : F");
   }else if( total_percentag >=25 && total_percentag <= 45){
    printf("Grade : E");
   }else if (total_percentag >= 45 && total_percentag <= 50){
    printf("Grade : D"); 
   }else if (total_percentag  >= 50 && total_percentag <= 60){
    printf("Grade : C");
   }else if (total_percentag >= 60 && total_percentag <= 80){
    printf("Grade : B");
   }else if (total_percentag >= 80){
    printf("Grade : A \n  Hurry! Well done.. ");
   }else{
    printf("Result not found !! Check later....");
   }
  pri
 return 0;

}

-------------------------------------------
salalry :
holidays (1) =full salary 
2-5 =5% 
5-14 =10% 
15 =50% 
else =not salary 
#include<stdio.h>
int main(){
printf("name:- rahul\n");
printf("address- jaipur Rajasthan\n");
printf("RBI\n");
  int salary;
  int holidays;
  int alots_holiday=1;
  printf("Enter the salary hand on");
  scanf("%d",&salary);
  printf("Enter the how many holidays takes in this month's");
  scanf("%d",&holidays);
  if(holidays == 0){
    printf("Your salary is sucessfully sent without any charges your account please check your balance %d",salary);
  }else if(holidays >= 2 && holidays <=5){
    float month_salary = salary/5;
    float new_month_salary = salary- month_salary;
    printf("hello Dear, welcome to the account Portal !! Your this month salary %f",new_month_salary);
  }else if(holidays >= 5 && holidays <= 14){
     float month_salary = salary/10;
    float new_month_salary = salary-month_salary;

    printf("hello Dear, welcome to the account Portal !! Your this month salary %f",new_month_salary);
  }else if(holidays <= 15){
     float month_salary = salary/15;
    float new_month_salary = salary -month_salary;
   
    printf(" Dear user, welcome to the account Portal !! Your this month salary %f",new_month_salary);
  }
  else {
    printf("Dear user this month salary accountent had hold , because your holidays is more then  %d",holidays);
   
    return 0;
  }
}


output : 
name:
address: 
bank details: 
salary : 
alot :
 holidays 
--------------------------------------------------
electric city bill : 
4 unit 
40 
1- 10 = 10% 
11-20 =15% 
21-40 =30% 
50 =50% 

output : 
name:
unit :3 
amout 30 
discout : 10% 
total pay amount : 



#include<stdio.h>
int main(){
   int unit;
   char name[] ="JayGopal";
   int amout ;

  printf("Enter the unit this month  ");
  scanf("%d",&unit);
  if(unit == 0){
    printf("No .. electric city used in this month Total amout is :- 00 ");
  }else if(unit >= 1 && unit <=10){
    int unit_ammout = unit * 10;
    printf("hello Dear, Your this month electric city charges 10 rupess per month %d :",unit_ammout);
  }else if(unit>= 11 && unit <= 20){
    int unit_ammout = unit * 15;
    printf("hello Dear, Your this month electric city charges  15 rupess per month %d :",unit_ammout);
  }else if(unit>= 21 && unit <= 40){
    int unit_ammout = unit * 20;
    printf("hello Dear, Your this month electric city charges  20 rupess per month %d:",unit_ammout);

  }else if(unit >= 50 ){
     int unit_ammout = unit * 50;
          printf("hello Dear, Your this month electric city charges  50 rupess per month %d:",unit_ammout);
  }else {
    printf("Your no connection in the electric city....");
  }
}



------------------------------------------------------
Tax Calculator
Write a Java program that calculates income tax for individuals based on the following criteria:

Income <= 10,000: No tax
10,001 - 30,000: 10% tax
30,001 - 50,000: 20% tax
Income > 50,000: 30% tax


#include<stdio.h>
int main(){
  printf("name : - rahul \n");
  printf(" bank_details:- RBI \n");
  int Income;
  int tax;
  printf("Please Enter the total income :- \n");
  scanf("%d",&Income);
  if(Income <= 10000){
    printf("Dear user have no Income tax your balance!! ",Income);
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
    printf("Dear customer your no balance in bank account ",Income);
    return 0;
  }
}


--------------------------------------------------------
BMI Calculator
Create a program that calculates the Body Mass Index (BMI) based on a person's weight and height.
Categorize the BMI using the following ranges:

BMI < 18.5: Underweight
18.5 <= BMI < 24.9: Normal weight
25 <= BMI < 29.9: Overweight
BMI >= 30: Obesity

-----------------------------

#include<stdio.h>
int main(){

   float  weight;
   float height;
  printf("Enter your weight");
  scanf("%f",&weight);
  printf("Enter your height");
  scanf("%f",&height);
  float BMI_calculate = weight/inch*inch;
  if(BMI_calculate < 18.0){
    printf("You are the Underweight ");
  }else if(BMI_calculate >=18.5 && BMI_calculate <24.9){
   printf("You are Normal Overweight");
  }else if(BMI_calculate>=25 && BMI_calculate <29.9){
  printf("You are Overweight");
  }else if(BMI_calculate>= 30){
   printf("Obesity");
  }
  else {
    printf("Enter the right wight and height........ !! try again.....");
   
    return 0;
  }
}






----------------------------------------------------------
 Time of Day Greeting
Create a program that asks for the time of day (morning, afternoon, evening) and then greets the user accordingly. For example, "Good morning!" if the time is morning.



#include<stdio.h>
int main(){
  int time;
  char stamp[]= "PM";
  printf("Please Enter the current Time....");
  scanf("%d",&time);
  if(time>= 5 && time<=12){
      if(stamp=="AM" || stamp=="am"){
       printf("GoodMorning......");
      }else{
     printf("GoodEvening......");
      }
  }else if(time>=12 && time<=18){
       printf(" GoodAfterNoon......");
  }else if(time >=18 && time<=24) {
    printf("GoodEvening......");
  }else{
      printf("GoodEvening");
  }
    return 0;
  
}

--------------------------------------------------------
Menu Selection
Design a simple restaurant menu system that takes a customer's
 choice (1-3) and displays the selected food item and its price. Use if-else if-else statements.

#include<stdio.h>
int main(){
  int choice ;
  printf("Please Enter your choice  between 1 2 3 ");
  scanf("%d",&choice);
  if(choice==1){
    printf("--------------list of food item------------------\n \n");
    printf("1. pizaa   - price-300 \n 2. barger - price-40 \n 3. chaumin - price-70");
  }else if(choice ==2){
    printf("---------- list of JUSH item------------------\n \n");
    printf("1. banana JUSH   - price-30/glass \n 2.mango JUSH - price-40/glass \n 3. papya - price-70/glass");
    
  }else if(choice ==3){
       printf("--------------list of favriout clouth item----------------\n \n");
    printf("1. t-shirt   - price-300 \n 2. shirt - price-400 \n 3. Gins - price-700");
  }else{
      printf("input is invaild please try agine....");
     
  }return 0;
  }
    
  printf("Please Enter the current Time....");
  scanf("%d",&time);
  if(time>= 5 && time<=12){
      if(stamp=="AM" || stamp=="am"){
       printf("GoodMorning......");
      }else{
     printf("GoodEvening......");
      }
  }else if(time>=12 && time<=18){
       printf(" GoodAfterNoon......");
  }else if(time >=18 && time<=24) {
    printf("GoodEvening......");
  }else{
      printf("GoodEvening");
  }
    return 0;
  
}


------------------------------------------------------
Ticket Booking System
Design a ticket booking system for a cinema that calculates the ticket price based on the age of the customer
. Children (age < 12) get a 50% discount, while seniors (age >= 65) get a 30% discount.

#include<stdio.h>
int main(){
 int age;
 int ticket_price;
  printf("welcome to the ticket booking system....\n \n");
  printf("Enter your age");
  scanf("%d",&age);
  printf("Enter  the ticket price ");
  scanf("%d",&ticket_price);
  while(age!=0){
  if(age < 12){
    int ticket_price_child = ticket_price/2;
    int ticket_priceUp = ticket_price-ticket_price_child;
    printf("Your 50 percentage off for Children %d ",ticket_priceUp);
   }else if(age >=65) {
        int ticket_price_old = (ticket_price/100)*30;
        int ticket_priceold = ticket_price-ticket_price_old;
    printf(" You ticket price pay.... %d ",ticket_priceold);
  }else{
      printf("no discount avilable for the ticket_price ");
  }
    return 0;
  
}
}
-------------------------------------------------------------
Letter Grade Calculator
Write a program that accepts a student's score as input and calculates their letter grade using if-else if-else statements.
Consider the standard letter grading system (A, B, C, D, F).

-------------------------------------------------------------
#include<stdio.h>
int main(){
  int a,b,c;
  printf("enter the value of a ,b ,c");
  scanf("%d%d%d",&a,&b,&c);
  if(a >b && a>c){
    printf("a is maximum");
  }else if(b >c && b >a){
    printf("b is maximum");
  }else{
    printf("c is maximum");
  }
  
}

three number maximum 

-------------------------------------------------------------------
five number maximum 
#include<stdio.h>
int main(){
  int a,b,c,d,e;
  printf("enter the value of a ,b ,c, d, e");
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  if(a >b && a>c && a>d && a >e){
    printf("a is maximum");
  }else if(b >c && b >a && b>d && b>e){
    printf("b is maximum");
  }else if(c >d && c >e && c>b && c>a) {
    printf("c is maximum");
  }else if (d>e && d>a && d>b && d>c){
      printf("d is maximum");
  }else if (e>a && e>b && e>c & e>d){
      printf("e is maximum");
  }else {
      printf("input is invalid");
  }
  
}



-------------------------------------------------------------------
ten number maximum 

-------------------------------------------------------------------



#include <stdio.h>

int main()
{
 int num;
 printf("please enter the number");
 scanf("%d", &num);
 if(num >40){
  printf("numer is greater then 40 ");
 }else if (num > 20){
   printf("the number is the greater then 20");
 }else if (num > 5){
  printf("the number is the greater then 5");
 }else{
 printf("the number is less then");
    return 0;
 }
}