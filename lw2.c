#include <stdio.h>
int main()
{
    char character;
    int letterO = 0, letterA = 0, letterE = 0, letterI = 0, letterU = 0, counter = 0;
    printf("Please enter 20 upper case letters to find out how much vowels characters occur in it: ");
    while (counter < 20)
    {
        scanf(" %c", &character);
        counter++;
        switch (character)
        {
        case 'A':
            letterA++;
            break;
        case 'E':
            letterE++;
            break;
        case 'I':
            letterI++;
            break;
        case 'U':
            letterU++;
            break;
        case 'O':
            letterO++;
            break;
        }
    }
    printf("'A' repeated %d time(s)", letterA);
    printf("'E' repeated %d time(s)", letterE);
    printf("'I' repeated %d time(s)", letterI);
    printf("'U' repeated %d time(s)", letterU);
    printf("'O' repeated %d time(s)", letterO);
}