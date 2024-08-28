#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

char lettersGuessed[];
int guessCount;

void prompt_for_guess(void);
int main(void)
{
    do
    {
        prompt_for_guess();
        printf("%c\n", toupper(lettersGuessed[guessCount]));
    } while (guessCount < 10);
}

void prompt_for_guess(void)
{
    printf("Enter your guess: ");
    char letter;
    scanf("%c", &letter);
    if (isalpha(letter) == 0)
    {
        printf("Please input a letter.\n");
    }
    ++guessCount;
    lettersGuessed[guessCount] = letter;
}