#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int counter = 3;
  while(counter > 0)
  {
    printf("Meow!\n");
    counter -= 1; // counter = counter - 1
  }

  for(int i = 0; i < 10;i++)
  {
    printf("pooop!\n");
  }
}
