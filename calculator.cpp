#include<stdio.h>
#include<math.h>

double add(double, double);
double sub(double, double);
double multiply(double, double);
double devide(double, double);
void instruction(void);

int main(void)
{
  double x, y;
  char operation;

  printf("Please enter expression\n");
  scanf("%lf %c%lf", &x, &operation, &y);

  if (operation == '+') {
    printf("Result is %.2f\n", add(x, y));
  } else if (operation == '-') {
    printf("Result is %.2f\n", sub(x, y));
  } else if (operation == '*') {
    printf("Result is %.2f\n", multiply(x, y));
  } else if (operation == '/') {
    printf("Result is %.2f\n", devide(x, y));
  }
  else {
    printf("Please enter valid expression");
  }

  return 0;
}

void instruction(void)
{
  printf("This program performs addition, substruction, multiplication and devision.\n");
}

double add(double x, double y)
{
  double a;

  a = x + y;

  return a;
}

double sub(double x, double y)
{
  double a;

  a = x - y;

  return a;
}

double multiply(double x, double y)
{
  double a;

  a = x * y;

  return a;
}

double devide(double x, double y)
{
  double a;

  a = x / y;

  return a;
}
