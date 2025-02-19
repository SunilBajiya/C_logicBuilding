  
------------------------
#include <stdio.h>
int main(){
    for(int i =1;i<=5;i++){
        for (int s = 4; s >= i; s--)
        {
            printf(" ");}
        for (int j = 1; j <=i; j++)
            {
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
--------------------------------------------------------

#include <stdio.h>
int main(){
    for(int i =5;i>=1;i--){
        for (int s = 4; s >= i; s--)
        {
            printf(" ");}
        for (int j = 1; j <=i; j++)
            {
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
--------------------------------------------------------
#include <stdio.h>
int main(){
    for(int i =1;i<=5;i++){
        for (int s = 4; s >= i; s--)
        {
            printf(" ");}
        for (int j = 1; j <=i; j++)
            {
                printf("*");
            }
        
        printf("\n");
    }  for(int i =5;i>=1;i--){
        for (int s = 4; s >= i; s--)
        {
            printf(" ");}
        for (int j = 1; j <=i; j++)
            {
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

--------------------------------------------------------
#include <stdio.h>
int main(){
    for(int i =5;i>=1;i--){
        for (int s = 4; s >= i; s--)
        {
            printf(" ");}
        for (int j = 1; j <=i; j++)
            {
                printf("*");
            }
        
        printf("\n");
    }
    for(int i =1;i<=5;i++){
        for (int s = 4; s >= i; s--)
        {
            printf(" ");}
        for (int j = 1; j <=i; j++)
            {
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
--------------------------------------------------------
#include <stdio.h>
int main(){
  
    for(int i =1;i<=5;i++){
        for (int s = 4; s >= i; s--)
        {
            printf("#");}
        for (int j = 1; j <=i; j++)
            {
                printf("*");
            }
        
        printf("\n");
    }  

    return 0;
} 

####*
###**
##***
#****
*****
--------------------------------------------------------
#include <stdio.h>
int main(){
  
    for(int i =1;i<=5;i++){
        for (int s = 4; s >= i; s--)
        {
            printf("#");}
        for (int j = 1; j <=i; j++)
            {
                printf("*");
            }
        
        printf("\n");
    }  

    return 0;
} 

*****
#****
##***
###**
####*
--------------------------------------------------------

#include <stdio.h>
int main(){
    for(int i =1;i<=5;i++){
        for (int s = 4; s >= i; s--)
        {
            printf("#");}
        for (int j = 1; j <=i; j++)
            {
                printf("*");
            }
        
        printf("\n");
    }  for(int i =5;i>=1;i--){
        for (int s = 4; s >= i; s--)
        {
            printf("#");}
        for (int j = 1; j <=i; j++)
            {
                printf("*");
            }
        
        printf("\n");
    }

    return 0;
} 
####*
###**
##***
#****
*****
*****
#****
##***
###**
####*
--------------------------------------------------------
#include <stdio.h>
int main(){
    for(int i =5;i>=1;i--){
        for (int s = 4; s >= i; s--)
        {
            printf("#");}
        for (int j = 1; j <=i; j++)
            {
                printf("*");
            }
        
        printf("\n");
    }
    for(int i =1;i<=5;i++){
        for (int s = 4; s >= i; s--)
        {
            printf("#");}
        for (int j = 1; j <=i; j++)
            {
                printf("*");
            }
        
        printf("\n");
    }  

    return 0;
} 
*****
#****
##***
###**
####*
####*
###**
##***
#****
*****
--------------------------------------------------------
 #include <stdio.h>
int main(){
    for(int i =0; i<5;i++){
        for (int s = 0 ;s < 2*(5-i-1); s++)
        {
        printf(" ");
        }
    
        for (int j = 0; j < 2*i+1; j++)
            {
            printf("* ");
            }
            printf("\n");
    }
    return 0;
} 


    *
   * *
  * * *
 * * * * 
* * * * *
--------------------------------------------------------
 #include <stdio.h>
int main(){
    for(int i =5-1; i>=1;i--){
        for (int s = 5 ;s >=i; s--)
        {
        printf(" ");
        }
    
        for (int j = 1; j <= 2*i-1; j++)
            {
            printf("* ");
            }
            printf("\n");
    }
    return 0;
} 



* * * * *
 * * * *
  * * * 
   * * 
    *
--------------------------------------------------------
 #include <stdio.h>
int main(){
        for(int i =1; i<=5;i++){
        for (int s = 1 ;s <=2*(5-i-1); s++)
        {
        printf(" ");
        }
    
        for (int j = 1; j <= 2*i-1; j++)
            {
            printf("* ");
            }
            printf("\n");
    }
    
    for(int i =5-1; i>=1;i--){
        for (int s = 5 ;s >=i; s--)
        {
        printf(" ");
        }
    
        for (int j = 1; j <= 2*i-1; j++)
            {
            printf("* ");
            }
            printf("\n");
    }
    return 0;
}


    *
   * *
  * * *
 * * * * 
* * * * *
* * * * *
 * * * *
  * * * 
   * * 
    *
--------------------------------------------------------
 #include <stdio.h>
int main(){
     
    for(int i =5; i>=1;i--){
        for (int s = 5 ;s >=i; s--)
        {
        printf(" ");
        }
    
        for (int j = 1; j <= 2*i-1; j++)
            {
            printf("* ");
            }
            printf("\n");
    }
       for(int i =1; i<=5;i++){
        for (int s = 1 ;s <=2*(5-i-1); s++)
        {
        printf(" ");
        }
    
        for (int j = 1; j <= 2*i-1; j++)
            {
            printf("* ");
            }
            printf("\n");
    }
    
    return 0;
}


* * * * *
 * * * *
  * * * 
   * * 
    *
    *
   * *
  * * *
 * * * * 
* * * * *
--------------------------------------------------------
#include <stdio.h>
int main(){
    for(int i =1;i<=5;i++){
        for (int s = 4; s >= i; s--)
        {
            printf(" ");}
        for (int j = 1; j <=i; j++)
            {
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
--------------------------------------------------------
#include <stdio.h>
int main(){
    for(int i =1;i<=5;i++){
        for (int s = 4; s >= i; s--)
        {
            printf(" ");}
        for (int j = 1; j <=i; j++)
            {
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
--------------------------------------------------------
#include<stdio.h> 
int main()
{
   int n=5, a;
   for(int i=1; i<n; i++)
   {
    
     for(int j=i; j < n; j++)
     {
       printf(" ");
     }
     for(int k=1; k <=2*i-1; k++)
     {
       printf("%d",k);
     }
     printf("\n");
   }
   return 0;
}

    1 
   1 2
  1 2 3
 1 2 3 4 
1 2 3 4 5 
--------------------------------------------------------
#include<stdio.h> 
int main()
{
   int n=5, a;
   for(int i=1; i<n; i++)
   {
    
     for(int j=i; j < n; j++)
     {
       printf(" ");
     }
     for(int k=1; k <=2*i-1; k++)
     {
       printf("%d",i);
     }
     printf("\n");
   }
   return 0;
}
    1
   2 2 
  3 3 3 
 4 4 4 4 
5 5 5 5 5 
--------------------------------------------------------
#include <stdio.h>
int main(){
    for(int i =1;i<=5;i++){
        for (int s = 4; s >= i; s--)
        {
            printf("%d",s);}
        for (int j = 1; j <=i; j++)
            {
                printf("*");
            }
        
        printf("\n");
    }
    return 0;
} 

4321*
432**
43***
4****
*****
--------------------------------------------------------

#include <stdio.h>
int main(){
    for(int i =0;i<=5;i++){
        int x=1;
        for(int s =1 ; s<=i;s++){
            
            printf("%d",x);
            x++;
        }
       
        
        for (int j = 5; j >=i; j--)
            {
                printf("*");
            }
        
        printf("\n");
    }
    return 0;
} 
*****
1****
12***
123**
1234*
--------------------------------------------------------
   #include <stdio.h>
int main(){
    for(int i =0; i<5;i++){
        for (int s = 0 ;s < 2*(5-i-1); s++)
        {
        printf(" ");
        }
    
        for (int j = 0; j < 2*i+1; j++)
            {
            printf("* ");
            }
            printf("\n");
    }
    return 0;
}



   *
  ***
 *****
*******
--------------------------------------------------------
#include<stdio.h>
int main(){
   for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
        if(j%2==0){
        printf("*");
        }
        else{
            printf("%d",j);
        }
    }
    printf("\n");
   }
 return 0;
}



1
1*
1*3
1*3*
1*3*5
--------------------------------------------------------
#include<stdio.h>
int main(){
   for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
        if(i%2==0){
        printf("*");
        }
        else{
            printf("#");
        }
    }
    printf("\n");
   }
 return 0;
}


#
**
###
****
#####
--------------------------------------------------------
#include<stdio.h>
int main(){
   for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
        if(i%2==0){
        printf("%d",i);
        }
        else{
            printf("*");
        }
    }
    printf("\n");
   }
 return 0;
}


*
22
***
4444
*****
--------------------------------------------------------
#include <stdio.h>
int main(){
    
 
       for(int i =1; i<=5;i++){
            int x=i;
        for (int j = 1; j <= 5; j++)
            {
                if(x%2==0){
                    printf("*");
                }else{
                  printf("%d",x);
               
                }
                 x++; 
             
             
            }
            printf("\n");
    }
    
    return 0;
}



1*3*5
*3*5*
3*5*7
*5*7*
5*7*9
--------------------------------------------------------


