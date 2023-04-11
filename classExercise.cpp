#include <stdio.h>

int main()
{
    int words = 0, characters = 0, lines = 0;
    char input[100];
    input[0] = '\0';

    char prevChar = ' ';

    printf("Enter a string:\n");
    scanf("%[^|]", input);
    printf("%s", input);

    if (input[0] != '\0')
    {
        for (int i = 0; input[i] != '\0'; i++)
        {
            if (input[i] == ' ' && prevChar != ' ' && prevChar != '\n')
            {
                words++;
            }
            else if (input[i] == '\n')
            {
                lines++;

                if (prevChar != ' ' && prevChar != '\n')
                    words++;
            }
            else if (input[i] != ' ' && input[i] != '\n')
            {
                characters++;
            }
            prevChar = input[i];
        }

        if (characters > 0 && prevChar != ' ' && prevChar != '\n')
        {
            words++;
            lines++;
        }
    }
    printf("Words: %d\nCharacters: %d\nLines: %d\n", words, characters, lines);

    return 0;
}