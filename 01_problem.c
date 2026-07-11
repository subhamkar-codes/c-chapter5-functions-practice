#include <stdio.h>
float avarage (int a, int b, int c);

float avarage (int a, int b, int c){
return (a+b+c)/3.0;
}
int main(){
    int a;
    int b;
    int c;
    
    printf ("Enter the A \n");
    scanf ("%d", &a);
    printf ("Enter The B \n");
    scanf ("%d", &b);
    printf ("Enter The C \n");
    scanf ("%d",&c);
    printf ("The avarage of 3 number is %f \n", avarage(a,b,c));
    return 0;
}