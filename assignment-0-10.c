Fibonacci :9 
✅
#include<stdio.h>
int main(){
    int n1= 0,n2=1,n3;
    printf("%d%d",n1,n2);
    for(int i=1;i<=10;i++){
     n3 = n1+n2;
    printf("%d",n3);
    n1=n2;
    n2=n3;
    }

 return 0;
}
dry run 
------------------------------------------------
✅
#include<stdio.h>
int main(){
   for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
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

dry run 
-----------------------------------------------------
✅
#include<stdio.h>
int main(){
   for(int i=1;i<=5;i++){
    for(int j=5;j>=i;j--){
        printf("*");
    }
    printf("\n");
   }
 return 0;
}


*****
****
***
**
*

dry run 
-------------------------------------------------------------
✅
#include<stdio.h>
int main(){

  for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
   }
   for(int i=1;i<=5;i++){
    for(int j=5;j>=i;j--){
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
*****
****
***
**
*
-------------------------------------------------------------
✅
#include<stdio.h>
int main(){

  
   for(int i=1;i<=5;i++){
    for(int j=5;j>=i;j--){
        printf("*");
    }
    printf("\n");
   }
   for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
   }
 return 0;
}



*****
****
***
**
*
*
**
***
****
*****
-------------------------------------------------------------
  ✅
  #include<stdio.h>
int main(){
   for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
        printf("%d",j);
    }
    printf("\n");
   }
 return 0;
}

1
12
123
1234
12345

-------------------------------------------------------------
 ✅
  #include<stdio.h>
int main(){
   for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
        printf("%d",i);
    }
    printf("\n");
   }
 return 0;
}

1
22
333
4444
55555
-------------------------------------------------------------
  ✅
  #include<stdio.h>
int main(){
   for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
        printf("%d",j%2);
    }
    printf("\n");
   }
 return 0;
}
1
10
101
1010
10101
-------------------------------------------------------------
✅
#include<stdio.h>
int main(){
    int x;
   for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
        printf("%d",i%2);
    }
    printf("\n");
   }
 return 0;
}
1
00
111
0000
11111
-------------------------------------------------------------
  ✅
  #include<stdio.h>
int main(){
    int x=1;
   for(int i=1;i<=4;i++){
    for(int j=1;j<=i;j++){
        printf("%d",x);
        x++;
    }
    printf("\n");
   }
 return 0;
}

1
2 3 
4 5 6 
7 8 9 10 
-------------------------------------------------------------
  ✅
  #include<stdio.h>
int main(){
    int x=1;
   for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
        printf("%d",x%2);
        x++;
    }
    printf("\n");
   }
 return 0;
}
1
0 1 
0 1 0
1 0 1 0 
-------------------------------------------------------------

✅
#include<stdio.h>
int main(){
   for(int i=1;i<=4;i++){
       for(int j=1;j<=4;j++){
           printf("*");
       }
       printf("\n");
   }
    return 0;
}

dry run
----------------------------------------------------------
✅
#include<stdio.h>
int main(){
    
   for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        printf("*");
  
    }
    printf("\n");
   }
 return 0;
}
*****
*****
*****
*****
*****
----------------------------------------------------------
✅
#include<stdio.h>
int main(){
    
   for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        printf("%d",j);
  
    }
    printf("\n");
   }
 return 0;
}

12345
12345
12345
12345
12345
----------------------------------------------------------
✅
#include<stdio.h>
int main(){
    
   for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        printf("%d",i);
  
    }
    printf("\n");
   }
 return 0;
}


11111
22222
33333
44444
55555
----------------------------------------------------------
✅
#include<stdio.h>
int main(){
    
   for(int i=5;i>=1;i--){
    for(int j=5;j>=1;j--){
        printf("%d",i);
  
    }
    printf("\n");
   }
 return 0;
}

55555
44444
33333
22222
11111
----------------------------------------------------------
✅
#include<stdio.h>
int main(){
    
   for(int i=5;i>=1;i--){
    for(int j=5;j>=1;j--){
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


----------------------------------------------------------
✅
#include<stdio.h>
int main(){
    
   for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        printf("%d",i%2);
  
    }
    printf("\n");
   }
 return 0;
}


11111
00000
11111
00000
11111
----------------------------------------------------------
✅
#include<stdio.h>
int main(){
    
   for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        printf("%d",j%2);
  
    }
    printf("\n");
   }
 return 0;
}


10101
10101
10101
10101
10101
----------------------------------------------------------
📌✅
#include<stdio.h>
int main(){
    
   for(int i=1;i<=5;i++){
       int x=i;
    for(int j=1;j<=5;j++){
    printf("%d ",x);
    
    x++;
    }
     
    printf("\n");
   }
 return 0;
}
12345
23456
34567
45678
56789
----------------------------------------------------------
✅
#include<stdio.h>
int main(){
    int x=1;
   for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        printf("%d",x);
        x++;
  
    }
    printf("\n");
   }
 return 0;
}


1 2 3 4 5 
2 4 6 8 10
3 6 9 12 15
4 8 12 16 20
5 10 15 20 25
----------------------------------------------------------
✅
#include<stdio.h>
int main(){
    int x=1;
   for(int i=1;i<=4;i++){
    for(int j=1;j<=8;j++){
        if(j%2!=0){
        printf("%d ",x);
        
        } 
         x++;
    }
    printf("\n");
   }
 return 0;
}

1 3 5 7 
9 11 13 15
17 19 21 23
25 27 29 31
----------------------------------------------------------
✅
#include<stdio.h>
int main(){
   for(int i=5;i>=1;i--){
    for(int j=5;j>=i;j--){
        printf("%d",i);
    }
    printf("\n");
   }
 return 0;
}

5
4 4 
3 3 3 
2 2 2 2 
1 1 1 1 1 
----------------------------------------------------------
✅
#include<stdio.h>
int main(){
   for(int i=1;i<=5;i++){
    for(int j=1;j<=3;j++){
    printf("%d %d",i,j);
        
    }
     
    printf("\n");
   }
 return 0;
}


1 1 1 2 1 3 
2 1 2 2 2 3
3 1 3 2 3 3
4 1 4 2 4 3
5 1 5 2 5 3 
----------------------------------------------------------
✅
#include<stdio.h>
int main(){
   for(int i=5;i>=1;i--){
    for(int j=5;j>=i;j--){
        printf("%d",j);
    }
    printf("\n");
   }
 return 0;
}


5
54
543
5432
54321
----------------------------------------------------------
📌
#include<stdio.h>
int main(){
    int x=1;
   for(int i=1;i<=5;i++){
    for(int j=1;j<=3;j++){
    printf("%d ",i);
    printf("%d ",j);
        
    }
     
    printf("\n");
   }
 return 0;
}


1 6 11 16 21
2 7 12 17 22
3 8 13 18 23
4 9 14 19 24
5 10 15 20 25 
----------------------------------------------------------
✅

#include<stdio.h>
int main(){
    int x=1;
   for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
    printf("%d ",x);
    
    x++;
    }
     
    printf("\n");
   }
 return 0;
}

1 2 3 4 5 
6 7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 
21 22 23 24 25 
