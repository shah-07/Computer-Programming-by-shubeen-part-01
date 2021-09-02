#include <stdio.h>

int main()
{
    double loan_amount, interest_rate, number_of_years, total_amount, monthly_amount;

    printf("Enter The Loan amount: ");
    scanf("%lf", &loan_amount);

    printf("Enter The Interest rate: ");
    scanf("%lf", &interest_rate);

    printf("Enter The number of years: ");
    scanf("%lf", &number_of_years);

    total_amount = loan_amount + loan_amount * interest_rate * number_of_years / 100;
    monthly_amount = total_amount / (number_of_years * 12);

    printf("Total amount: %0.2lf\n", total_amount);
    printf("Monthly amount: %0.2lf\n", monthly_amount);


    return 0;
}
