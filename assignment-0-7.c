1 ---10 number print 
#include<stdio.h>
int main(){
	int a =1;
	while(a<=10){
		printf("%d",a);
		a++;
	}
	return 0;
}


 if initial a=1;
 1<=10.   1<=10 - Ture a++; a =2;
 2<=10 Ture a++; a=3;
 3<=10 Ture a++; a=4;
 4<=10 Ture a++; a=5;
 5<=10 Ture a++; a=6;
 6<=10 Ture a++; a=7;
 7<=10 Ture a++; a=8;
 8<=10 Ture a++; a=9;
 9<=10 Ture a++; a=10;
 10<=10 Ture a++; a=11;
 11<=10 false a++; a=4;

dry run 

--------------------------------------------------
1 ---100 number print 

#include<stdio.h>
int main(){
	int a =1;
	while(a<=100){
		printf("%d",a);
		a++;
	}
	return 0;
}

----------------------------------------------------
34 ----- 89 

----------------------------------------------------
write a c program input character :
	s :number swap without third variable 

	w :
		number swap with third variable 

	e :
		1 ---10 number print while loop 

	i :
		23---->78 number print while loop

	otherwise :input is not matched 


	#include<stdio.h>
    int main(){
	char ch;
	printf("enter the character for the some actions");
	scanf("%c",ch)
	if(ch =='s'){
		int a =10;
		int b =30;
		printf("%d",a);
		printf("%d",b);
		a = a+b;
		b =a-b;
		a=a-b;
		printf("%d",a);
		printf("%d",b);
	}else if (ch =='e'){
		int num =1;
		while(num<=10){
			printf("%d",num);
			num++;
		}
	}else if(ch== 'i'){
		int num = 23;
		while(num<=78){
			printf("Enter the value of these ");
			num++;
		}
	}else if(ch=='i'){
      int a =23;
	 while(23<=78){
		printf("%d",a);
		a++;
	}else {
		printf("invalid inputs ");
	}
	
	
	return 0;
}