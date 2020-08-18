#include <stdio.h>
#include <string.h>
#include "location.h"



static char input[100];

/*
int getInput()
For getting the keys that the user pressed
*/
static int getInput()
{
   printf("\n Action:   ");
   return fgets(input, sizeof(input), stdin) != NULL;
}

static int parseAndExecute()
{
   char *direction = strtok(input, " \n");
   
   if (direction != NULL)
   {
      if (strcmp(direction, "quit") == 0)
      {
         return 0;
      }
      else if (strcmp(direction, "up") == 0)
      {
         printf("Up \n");
      }
      else if (strcmp(direction, "down") == 0)
      {
         printf("Down \n");
      }      
      else if (strcmp(direction, "right") == 0)
      {
         printf("Right \n");
      }
      else if (strcmp(direction, "left") == 0)
      {
         printf("Left \n");
      }
      else
      {
         printf(" '%s' is not a valid direction.\n", direction);
      }
   }
   return 1;
}




int main()
{
   printf("Welcome Julia!\n");
   printf("I hope you enjoy this \n");
   printf("Please enter 'up', 'down', 'right', or 'left' to begin your adventure \n");
   printf("Type 'quit' to exit the game \n");
   
   while (getInput() && parseAndExecute());
   
   printf("\n I hope I this made you smile :)!\n");
   
   return 0;
}


/* 
Reference:
https://home.hccnet.nl/r.helderman/adventures/htpataic02.html
*/
