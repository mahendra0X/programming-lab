#include<stdio.h>
#include<math.h>
int main(){
  char op;
  double a,b,result;

  printf("Enter an operator (+, -, *, /, ^): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &a, &b);
  switch(op)
  {
    case '+':
      result = a + b;
      break;
    case '-':
      result = a - b;
      break;
    case '*':
      result = a * b;
      break;
    case '/':
      if(b != 0)
        result = a / b;
      else {
        printf("Error: Division by zero\n");
        return 1;
      }
      break;
    case '^':
      result = pow(a, b);
      break;
    default:
      printf("Error: Invalid operator\n");
      return 1;
  }
  printf("%.2lf %c %.2lf = %.2lf\n", a, op, b, result);
  return 0;
}