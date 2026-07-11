#include <stdio.h>
float conveter( float c );
float conveter ( float c ){
    return  (c * 1.8) + 32.0;
}
int main(){
    float c;
    printf ("Enter the celsius \n");
    scanf ("%f", &c);
    printf ("The %f celsius to fahrenheit is %f \n", c, conveter (c));
    
    return 0;
}