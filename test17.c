1)
// Sum of Even Numbers Write a C program that uses a loop to calculate 
// the sum of all even numbers between 1 and 100
#include<stdio.h>

int main() {
    int sum = 0;
    

 for(int i =1;i<=100; i++){
     if(i%2==0){
     sum = sum+i;
     }
 }
    printf("%d\n", sum);
    
    return 0;
}


2)
Factorial of a Number Write a C program that uses a for loop to calculate the factorial of a given number.

#include<stdio.h>
int main(){
    int fact =1;
    for (int i = 1;i<=3;i++){
        fact = fact*i;
        
    }printf("%d",fact);
    
	return 0;
}


3)
Fibonacci Sequence Write a C program that uses a loop to print the first n Fibonacci numbers.
#include<stdio.h>
int main(){
    int n1=0,n2=1,n3;
    printf("%d%d",n1,n2);
    for (int i = 1;i<=10;i++){
        n3 = n1+n2;
        printf("%d",n3);
        n1= n2;
        n2= n3;

    }
    
	return 0;
}


4)
Multiplication Table Write a C program that uses a for loop to print the multiplication table of a number (e.g., 5 * 1 = 5, 5 * 2 = 10, ... up to 10).


#include<stdio.h>
int main(){
 
    for (int i = 5;i<=50;i=i+5){
       
        printf("%d \n",i);

    }
    
	return 0;
}

5)
Sum of Digits in a Number Write a C program that uses a loop to calculate the sum of digits of a given number.


#include<stdio.h>

int main() {
    int sum = 0;
    int num =124;
    int rem;
    
while(num>0){
    int rem = num%10;
    sum = sum+rem;
    num=  num/10;
}
    printf("%d\n", sum);
    
    return 0;
}


6)
Palindrome Check Write a C program that uses a loop to check if a number is a palindrome.

#include<stdio.h>

int main() {
    int sum = 0;
    int num =12321;
    int rem;
    int temp = num;
    
while(num>0){
    int rem = num%10;
    sum = sum*10+rem;
    num=  num/10;
}
   if(temp==sum){
       printf("Palindrom");
   }else{
       printf("not Palindrom number");
   }
    
    return 0;
}
7)


#include<stdio.h>

int main() {
   for(int i = 1; i<=5;i++){
       for(int j = 1; j<=i;j++){
           printf("*");
       }
       printf("\n");
   }
    
    return 0;
}

*
**
***
****
*****

8)
#include<stdio.h>

int main() {
   for(int i = 5; i>=1;i--){
       for(int j = 1; j<=i;j++){
           printf("%d",j);
       }
       printf("\n");
   }
    
    return 0;
}

12345
1234
123
12
1

9)
A Neon number is a number where the sum of the digits of its square is equal to the number itself. For example, 9 is a Neon number because 
9
2
=
81
9 
2
 =81, and the sum of the digits of 81 is 9.
 #include<stdio.h>
int main(){

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
     return 0;
}

10)
#include<stdio.h>

int main() {
   for(int i = 5; i>=1;i--){
       for(int j = 5; j>=1;j--){
           printf("%d",j);
       }
       printf("\n");
   }
    
    return 0;
}


54321
54321
54321
54321
54321