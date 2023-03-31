#include <stdio.h>
#include <stdlib.h>

//This program prints 2D arrays entered by user and calculates sum

int main(void) 
{
  int a [2] [3], i, j, sum = 0;

  printf("Welcome User, Please enter the elements of your array:\n");
  
  for (i = 0; i < 2; i++)
    {
    for (j = 0; j < 3; j++)
      scanf("%d", &a[i][j]);
    }

   for (i = 0; i < 2; i++)
    {
    for (j = 0; j < 3; j++)
      {
        printf("%d\t", a[i][j]);
        sum = sum + a[i][j];
      }
      printf("\n");
    }

  printf("\nsum = %d\n", sum);

  printf("\n\nEnd of program\n");
  sleep(10);
  system("clear");
  printf("Welcome, User\n");
  
  return 0;
}