#include <stdio.h>
#include <stdlib.h>

int main()
{
    game_start:

    printf("***********************************************\n");
    printf("###.......WHO WANTS TO BE A MILLIONAIRE.....###\n");
    printf("***********************************************\n");

    printf("Question:\nWhat is the name of the creator of Bitcoin?\n");
    printf("a) Niki Shanon\n");
    printf("b) Shanon Kwame\n");
    printf("c) Nakamoto\n");
    printf("d) Akua Nakamoto\n");
    printf("***********************************************\n");
    printf("Answer: ");

    char userChoice = getchar();

    char userChoice = scanf("%c", &userChoice);
    //printf("Answer: %c\n", userChoice);

    switch(userChoice)
    {
        case 'c':
            printf("Correct\n\n");
            break;
        default:
            printf("Wrong\n\n");
            goto game_start;
    }


    return 0;
}
