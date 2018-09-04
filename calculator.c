/**
 * This programs provides basic calculator functionality
 * allowing a user to enter two operands and to compute
 * various calculated values.
 *
 //Daniel Pankey and Amanda Whitlatch
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char **argv) {

  double a, b, c;
  int choice;

  printf("Enter operand a: ");
  scanf("%lf", &a);

  printf("Enter operand b: ");
  scanf("%lf", &b);

  printf("Enter operation:\n");
  printf("(1) Addition\n");
  printf("(2) Subtraction\n");
  printf("(3) Multiplication\n");
  printf("(4) Division\n");
  printf("(5) Minimum\n");
  printf("(6) Power\n");
  printf("(7) log_a(b)\n");
  scanf("%d", &choice);

if (choice == 1)
{
  c = a + b;
}
if (choice == 2)
{
  c = a - b;
}
if (choice == 3)
{
  c = a * b;
}
 else if (choice == 4 && b == 0)
 {
   printf("You cannot divide by zero.\n");
   end(1);
 }
 if (choice == 4)
 {
   c = a/b;
 }
 if (choice == 5)
 {
   if (a>b)
   {
     printf("a is larger\n");
   }
   else if (a<b)
   {
     printf("b is larger\n");
   }
   else
   {
     printf("They are the same\n");
   }
 }
   if (choice == 6)
   {
     c = pow(a,b);
   }
   if (choice == 7)
   {
     c = log(b)/log(a);
   }

   printf("Your answer is: %lf \n", c);




  //TODO: process the results here


  return 0;
}
