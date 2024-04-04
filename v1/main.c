#define _CRT_ SECURE_NO_WARNINGS #include
#include "converting.h"
#include "tokenizing.h"
#include "converting.c"
#include "tokenizing.c"
#include "fundamentals.h"
#include "fundamentals.c"
int main(void)
{

  char buff[10];
  do
  {
    printf("1 - Fundamentals\n");
    printf("2 - Manipulation\n");
    printf("3 - Converting\n");
    printf("4 - Tokenizing\n");
    printf("0 - Exit\n");

    printf("Which module to run? \n");
    fgets(buff, 10, stdin);

    switch (buff[0])
    {
    case '1':
      fundamentals();
      break;
    case '2':
      manipulation();
      break;
    case '3':
      converting();
      break;

    case '4':
      tokenizing();
      break;
    }

  } while (buff[0] != '0');

  return 0;
}