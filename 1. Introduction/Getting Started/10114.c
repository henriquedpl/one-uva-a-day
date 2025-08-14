#include <stdio.h>
#include <string.h>

/*
  Problem 10114	Loansome Car Buyer
  Runtime: 0.000s
*/

int main(int argc, char *argv) {
  int duration, months;
  float down, carValue;

  int month;
  float rate, rates[101];

  int i, j, result;

  float currentLoan, monthlyPayment;

  scanf("%d %f %f %d", &duration, &down, &carValue, &months);

  while(duration > 0) {
      memset((char *) rates, 0, 101 * sizeof(int));
      for (i = 0; i < months; i++) {
        scanf("%d", &month);
        scanf("%f", &rate);
        for(j = month; j < duration + 1; j++) {
          rates[j] = rate;
        }
      }

      monthlyPayment = carValue / duration;
      currentLoan = carValue;
      carValue += down;
      carValue = carValue - carValue*rates[0];
      result = 0;
      while (currentLoan > carValue) {
        result++;
        carValue = carValue - carValue*rates[result];
        currentLoan -= monthlyPayment;

      }
      if (result == 1) {
        printf("%d month\n", result);
      }
      else {
        printf("%d months\n", result);
      }

      scanf("%d %f %f %d", &duration, &down, &carValue, &months);
  }
  return 0;
}
