/**
 * This program computes income taxes based on adjusted
 * gross income and a child tax credit.
 *
 Daniel Pankey and Amanda Whitlatch
 09/04/18
 */
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv) {

  double agi;
  char c;
  double tax;
  int numberOfChildren;
  double childCredit;
  double totalTax;

  printf("Please enter your adjusted gross income (AGI): ");
  scanf("%lf", &agi);

  printf("Do you have any children? (Y) or (N)? ");
  getchar(); //remove the endline character
  c = getchar();

numberOfChildren = 0;

  if (c == 'Y')
  {
    printf("Please input the amount of children you have: ");
    scanf("%d", &numberOfChildren);
  }

childCredit = numberOfChildren * 1000;

if(agi <= 0)
{
  printf("You owe no taxes since you do not have an income");
}
else if (agi > 0 && agi <= 17000) {
  tax = (agi*.10);
}
else if (agi > 17000 && agi <= 69000)
{
  tax = (1700 + (agi*.15));
}
else if (agi > 69000 && agi <= 139350)
{
  tax = (9500 + (agi*.25));
}
else if (agi > 139350 && agi <= 212300)
{
  tax = (27087.50 + (agi*.28));
}
else if(agi  > 212300 && agi <= 379150)
{
  tax = (102574.00 + (agi*.35));
}

totalTax = tax - childCredit;

if (totalTax < 0)
{
  totalTax = 0;
}


  printf("AGI:          $%10.2f\n", agi);
  printf("Tax:          $%10.2f\n", tax);
  printf("Child Credit: $%10.2f\n", childCredit);
  printf("totalTax:     $%10.2f\n", totalTax);

  return 0;
}
