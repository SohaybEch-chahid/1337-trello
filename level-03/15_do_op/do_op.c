#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_Addition(int a, int b) {
  int sum = a + b;
  printf("%d", sum);
}

void ft_Subtraction(int a, int b) {
  int diff = a - b;
  printf("%d", diff);
}

void ft_Multiplication(int a, int b) {
  int multi = a * b;
  printf("%d", multi);
}

void ft_Division(int a, int b) {
  if (b == 0)
    return;
  int div = a / b;
  printf("%d", div);
}

void ft_Modulo(int a, int b) {
  if (b == 0)
    return;
  int mod = a % b;
  printf("%d", mod);
}

void Mini_Calculator(int argc, char **argv) {
  if (argc == 4) {
    int first_param = atoi(argv[1]);
    int secend_param = atoi(argv[3]);

    if (argv[2][0] == '+')
      ft_Addition(first_param, secend_param);
    else if (argv[2][0] == '-')
      ft_Subtraction(first_param, secend_param);
    else if (argv[2][0] == '*')
      ft_Multiplication(first_param, secend_param);
    else if (argv[2][0] == '/')
      ft_Division(first_param, secend_param);
    else if (argv[2][0] == '%')
      ft_Modulo(first_param, secend_param);
  }
  printf("\n");
}

int main(int argc, char *argv[]) {
  Mini_Calculator(argc, argv);
  return (0);
}
