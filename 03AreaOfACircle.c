#include <stdio.h>
int main(){
    double R;
    scanf("%lf", &R);
    double A;

    A = 3.14159 * R * R;

    printf("A=%.4lf\n", A);

    return 0;
}