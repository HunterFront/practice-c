#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day);

int main() {
    int month, day;
    split_date(60, 2021, &month, &day);

    printf("%d月%d日\n", month, day);
    return 0;
}

void split_date(int day_of_year, int year, int *month, int *day) {
    int days_of_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, i = 0;

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        days_of_month[1]++;

    while(day_of_year > 0) {
        day_of_year -= days_of_month[i];
        i++;
    }
    *month = i;
    *day = day_of_year + days_of_month[i - 1];
}