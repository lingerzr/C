#include <stdio.h>
#include <math.h>

double factorial(int number) {
    if (number <= 1)
        return 1;
    else
        return number * factorial(number - 1);
}

int main() {
    double x, term, cosine;
    int i, sign = -1, count = 1;
    scanf("%lf", &x);

    // Start with the first term of the series
    cosine = 1;
    term = 1;
    i = 0;

    do {
        i += 2;
        term = term * x * x / (i * (i - 1));
        cosine = cosine + sign * term;
        sign = sign * -1;
        count++;
    } while (fabs(term) > 0.00001);
       
    printf("cos(x)=%.6lf\n", cosine);
    printf("count=%d\n", count);

    return 0;
}