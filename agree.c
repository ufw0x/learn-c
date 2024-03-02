#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c = get_char("Do you agree? ");
    c = tolower(c);

    if(c == 'y')
    {
        printf("Agree\n");
    }
    else if(c == 'n')
    {
        printf("Not agree.\n");
    }
    }
