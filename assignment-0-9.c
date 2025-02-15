1)Armstrong :
151 :dry run 
#include <stdio.h>
int main()
{
    int num = 151;
    int temp = num;
    int rem , sum =0;
    while(num>0){
    	rem = num%10; // 151 %10  = 1
    	sum = sum+ rem*rem *rem;
    	num = num/10;

    }
    if(temp == sum){
    	    printf("Armstrong numbers ");

    }else{
    	printf("not is Armstrong numbers ");
    	
    }

 	return 0;
}
-----------------------------------------------------------------
2)sum of the digit 

#include<stdio.h>
int main(){
	int num = 43523;
	int sum =0;
    int rem;
	while(num>0){
		rem = num%10;
		sum = sum+rem ;
		num = num/10;
	}
	printf("%d",sum);
	return 0;

}


43523 :dry run 

-----------------------------------------------------------------
3)neon number 
#include<stdio.h>
int main(){
	int num = 6;
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
 	return 0;

}



dry run 
-----------------------------------------------------------------
4)
a :
	Armstrong number 

p :
	palindrome number 

r :
	reverse number 

s :
	sum of digit 

n :
	neon number 

otherwise :input is not match 

#include<stdio.h>
int main (){
	char ch;
	printf("enter the character ");;
	scanf("%c",&ch);
	if(ch =='a'){
		int num = 151;
    int temp = num;
    int rem , sum =0;
    while(num>0){
    	rem = num%10; // 151 %10  = 1
    	sum = sum+ rem*rem *rem;
    	num = num/10;

    }
    if(temp == sum){
    	    printf("Armstrong numbers ");

    }else{
    	printf("not is Armstrong numbers ");
    	
    }
    }else if(ch =='p'){
  
  int num = 1234321;
     int temp = num;
    int sum =0;
    int rem;
    while(num>0){
    	rem =  num%10; // 151 %10  = 1 
        sum = sum *10+ rem ; // 1  
    	num = num/10; // 151/10 = 15 

    }
    if(temp == sum){
    	    printf("palindrome numbers ");

    }else{
    	printf("not is palindrome numbers ");
    	
    }
 

}
else if(ch =='r'){
    	int num = 1234632;
    	int sum =0;
    	int rem ;
    	while(num>0){
    		rem = num%10;
    		sum = sum*10 + rem;
    		num = num/10;
    	}
    	printf("%d",sum);

	}else if(ch =='s'){
		int num = 1234632;
    	int sum =0;
    	int rem ;
    	while(num>0){
    		rem = num%10;
    		sum = sum+rem;
    		num = num/10;
    	}
    	printf("%d",sum);
    
	}else if(ch =='n'){
		int num = 6;
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
 }else{
 	printf("input is invailed try again");
 }
}


--------------------------------------------------------------

1---10 number print 

#include<stdio.h>
int main(){
	for(int i =1; i<=10; i++){
		printf("%d",i);
	}
	return 0;
}

-------------------------------------------------------------
34 ----- 89 number print 
#include<stdio.h>
int main(){
	for(int i =34; i<=89; i++){
		printf("%d",i);
	}
	return 0;
}

------------------------------------------------------------
10 ------- 1

#include<stdio.h>
int main(){
	for(int i =10; i>=1; i--){
		printf("%d",i);
	}
	return 0;
}

dry run 
------------------------------------------------------------
100 ---- 1 

#include<stdio.h>
int main(){
	for(int i =100; i>=1; i--){
		printf("%d",i);
	}
	return 0;
}
------------------------------------------------------------
78-----56 
#include<stdio.h>
int main(){
	for(int i =78; i>=56; i--){
		printf("%d",i);
	}
	return 0;
}

------------------------------------------------------------
1 ---- 10 even number 


#include<stdio.h>
int main(){
	for(int i =1; i<=10; i++){
		if(i%2==0){
		printf("%d",i);
	}
}
	return 0;
}
------------------------------------------------------------
1 ----5 number sum dry run 

#include<stdio.h>
int main(){
	int sum=0;
	for(int i =1; i<=5; i++){
		sum = sum+i;
	
	}
		printf("%d",sum);

	return 0;
}

------------------------------------------------------------
100 ---- 1 number :odd number 

#include<stdio.h>
int main(){
	for(int i =100; i>=1; i--){
		if(i%2!=0){
		printf("%d",i);
	}
}
	return 0;
}
------------------------------------------------------------
1 ---- 10 even number ka sum (dry run )
#include<stdio.h>
int main(){
	for(int i =1; i<=10; i++){
		if(i%2==0){
		printf("%d",i);
	}
}
	return 0;
}
------------------------------------------------------------
table print :2 

#include<stdio.h>
int main(){
	
	for(int i =2; i<=20; i++){
		if(i%2==0){
			printf("%d \n",i);
		}
	
	}
		

	return 0;
}

------------------------------------------------------------
#include<stdio.h>
int main(){
	char ch ;
	printf("enter the character ");
	scanf("%c",&ch);
	if(ch=='a'){
		int s;
		printf("start where");
		scanf("%d",&s);
		int e;
		printf("end where");
		scanf("%d",&e);
		for(int i = s; i<=e;i++){
			printf("%d",i);
		}
	}else if(ch == 'b'){
		int s;
		printf("start where");
		scanf("%d",&s);
		int e;
		printf("end where");
		scanf("%dry",&e);
		for(int i = e; i>=s;i--){
			if(i%2==0){
				printf("%d",i);
			}
			
		}else if(ch =='c'){
			int s;
			int sum =0;
		printf("start where");
		scanf("%d",&s);
		int e;
		printf("end where");
		scanf("%d",&e);
		for(int i = s; i<=e;i++){
			sum = sum+i;
        
		}
       printf("%d",sum);
	}else if (ch =='d'){
		int s;
			int sum =0;
		printf("start where");
		scanf("%d",&s);
		int e;
		printf("end where");
		scanf("%d",&e);
		for(int i = s; i<=e;i++){
			if(i%2!=0){
			sum = sum+i;
			}       
		}
       printf("%d",sum);
	}
}


a :
	user input starting and ending point :number print (direction forward direction )

b:
	user input :starting and ending point :backward direction :even number 

c :
	user input :starting point and ending point :sum of all numbers 

d :
	user input starting point and ending :odd number ka sum 

otherwise :input is not matched 



---------------------------------------------------------------------
factorial :
#include<stdio.h>
int main(){
	int fact=1;
	for(int i =1; i<=5; i++){
		fact = fact*i;
	}
	printf("%d",fact);
		

	return 0;
}


6 dry run 

#include<stdio.h>
int main(){
	int sum =0;
	for(int i =1; i <=10;i++){
		if(i%2==0){
			sum = sum-i;
		}else {
			sum= sum+i;

		}
	
	}
		printf("%d",sum);
	return 0;
}
---------------------------------------------------------------------
1 ---- 10 
alternate :
1-2+3-4+5-6+7.........


