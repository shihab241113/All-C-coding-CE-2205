int main() {
    int d1, m1, y1;
    int d2, m2, y2;
    int DAYS_PER_YEAR = 360 ;
    int DAYS_PER_MONTH = 30 ;
    int total_days1, total_days2, diff_days;
    int diff_years, diff_months, diff_remaining_days;

    // Input first date
    printf("Enter first date (dd mm yyyy): ");
    scanf("%d %d %d", &d1, &m1, &y1);

    // Input second date
    printf("Enter second date (dd mm yyyy): ");
    scanf("%d %d %d", &d2, &m2, &y2);

    // Convert both dates into total days
    total_days1 = y1 * 360 + m1 * 30 + d1;
    total_days2 = y2 * 360 + m2 * 30 + d2;

    // Absolute difference in total day
    if (total_days1 >= total_days2) {
        diff_days = total_days1 - total_days2;
    } else {
        diff_days = total_days2 - total_days1;
    }

    // Convert total difference back into years, months, and days
    diff_years = diff_days / DAYS_PER_YEAR;
    diff_days = diff_days % DAYS_PER_YEAR; // remaining days after years

    diff_months = diff_days / DAYS_PER_MONTH;
    diff_remaining_days = diff_days % DAYS_PER_MONTH; // remaining days after months

    // Output results
    printf("\n--- Date Difference ---\n");
    printf("Difference: %d year(s), %d month(s), and %d day(s)\n",
           diff_years, diff_months, diff_remaining_days);

    return 0;
}
