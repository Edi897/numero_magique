#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int random_number = rand() % 100 + 1;
    printf("essayer de trouver le numero chacher\n");
    int user;

    while (random_number != user)
    {
        printf("choisissez un nombre entre 1 et 100 : \n");
        scanf("%d", &user);

        if (random_number < user)
        {
            printf("c'est moins !\n ");
        }

        else if (random_number > user)
        {
            printf("c'est plus \n");
        }

        else
        {
            printf("gagner\n");
        }
    }

 return 0;
}