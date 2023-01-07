#include <stdio.h>
#include <conio.h>
char board[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
// FUNCTION TO PRINTBOARD
void printboard()
{
    printf("\n\n");
    printf("     |     |  \n");
    printf("     |     |  \n");
    printf(" %c   | %c   | %c \n", board[1], board[2], board[3]);
    printf("_____|_____|___\n");
    printf("     |     |  \n");
    printf(" %c   | %c   | %c \n", board[4], board[5], board[6]);
    printf("_____|_____|___\n");
    printf("     |     |  \n");
    printf(" %c   | %c   | %c \n", board[7], board[8], board[9]);
    printf("     |     |  \n");
}
//FUNCTION TO CHECK THE WINNER OF THE GAME
int checkwin()
{
    int count;
    if (board[1] == board[2] && board[2] == board[3])
    {
        return 1;
    }
    else if (board[1] == board[4] && board[4] == board[7])
    {
        return 1;
    }
    else if (board[7] == board[8] && board[8] == board[9])
    {
        return 1;
    }
    else if (board[3] == board[6] && board[6] == board[9])
    {
        return 1;
    }
    else if (board[1] == board[5] && board[5] == board[9])
    {
        return 1;
    }
    else if (board[3] == board[5] && board[5] == board[7])
    {
        return 1;
    }
    else if (board[2] == board[5] && board[5] == board[8])
    {
        return 1;
    }
    else if (board[4] == board[5] && board[5] == board[6])
    {
        return 1;
    }
   
    count=0;
    for (int i = 1; i <= 9; i++)
    {
        if (board[i] == 'X' || board[i] == 'O')
        {
            count++;
        }
    }
    if (count == 9)
    {
        return 0;
    }
    return -1;
}


// MAIN FUNCTION
int main()
{
    int player = 1, input;
    printf("****TIC TAC TOE****\n");
    // CALLING PRINTBOARD FUNCTION
    printboard();
    while (1)
    {
        player = (player % 2 == 0) ? 2 : 1;
        char mark = (player == 1) ? 'X' : 'O';

        printf("ENTER THE NUMBER FOR PLAYER %d:\n", player);
        scanf("%d", &input);
        if (input < 1 || input > 9)
        {
            printf("INVALID INPUT\n");
        }
        else
        {
            board[input] = mark;
        }
        printboard();
        int result = checkwin();
        if (result == 1)
        {
            printf(" PLAYER %d IS THE WINNER\n", player);
            return;
        }
        else if (result == 0)
        {
            printf("MATCH DRAW\n");
            return;
        }
        player++;
        
    }

    return 0;
}



