#define _CRT_SECURE_NO_WARNINGS // Define to suppress security-related warnings in Visual
#define BUFFER_SIZE 80			// Define the buffer size for input strings
#define NUM_INPUT_SIZE 10		// Define the buffer size for numerical input
#include "fundamentals.h"		// Include the header file "fundamentals.h"

void fundamentals(void) /* Version 1 */
{
	printf("*** Start of Indexing Strings Demo ***\n"); // Print a start message
	char buffer1[BUFFER_SIZE];							// Define a buffer to store string input
	char numInput[NUM_INPUT_SIZE];						// Define a buffer to store numerical input
	size_t position;									// Define a variable to store the position
	do
	{
		printf("Type not empty string (q - to quit):\n"); // Prompt the user for input
		fgets(buffer1, BUFFER_SIZE, stdin);				  // Read a string from the user
		buffer1[strlen(buffer1) - 1] = '\0';			  // Remove the newline character

		if (strcmp(buffer1, "q") != 0) // Check if the input is not "q"
		{
			printf("Type the character position within the string:\n"); // Prompt for position input
			fgets(numInput, NUM_INPUT_SIZE, stdin);						// Read the position input
			numInput[strlen(numInput) - 1] = '\0';						// Remove the newline character
			position = atoi(numInput);									// Convert the position input to an integer
			if (position >= strlen(buffer1))							// Check if the position is greater than or equal to the string length
			{
				position = strlen(buffer1);								   // If so, set the position to the last valid index
				printf("Too big... Position reduced to max. available\n"); // Print a warning message
			}
			printf("The character found at %d position is \'%c\'\n", (int)position, buffer1[position - 1]); // Print the character at the specified position
		}
	} while (strcmp(buffer1, "q") != 0); // Continue the loop until the user inputs "q"
	printf("*** End of Indexing Strings Demo ***\n\n"); // Print an end message
}
