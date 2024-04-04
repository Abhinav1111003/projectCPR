#define _CRT_SECURE_NO_WARNINGS
#include "converting.h"
#define BUFFER_SIZE 80 // Setting the input storing string buffer to value of 80 characters

/* Version 1 */

void converting()
{

   printf("*** Start of Converting Strings to int Demo ***\n");

   /*declaring Array of characters having size euqals to buffer size
   input strin will be stored in intString variable */
   char intString[BUFFER_SIZE];

   // integer number will be stored in this variable after its conversion
   int intNumber;

   // Do-while loop and this will iterate until it satisfy the terminating condition
   do
   {
      printf("Type an int numeric string (q - to quit) :\n");
      fgets(intString, BUFFER_SIZE, stdin);    // Getting input from keyboard and storing in intString
      intString[strlen(intString) - 1] = '\0'; /*Replacing the new line char(\n) with \0 so
    that compiler read only new string which user enter  */

      if (strcmp(intString, "q") != 0) // checking if entered string is not 'q' using string comparison function
                                       // if this cndition satisfies then loop will run further
      {
         intNumber = atoi(intString); // Converting string to integer using atoi() function
         printf("Converted number is %d\n", intNumber);
      }

   } while (strcmp(intString, "q") != 0);

   printf("*** End of Converting Strings to int Demo ***\n\n");
}
