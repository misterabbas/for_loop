#include <stdio.h>

int main(void) {
  int marks[5], loop=0, sum=0;
  float average;
  
  for (loop=0; loop<5; loop++) {
    printf("\nEnter Marks[%d]: ", loop);
    scanf("%d", &marks[loop]);
    sum += marks[loop];
    printf("\nThe Total Marks is %d", sum);
  }
  average = sum/loop;
  printf("\nThe Average Marks is %.2f.", average);

  return 0;
}