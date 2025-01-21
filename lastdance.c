#include <stdio.h>

int main()
{
    int movie, reserve,select,i;
    int seat[]= {40,50,30};

    printf("Welcome to the Cineplex Management System!!\n\n");


    printf("Available Movies:\n");
    printf("1. Action Movie - Seats available: %d\n", seat[0]);
    printf("2. Comedy Movie - Seats available: %d\n", seat[1]);
    printf("3. Anime Movie - Seats available: %d\n", seat[2]);


    printf("\nEnter the Categories Number of the movie you want to watch: ");
    scanf("%d", &movie);

    if (movie < 1 || movie > 3)
    {
        printf("Invalid movie choice.\n");
        return 0;
    }


    if (movie == 1)
    {

        printf("You selected Action Movie.\n\n");
        printf("Which Action Movie You Want To Watch?\n");
        printf("1. Avengers Endgame\n");
        printf("2. Mission Impossible 3\n");
        printf("3. Spider Man 3\n\n");
        printf("Select The One You Want to Watch :\n");
        scanf("%d",&select);
        if (select < 1 || select > 3)
        {
            printf("Invalid movie choice.\n");
            return 0;
        }



        printf("How many seats would you like to reserve :\n");
        scanf("%d", &reserve);
        if (reserve <= seat[0])
        {
            seat[0] -= reserve;
            printf("\nCongratulations!!!!!");
            printf("Seats reserved successfully!\n" );
            printf("Remaining seats: %d\n", seat[0]);

        }
        else
        {
            printf("Sorry, not enough seats available.\n");
        }
    }
    else if (movie == 2)
    {
        printf("You selected Comedy Movie.\n\n");
        printf("Which Comedy Movie You Want To Watch?\n");
        printf("1. Liar Liar\n");
        printf("2. The Hangover 2\n");
        printf("3. Home Alone\n\n");
        printf("Select The One You Want to Watch :\n");
        scanf("%d",&select);
        if (select < 1 || select > 3)
        {
            printf("Invalid movie choice.\n");
            return 0;
        }
        printf("How many seats would you like to reserve:\n");
        scanf("%d", &reserve);
        if (reserve <= seat[1])
        {
            seat[1] -= reserve;
            printf("\nCongratulations!!!!!");
            printf("Seats reserved successfully!\n" );
            printf("Remaining seats: %d\n", seat[1]);
        }
        else
        {
            printf("Sorry, not enough seats available.\n");
        }
    }
    else if (movie == 3)
    {
        printf("You selected Comedy Movie.\n\n");
        printf("Which Anime Movie You Want To Watch?\n");
        printf("1. Megamind\n");
        printf("2. Despicable Me 2\n");
        printf("3. Rango \n\n");
        printf("Select The One You Want to Watch :\n");
        scanf("%d",&select);
        if (select < 1 || select > 3)
        {
            printf("Invalid movie choice.\n");
            return 0;
        }
        printf("How many seats would you like to reserve :\n");
        scanf("%d", &reserve);
        if (reserve <= seat[2])
        {
            seat[2] -= reserve;
            printf("\nCongratulations!!!!!");
            printf("Seats reserved successfully!\n" );
            printf("Remaining seats: %d\n", seat[2]);
        }
        else
        {
            printf("Sorry, not enough seats available.\n");
        }
    }
    else
    {
        printf("Invalid movie choice.\n");
    }

    return 0;
}


