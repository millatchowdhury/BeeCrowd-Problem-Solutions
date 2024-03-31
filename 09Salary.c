#include <stdio.h>
int main(){
    int employee_number, worked_hours_number_in_a_month;
    float amount_He_Recive_PerHour, salary;
    scanf("%d %d %f", &employee_number, &worked_hours_number_in_a_month, &amount_He_Recive_PerHour);

    salary = amount_He_Recive_PerHour * worked_hours_number_in_a_month;

    printf("NUMBER = %d\n", employee_number);
    printf("SALARY = U$ %.2f\n", salary);
    return 0;
}