#include "manipulating.h" // Include the header file "manipulating.h"
#define BUFFER_SIZE 80    // Setting the maximum size of string separated by words to value 80

void manipulating()
{
    // Get two sting inputs from the user and concatenate them together and Displays the concatenated string to user.

    /* Version 1 */
    printf("*** start of Concatenating Strings Demo ***\n");
    char string1[BUFFER_SIZE];
    char string2[BUFFER_SIZE];
    // Declaring two string variables

    do
    {
        string2[BUFFER_SIZE];
        printf("Enter the first string (q - to quit):\n");
        fgets(string1, BUFFER_SIZE, stdin);
        string1[strlen(string1) - 1] = '\0';
        // removing new line character from the string

        if ((strcmp(string1, "q") != 0))
        {
            printf("Enter the second string:\n");
            fgets(string2, BUFFER_SIZE, stdin);
            string2[strlen(string2) - 1] = '\0';
            strcat(string1, string2);
            printf("Concatenated string is \'%s\' \n", string1);
            // concatenating two strings and displaying the concatenated string
        }
    } while (strcmp(string1, "q") != 0);
    // loop will iterate until user enters q
    printf("*** End of Concatenating strings Demo ***\n\n");

    /* Version 2 */
    //>> insert here

    /* Version 3 */
    //>> insert here
}
