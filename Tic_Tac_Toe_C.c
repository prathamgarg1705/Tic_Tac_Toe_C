#include <stdio.h>
#include <string.h>

static int moves = 0;

int check(char array[3][3])
{

    for (int i = 0; i < 3; i++)
    {
        if (array[i][0] == array[i][1] && array[i][1] == array[i][2])
        {
            if (array[i][0] == 'x')
            {
                printf("Player 1 (x) has won.");
                return 0;
            }
            else
            {
                printf("Player 2 (o) has won.");
                return 0;
            }
        }
    }

    if (array[0][0] == array[1][1] && array[1][1] == array[2][2])
    {
        if (array[0][0] == 'x')
        {
            printf("Player 1 (x) has won.");
            return 0;
        }
        else
        {
            printf("Player 2 (o) has won.");
            return 0;
        }
    }

    if (array[0][2] == array[1][1] && array[2][0] == array[1][1])
    {
        if (array[1][1] == 'x')
        {
            printf("Player 1 (x) has won.");
            return 0;
        }
        else
        {
            printf("Player 2 (o) has won.");
            return 0;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (array[0][i] == array[1][i] && array[1][i] == array[2][i])
        {
            if (array[0][i] == 'x')
            {
                printf("Player 1 (x) has won.");
                return 0;
            }
            else
            {
                printf("Player 2 (o) has won.");
                return 0;
            }
        }
    }
    if (moves == 9)
    {
        printf("Draw\n");
        return 0;
    }
    return 1;
}

int main()
{
    printf("Welcome to Tic Tac Toe\n");

    char array[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char temp[3][3];
    goto player1;

player1:
{
    int che = check(array);
    if (che == 0)
    {
        return 0;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c\t", array[i][j]);
        }
        printf("\n");
    }

    printf("Player 1 (x) choose his move: ");
    char p1;
    scanf(" %c", &p1);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (p1 == array[i][j])
            {
                array[i][j] = 'x';
                moves++;
                goto player2;
            }
        }
    }

    printf("This position is already selected. Choose another one.\n");
    goto player1;
}

player2:
{
    int che = check(array);
    if (che == 0)
    {
        return 0;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c\t", array[i][j]);
        }
        printf("\n");
    }

    printf("Player 2 (o) choose his move: ");
    char p2;
    scanf(" %c", &p2);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (p2 == array[i][j])
            {
                array[i][j] = 'o';
                moves++;
                goto player1;
            }
        }
    }
    printf("This position is already selected. Choose another one.\n");
    goto player2;
}
}