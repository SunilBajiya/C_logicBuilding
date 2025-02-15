10 ----1 dry run 
#include<stdio.h>
int main(){
	int a =10;
	while(a >=1){
		printf("%d ",a);
		a--;
	}
	return 0;
}

// dry run the code 
first a =10 --- (10>=1)-- true then -- print 10 --- then 10-- = 9,
(9>=1) - true -- then print 9 and 9-- = 8;
(8>=1) - true then print  8 and 8-- = 7,
(7>=1) - true then print  7 and 7-- = 6,
(6>=1) - true then print  6 and 6-- = 5,
(5>=1) - true then print  5 and 5-- = 4,
(4>=1) - true then print  4 and 4-- = 3,
(3>=1) - true then print  3 and 3-- = 2,
(2>=1) - true then print  2 and 2-- = 1,
(1>=1) - true then print  1 and 1-- = 0,
(0>=1) - false then conditon false  exits this loops
---------------------------------------------

98---45 number print 
#include<stdio.h>
int main(){
	int n = 98;
	while(n>=45){
		printf("%d ",n);
		n--;
	}
	return 0;
}
---------------------------------------------------
1 ---- 10 even number (dry run ) 
#include<stdio.h>
int main(){
	int n = 1;
	while(n<=10){
	    if(n%2==0){
	       printf("%d ",n);
	      
	    }
	     n++;
	}
	return 0;
}

/// dry run the code....
n=1 (1<=10) -- ture	then check the 1%2==0 = false then exits the if block and 1++ = 2 ---> 
(2<=10)-- true then check the 2%2==0 true then print the 2 and increment the 2++ = 3 --->
(3<=10) --- true then check the  3%2==0 false exite shte if block and increment the 3++ =4 -->
(4<=10) -- true then check the if block 4%2 ==0 print the 4 and  increment the value of 4++ =5 -->
(5<=10) --- true then check the if block 5%2 ==0  = false not 0 exits the if block and increment the value of 5++ = 6;
(6<=10) -- true then check the if block 6%2 = 0  this is the true and print the value and the increment 6++ = 7;
(7<=10) -- true then check the if block 7%2 ==0 this is false and exits the if block and increment the 7++ = 8;
(8<=10) -- ture then chekc the if block 8%2 ==0 this is the true and print the value of the if block and increment the 8++ =9;
(9<=10) -- true then check the if block (9%2==0) false then increment the value 9++10;
(10<=10) -- true then check the if block (10%2==0) ture print the value of 10 then increment the value of the 10++ =11 --->
(11<=10) -- false exite the current loops;
-------------------------------------------------------
23-- 89 even number 

#include<stdio.h>
int main(){
	int number= 23;
	while(number<=89){
		if(number%2==0){
			printf("%d ",number);
		}
		number ++;
	}
	return 0;
}

-------------------------------------------------------
56 ----34 even number 

#include<stdio.h>
int main(){
	int number= 56;
	while(number>=34){
		if(number%2==0){
			printf("%d ",number);
		}
		number --;
	}
	return 0;
}


---------------------------------------------------
10 ---1 odd number 
#include<stdio.h>
int main(){
	int n =10;
	while(n>=1){
		if(n%2!=0){
		printf("%d",n);
	}
	n--;

	}
	return 0;
}

--------------------------------------------------------
1 --- 10 number sum (dry run )

#include<stdio.h>
int main(){
	int n =1;
	int sum =0;
	while(n<=10){
		sum	 = sum+n;
		n++;
	}
	printf("%d ",sum);
	return 0;
}

/// dry run the code 
 start the code write thinks ----
 n =1 intinal sum =0 becase -- i want to the store the value in sum --- sum+n where n is the 1 ---
 (1<=10) -- ture --- then sum = 0+1 -- store in the sum --- then increment the number 1++ = 2 --- again check the
 (2<=10) -- ture then sum = 1+2 = 3 -- store in the sum -- then increment the  2++ = 3 then again check the 
 (3<=10)  -- tuue then cum = 3+3 = 6 -- store in the sum -- then the increment the 3++ =4 then again check the value
 (4<=10) -- ture THEN sum = 6+4= 10 -- store in the sum -- then the increment the 4++ = 5 then again check the value
 (5<=10)  -- ture then sum = 10+5 =15 -- store in the sum -- then the increment the 5++ =6 thn again check the value
 (6<=10)  -- ture then sum = 15+6 -- 21 -- store in the sum -- then the increment the 6++ =7 the again	 check the value
 (7<=10) --- true then sum = 21 +7 = 28 -- store in the sum -- then the increment the 7++ =8 the again check the value 
 (8<=10)  -- ture then sum = 28+8 = 36 -- store in the sum 	-- 	then increment the 8++ =9 	the again check	the value,
 (9<=10) -	 true then sum = 36+9 = 45 -- 	store in the sum -- then	increment the 	9++ =10 the again check the value,
 (10<=10) -- ture then sum 	= 45+10 = 55 --	 store in the sum -- then	increment the 	10++ 11 the increment check the value -- conditon is false then print the sum value in the printf function--

 printf("55") the total sum of the 1-10 


--------------------------------------------------------
563645 :count :dry run 

##include<stdio.h>
int main (){
int num =563645 ;
int count = 0;
	while(num >0 ){
		 count++;
		 num = num/10;
	}
	printf("%d ",count);
	return 0;


}
// dry run the code
 count is the work on the divide startegey
563645 > 0 -- true then 
count increment 0 - 1
563645 /10 = 56364

again check the 56364>0 true then increment the value of count 1++ = 2;
56364/10 =5636 then check the again checks
5636>0 then the increment the value of 2++ = 3;
563/10= 56 
then 56>0 then count increment 3++ = 4;
 then 56/10 = 5 
 5>0 
  5 ++ = 6
  then 5/10 is 0 then conditon is false;


 563645/10 = 56364
 56364/10 =5636
 5636/10 = 563
 563/10 = 56
 56/10 = 5
 5/10 = 0

--------------------------------------------------------
reverse number :45683 :dry run 

#include<stdio.h>
int main (){
	int num = 45683;
	int rev =0;

	while(num>0){
		rev = rev*10+ num%10 ;
		num= num/10;
	}
	printf("%d",rev);
	return 0;
}


// dry run the code 
 first check the condition till when nunber is not zero
 rev rev*10+ 45683%10 = 3
 45683/10 = 4568

 4568>0 true  then --
 rev = 3*10 + 4568%10  = 30+8 = 38
  4568/10 = 456 

  while(456>0) -- true then  print the
  	rev = 38*10 + 6== 386;
  	456/10 = 45

  	while(45>0) - true then print the
  		 rev =  = 386*10+ 5 =  3865 
  		45/10 =4 


  		while (4>0) true then
  			rev = 3865*10 + 4%10  =  38654
  		     4/10 = 0

  		      then condition is false
  		      ;


--------------------------------------------------------
palindrome number :123454321 dry run 

#include<stdio.h>
int main (){
	//int num = 12321;
	int num  = 45683;
	int temp = num;
	int rev =0;
	while (num>0){
		rev = rev*10 + num%10;
		num = num/10;
	}
	if(temp == rev){
		printf("palindrome ");
	}else{
		printf("not palindrome numbers");
	}return 0;
}




// dry run the code 
 first check the condition till when nunber is not zero
 rev rev*10+ 45683%10 = 3
 45683/10 = 4568

 4568>0 true  then --
 rev = 3*10 + 4568%10  = 30+8 = 38
  4568/10 = 456 

  while(456>0) -- true then  print the
  	rev = 38*10 + 6== 386;
  	456/10 = 45

  	while(45>0) - true then print the
  		 rev =  = 386*10+ 5 =  3865 
  		45/10 =4 


  		while (4>0) true then
  			rev = 3865*10 + 4%10  =  38654
  		     4/10 = 0

  		      then condition is false
  		      ;

  		       thne check the nuber is palindrome or not ....
  		        if (temp == reverse) is true ---  (45683==38654)  --- flase this is not palindrome number
--------------------------------------------------------

a :
	1 --- 10 even number 

b :
	10 ---1 odd number 

c :
	reverse number 

d :
	digit count of number 

p :
	palindrome number check 

otherwise :input is not matched 


#include<stdio.stdatomic.h>
int main (){
	char ch ;
	printf("enter the character for the diffrent function calling");
	scanf("%c",&ch);
	if(ch=='a'){
	int n = 1;
	while(n<=10){
	    if(n%2==0){
	       printf("%d ",n);
	      
	    }
	     n++;
	 }
   }else if(ch == 'b'){
   	int n =10;
	while(n>=1){
		if(n%2!=0){
		printf("%d",n);
	}
	n--;

	}

   }else if (ch =='c'){
   int num = 45683;
	int rev =0;

	while(num>0){
		rev = rev*10+ num%10 ;
		num= num/10;
	}
	printf("%d",rev);
   }else if (ch =='d'){
   	int num =563645 ;
    int count = 0;
	while(num >0 ){
		 count++;
		 num = num/10;
	}
	printf("%d ",count);
}else if (ch =='e'){
	int num = 12321;
	int temp = num;
	int rev =0;
	while (num>0){
		rev = rev*10 + num%10;
		num = num/10;
	}
	if(temp == rev){
		printf("palindrome ");
	}else{
		printf("not palindrome numbers");
	}
}else {
	printf("error input is not matched try later");
	return 0;
}