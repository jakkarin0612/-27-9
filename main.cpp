#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
float score;
    printf("Enter score\n");
    scanf("%f",&score);
    int x = score;
    switch(x/10)
    {
      case 10:
      case 9:
      case 8:
      if (score <= 100)
        printf("Grade A\n");
        break;

      case 7:
      if (score >= 75 )
        printf("Grade B+\n");
        else 
        printf("Grade B\n");
        break;

      case 6:
      if (score >= 65 )
        printf ("Grade C+\n");
        else
        printf("Grade C\n");
        break;

      case 5:
      if (score >= 55)
        printf("Grade D+\n");
        else 
        printf("Grade D\n");
        break;

      default:
        printf("Grade F\n");
        break;
    }
    return 0;
}