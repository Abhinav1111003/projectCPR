#define _CRT_SECURE_NO_WARNINGS
#include "tokenizing.h"
#define BUFFER_SIZE 80 // Setting the maximum size of string separated by words to value 80

/* Version 1 */
void tokenizing()
{

    printf("*** Start of Tokenizing Words Demo ***\n");

    char words[BUFFER_SIZE]; // character array will store the user entered string having size equals to BUFFER_SIZE
    char *nextWord = NULL;   // Pointer of character type for storing next word in a sentence
                             // Assigning null value to it so if user enter only one word then it won't show any error
    int wordsCounter;        // It will count the number of words entered

    do
    {

        printf("Type a few words separated by space (q - to quit) :\n");
        fgets(words, BUFFER_SIZE, stdin); // Getting sentence from keyboard
        words[strlen(words) - 1] = '\0';  // replacing new line character will null character to clear buffer

        if (strcmp(words, "q") != 0)
        {
            /* breaks words into tokens using space as delimiter by using string inbuilt function */
            nextWord = strtok(words, " ");
            wordsCounter = 1; // As first word has already been store so word counter value has been changed to 1

            while (nextWord) // loop to print words which are separated by space separately
            {
                printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
                nextWord = strtok(NULL, " "); // replacing null with space and then getting following word in nextWord
            }
        }

    } while (strcmp(words, "q") != 0); // iterate the loop until user enteres the character q

    printf("*** End of Tokenizing Words Demo ***\n\n");
}