#include <stdio.h>
float force( float m);

float force (float m){
    return m * 9.8; // here 9.8 is reffer as gravity of the earth
}
int main(){
    float m;
    printf ("Enter the Mass \n");
    scanf ("%f", &m);
    printf ("For %f Mass the force will be %f \n", m , force (m));
    
    return 0;
}