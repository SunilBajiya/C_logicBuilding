write a c program input character and check character is vowel and consonant ?

#include<stdio.h>
int main(){
	char ch ;
	printf("Enter the character" );
	scanf("%c",&ch);
	if(ch=='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u'){
		printf("These are the vowel elements");

	}else{
		printf("these are the consonant");
	}
}

--------------------------------------------------------------------------
write a c program input character :q,w,e,r,t,y,u,i,o,p :upper line 
			otherwise : input is not matched 

#include<stdio.h>
  int main(){
  	char ch;
  	printf("enter the any character");
  	scanf("%c",&ch);
  	if(ch=='q' || ch =='w' || ch =='e' || ch =='r' || ch =='t' || ch =='y' || ch =='u' || ch =='i' || ch =='o' || ch == 'p'){
  		printf("these are the upper line");

  	}else{
  		printf("The input is not matched");
  	}
  }
--------------------------------------------------------------------------
write a c program input character :a,s,d,f,g,h,j,k,l :mid line 
		  otherwise :input is not matched 
		  #include<stdio.h>
  int main(){
  	char ch;
  	printf("enter the any character");
  	scanf("%c",&ch);
  	if(ch=='a' || ch =='s' || ch =='d' || ch =='f' || ch =='g' || ch =='h' || ch =='j' || ch =='k' || ch =='l' ){
  		printf("these are the midle line");

  	}else{
  		printf("The input is not matched");
  	}
  }

--------------------------------------------------------------------------
write a c program input character :z,x,c,v,b,n,m, :lower line 
		  otherwise :input is not matched 

#include<stdio.h>
  int main(){
  	char ch;
  	printf("enter the any character");
  	scanf("%c",&ch);
  	if(ch=='z' || ch =='x' || ch =='c' || ch =='v' || ch =='b' || ch =='n' || ch =='m'){
  		printf("these are the lower line ");

  	}else{
  		printf("The input is not matched :-\n");
  	}
  }

--------------------------------------------------------------------------
write a c program input number and print 
	1:sunday
	2 :Monday 
	all week days 

	8--->kuch :input is not valid 
#include<stdio.h>
  int main(){
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
  }
--------------------------------------------------------------------------
write a c program input number and print 
	1 :janu
	2 :feb 
	3 :march 
	total months 

	#include<stdio.h>

  int main (){
  	int num;
  	printf("enter the number for the pritn the month's name");
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
  }

	otherwise :input is not matched 
--------------------------------------------------------------------------
write a c program input a character :
		a :aam 
		b :iit baba
		m :Monalisa
		otherwise :input is not matched 


  #include<stdio.h>
  int main(){
  	char ch;
  	printf("enter the character for the names:-\n");
  	scanf("%c",&ch);
  	if(ch =='a'){
  		printf("aam");
  	}else if (ch == 'b'){
  		printf("IIT BABA 😁");
  	}else if (ch== 'c'){
  		printf("Monalisa");
  	}else{
  		printf("the input is not matched :-\n");
  	}
  }
----
		
--------------------------------------------------------------------------
write a c program input character :
		a :
			two number input :addition 

		s:
			two number input :substraction

		d :
			two number input :divide

		m :
			two number input :multiply

		otherwise :input is not matched 




#include<stdio.h>
  int main(){
  	char ch;
  	printf("enter the character for the names:-\n");
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
  }
 --------------------------------------------------------------------------