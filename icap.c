#include <stdio.h>
#include <math.h>

#define Tmin 0.0
#define Tmax 6.28
#define Npts 10

int main(void){
    
    /*variables for this program*/
    double Tstep = (Tmax - Tmin) / (Npts-1); 
    double T[Npts], vsin[Npts], dVd[Npts], icap[Npts];
    double C;
    int i, j;

    printf("Welcome to the Capacitor Current Calculator!\n");
    printf("\tEnter a value for capacitance in Farads: ");
    scanf(" %lf", &C);
    printf("\tYou entered %.1lf", C);
    /*fill T[] array*/
    printf("\tHere are your results: ");


    return 0;
}