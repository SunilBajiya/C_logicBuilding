
/// leap year checks 

#include <stdio.h>

int main()
{
    int year;
    printf("please enter the year to identify year is leap or not \n");
    scanf("%d",&year);
   if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
   printf("this is year is leap %d",year);
    }else{
        printf("this year is not leap year %d", year);
    

    return 0;
    }
}

/// sum of the natural numbers

#include <stdio.h>

int main()
{
    int num;
    printf("please enter the number of the natural number \n");
    scanf("%d",&num);
    int sum = (num *(num+1))/2;
   printf("this is year is natural number sum %d",sum);
    
    return 0;
    
}
// factorial numbers





#include <stdio.h>

int main()
{
    int days, year,weeks;
    printf("enter the days");
    scanf("%d",&days);
    year = days/365;
    weeks = (days/365)/7;
    
    days = days-((year * 365)+ (weeks*7));
    printf("year :%d ",year);
        printf("weeks :%d ",weeks);
    printf("days- :%d ",days);

    
    return 0;
}


#include <stdio.h>
int main(){
    int second,h,m,s;
    printf("enter the second");
    scanf("%d",&second);
    h = second/3600;
  
    m= second/60;
    s= second%60;
    printf(" hours %d",h);
    printf(" mints %d",m);
    printf(" second %d",s);
    return 0;
}


