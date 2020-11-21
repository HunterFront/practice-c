#include <stdio.h>

int main() {
    float loan, rate, payment, monthlyRate, loanAfterFirstMonth, loanAfterSecondMonth, loanAfterThirdMonth;

    printf("Enter amount of loan:");
    scanf("%f", &loan);
    printf("Enter interest rate:");
    scanf("%f", &rate);
    printf("Enter monthly payment:");
    scanf("%f", &payment);

    monthlyRate = (rate / 100 / 12);

    loanAfterFirstMonth = loan - payment + loan * monthlyRate;
    loanAfterSecondMonth = loanAfterFirstMonth - payment + loanAfterFirstMonth * monthlyRate;
    loanAfterThirdMonth = loanAfterSecondMonth - payment + loanAfterSecondMonth * monthlyRate;

    printf("Balance remaining after first month: %.2f\n", loanAfterFirstMonth);
    printf("Balance remaining after second month: %.2f\n", loanAfterSecondMonth);
    printf("Balance remaining after third month: %.2f\n", loanAfterThirdMonth);

    
    return 0;
}