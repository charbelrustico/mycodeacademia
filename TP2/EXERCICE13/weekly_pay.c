#include <stdio.h>

int main() {
    
    //Declaration of variables
    float salary_per_hours,remain_hours, hours_worked, weekly_pay, overtime, overtime_pay, overtime_max_hours=37.5, overtime_max_hours_2=40.0;

    //User entering the salary and hours worked
    printf("Enter your salary per hours: ");
    scanf("%f", &salary_per_hours);
    printf("Enter the number of hours worked in a week: ");
    scanf("%f", &hours_worked);

    //Calculating the weekly pay for hours worked above 37.5
    printf("Calculating weekly pay for worked hours above %.2f...\n",overtime_max_hours);
    if (hours_worked > overtime_max_hours) {
        overtime = hours_worked - overtime_max_hours; // Calculate the number of overtime hours
        remain_hours = overtime_max_hours; // Regular hours remainder 37.5
        overtime_pay = overtime * (salary_per_hours * 2); // Overtime pay is calculated at double the regular hourly rate
        weekly_pay = (salary_per_hours * remain_hours) + overtime_pay; // Total weekly pay is the sum of regular pay and overtime pay
        
        //printing the results
        printf("Weekly pay for %.2f hours worked: %.2f\n", hours_worked, weekly_pay);

    } else {
        //Standard pay calculation for hours worked less than or equal to 37.5
        weekly_pay = salary_per_hours * hours_worked;
        printf("Weekly pay for %.2f hours worked: %.2f\n", hours_worked, weekly_pay);
    }

    //Calculating the weekly pay for hours worked above 40
    printf("\nCalculating weekly pay for worked hours above %.2f...\n",overtime_max_hours_2);
    if (hours_worked > overtime_max_hours_2) {
        overtime = hours_worked - overtime_max_hours_2; // Calculate the number of overtime hours
        remain_hours = overtime_max_hours_2; // Regular hours remainder 37.5
        overtime_pay = overtime * (salary_per_hours * 2); // Overtime pay is calculated at double the regular hourly rate
        weekly_pay = (salary_per_hours * remain_hours) + overtime_pay; // Total weekly pay is the sum of regular pay and overtime pay
        
        //printing the results
        printf("Weekly pay for %.2f hours worked: %.2f\n", hours_worked, weekly_pay);

    } else {
        //Standard pay calculation for hours worked less than or equal to 37.5
        weekly_pay = salary_per_hours * hours_worked;
        printf("Weekly pay for %.2f hours worked: %.2f\n", hours_worked, weekly_pay);
    }

    return 0;
}