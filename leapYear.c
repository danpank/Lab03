/**
 * This program determines if various years are leap years or not.
 *
 Daniel Pankey and Amanda Whitlatch
 */
#include<stdlib.h>
#include<stdio.h>

/**
 * Returns true (1) if the given year is a leap year,
 * false (0) if it is not a leap year.
 */
int isLeapYear(int year);

int main(int argc, char **argv) {

  int year;
  int numPassed = 0;
  int numFailed = 0;

  //hard-coded ad-hoc test cases

  year = 2000;
  printf("Test Case 1: year = %d: ", year);
  if(!isLeapYear(year)) {
    printf("FAILED!\n");
    numFailed = numFailed + 1;
  } else {
    printf("PASSED!\n");
    numPassed = numPassed + 1;
  }

  year = 2001;
  printf("Test Case 2: year = %d: ", year);
  if(isLeapYear(year)) {
    printf("FAILED!\n");
    numFailed = numFailed + 1;
  } else {
    printf("PASSED!\n");
    numPassed = numPassed + 1;
  }

  year = 2100;
  printf("Test Case 3: year = %d: ", year);
  if(!isLeapYear(year)) {
    printf("FAILED!\n");
    numFailed = numFailed + 1;
  } else {
    printf("PASSED!\n");
    numPassed = numPassed + 1;
  }
  year = 1900;
  printf("Test Case 3: year = %d: ", year);
  if(!isLeapYear(year)) {
    printf("FAILED!\n");
    numFailed = numFailed + 1;
  } else {
    printf("PASSED!\n");
    numPassed = numPassed + 1;
  }
  year = 1940;
  printf("Test Case 3: year = %d: ", year);
  if(!isLeapYear(year)) {
    printf("FAILED!\n");
    numFailed = numFailed + 1;
  } else {
    printf("PASSED!\n");
    numPassed = numPassed + 1;
  }
  year = 1902;
  printf("Test Case 3: year = %d: ", year);
  if(isLeapYear(year)) {
    printf("FAILED!\n");
    numFailed = numFailed + 1;
  } else {
    printf("PASSED!\n");
    numPassed = numPassed + 1;
  }

  //TODO: write at least 3 more of your own test cases



  printf("\n\n");
  printf("Summary:\n");
  printf("Number of test cases passed: %d\n", numPassed);
  printf("Number of test cases failed: %d\n", numFailed);
  printf("Percentage Passed: %.2f%%\n", (double) numPassed / (numPassed + numFailed) * 100.0);

  return 0;
}

int isLeapYear(int year) {
  if (year % 4 == 0) {
    return 1;
  }
  return 0;

  if (year % 100 == 0) {
    return 0;
  }
  return 1;

 if (year % 100 == 0 && year % 400 == 0) {
    return 1;
  }
  return 0;

}
