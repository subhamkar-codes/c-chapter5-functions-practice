#include <stdio.h>


int sum_n(int);

int sum_n(int n){
    if (n == 1)
    {
      return 1;
    }
    
    //sum(n) = 1 + 2 + 3 + 4 + 5 + (n-1) + n;
    //sum (n) = sum(n-1) + n;
    return sum_n(n-1) + n;
}
int main(){
    int n;
    printf ("Enter the number till u want your natural number to be added \n");
    scanf ("%d",&n);
    printf ("The sum of your natural number series is %d" , sum_n (n));
    return 0;
}