write a c program :
	input character :e 
		input number and check number is even and odd

	otherwise :input is not matched 
#include<stdio.h>
	int main(){
		char ch;
		printf("enter the character ");
		scanf("%c",&ch);
		if(ch == 'e'){
			int num ;
			printf("enter the number");
			scanf("%d",&num);
			if(num%2 ==0){
				printf("number is even");
			}else{
				printf("number is odd");
			}
		}else {
			printf("input is not valid");
		}
	}
--------------------------------------------------------------
write a program :
	input character :v 
		input age :age greater than 18 :valid 
		otherwise :you are not valid for vote 

	otherwise :
		error 


	#include<stdio.h>
	int main(){
		char ch;
		printf("enter the character ");
		scanf("%c",&ch);
		if(ch == 'v'){
			int age ;
			printf("enter the age");
			scanf("%d",&age);
			if(age>18){
				printf("valid");
			}else{
				printf("invail");
			}
		}else {
			printf("input error");
		}
	}	
--------------------------------------------------------------
write a program :
	input character :k 
		input character :check keyboard line 
		upper and mid and lower line 

	otherwise :input is not matched 


	#include<stdio.h>
	int main(){
		char ch;
		printf("enter the character ");
		scanf("%c",&ch);
		if(ch == 'k'){
			
			printf("enter the age");
			scanf("%d",&age);
			if(age>18){
				printf("valid");
			}else{
				printf("invail");
			}
		}else {
			printf("input error");
		}
	}
--------------------------------------------------------------
write a c program :
	input character :

	#include<stdio.h>
	int main(){
    char ch;
    printf("enter the character for the multiple actions");
    scanf("%c",&ch);
    if(ch =='m'){
    int num;
  	printf("enter the number for the pritn the month's name \n");
  	scanf("%d",&num);
  	if(num ==1){
  		printf("January");
  	}else if (num == 2){
  		printf("February");
  	}else if (num== 3){
  		printf("March");
  	}else if (num ==4){
  		printf("April");
  	}else if(num ==5){
  		printf("May");
  	}else if (num ==6){
  		printf("June");
  	}else if(num==7) {
  		printf("Jully");
  	}else if (num ==8){
  	       printf("August");
  	}else if( num ==9){
  	    printf("September");
  	}else if (num==10){
  	    printf("Octomber");
  	}else if (num == 11){
  	   printf("November") ;
  	}else if (num ==12){
  	    printf("December");
  	}else{
  		printf("the input is not matched");
  	}
    }else if (ch =='w'){
    int num;
  	printf("enter the number for the pritn the weeks name");
  	scanf("%d",&num);
  	if(num ==1){
  		printf("sunday");
  	}else if (num == 2){
  		printf("Monday");
  	}else if (num== 3){
  		printf("tuesday");
  	}else if (num ==4){
  		printf("wednesday");
  	}else if(num ==5){
  		printf("thursday");
  	}else if (num ==6){
  		printf("friday");
  	}else if(num==7) {
  		printf("saturday");
  	}else{
  		printf("the input is not matched");
  	}
    }else if(ch=='g'){
  		char ch;
  		printf("enter the character for the gender ");
  		scanf("%c",&ch);
  		if(ch =='m' || ch == 'M'){
  			printf("male");
  		}else if(ch =='f' || ch =='F'){
  			printf("female");
  		}else{
  			printf("input  is not matche try againg");
  		}
  	}else if(ch =='v'){
  		char ch ;
	printf("Enter the character for check the vowel character" );
	scanf("%c",&ch);
	if(ch=='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u'){
		printf("These are the vowel elements");

	}else{
		printf("these are the consonant");
	}
  	}else if (ch == 'o'){
  	 char ch;
  	printf("enter the character for the for the calculator performance a-add, s-sub, m-multi, d-divid:-\n");
  	scanf("%c",&ch);
  	if(ch =='a'){
  		printf("addition of the two number\n");
  		int a,b;
  		printf("enter the value of a :-\n");
  		scanf("%d",&a);
  		printf("enter the value of b :-\n");
  		scanf("%d",&b);
  		int c = a+b;
  		printf(" addition of the numbers%d",c);
       

  	}else if (ch == 's'){
  		printf("substraction of the two number\n");
  		int a,b;
  		printf("enter the value of a:-\n");
  		scanf("%d",&a);
  		printf("enter the value of b :-\n");
  		scanf("%d",&b);
  		int c = a-b;
  		printf(" substraction of the numbers%d",c);
  	}else if (ch== 'd'){
  		printf("divide of the two number\n");
  		int a,b;
  		printf("enter the value of a :-\n");
  		scanf("%d",&a);
  		printf("enter the value of b :-\n");
  		scanf("%d",&b);
  		int c = a/b;
  		printf(" divide of the numbers%d",c);  
  		}else if(ch =='m'){
  		printf("multiply of the two number\n");
  		int a,b;
  		printf("enter the value of a :-\n");
  		scanf("%d",&a);
  		printf("enter the value of b :-\n");
  		scanf("%d",&b);
  		int c = a*b;
  		printf(" multiply of the numbers%d",c);  
  	}else{
  		printf("input is not matched try again:-\n");
  	}	

  	}else if(ch =='a'){
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
  	}else if (ch =='e'){
  		int unit;
  		printf("welcome to the electric bill portal\n \n  ");
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

  	}else if (ch == 't'){
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
}else if (ch =='u'){
  printf("name : - rahul \n");
  printf(" bank_details:- RBI \n");
  int Income;
  int tax;
  printf("Please Enter the total income :- \n");
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
    return 0;
  }

}else if(ch =='z'){
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
}else if (ch =='y'){
	int a,b;
  printf("enter the value of a ,b");
  scanf("%d%d",&a,&b);
  if(a >b ){
    printf("a is maximum");
  }else {
    printf("b is maximum");
  }
}else if (ch =='p'){
	int temperature;
	printf("enter the temperature today....");
	scanf("%d",&temperature);
	printf("enter the choice which forms you want to convet the temperature ");
	if (temperature== 'f'){
		int degree ;
		printf("please enter the degree of temperature");
		scanf("%d",&degree);

		float foranihgt = (degree * 9/5) +32;
		printf("the foranight temperature %f", foranihgt);
	
	}else if(temperature=='c'){
		int foranihgt ;
		printf("please enter the foranihgt of temperature");
		scanf("%d",&foranihgt);
      //   (°F) - 32) * 5/9.
		float calcious = (foranihgt -32) * 5/9;
		printf("the foranight temperature %f", calcious);
	}else {
		printf("input is not matched please try to later .... !!!");
	
	return 0;
}
}
	    
	}

    
  
	-------------------------------------------------------------------------------------


	w :
		week

	g :
		gender :m | M male 
			f | F female 
	v :
		vowel and consonant

	s :
		salary code 

	a :
		marksheet 

	t :
		greeting of timing 

	e :
		electricity 

	u :
		tax calculator 

	p :
		temperature convertor 

	
	y :
		two number maximum

	z :three number minimum 

	c :
		calculator 

	othwise :input is not matched 