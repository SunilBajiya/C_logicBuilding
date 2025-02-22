#include<stdio.h>
int main(){
    
   for(int i=1;i<=5;i++){
       int x =i;
    for(int j =1 ; j<=i;j++){
       printf("%d",x%2!=0);
       x++;
    }
    printf("\n");
   }
 return 0;
}
1
01
101
0101
10101