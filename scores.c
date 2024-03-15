#include <stdio.h>
#include <cs50.h>

const int N = 3;

int main(void)
{
    // int score1 = 72;
    // int score2 = 73;
    // int score3 = 33;

    // printf("Avaerage: %.3f\n", (score1+ score2+score3)/3.0);
    int score[N];

    // score[0] = get_int("Score: ");
    // score[1] = get_int("Score: ");
    // score[2] = get_int("Score: ");

    for(int i=0; i<N; i++)
    {
        score[i] = get_int("Score: ");
    }

    printf("Average: %f\n", (score[0]+score[1]+score[2]) / (float)N);

}
