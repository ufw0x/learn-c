#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What is your name? ");
    int age = get_int("Enter your age ");
    
    if(age<18 && age>10)
    {
      printf("Hello, %s. You are %i years old and you are not allowed!\n", name, age);
    }
    else if(age<10)
    {
        printf("Hello, %s. You are %i years old and baaaaaaaaaang!\n", name, age);
    }
    else
    {
      printf("Hello, %s. You are %i years old and you are allowed!\n", name, age);
    }
}
