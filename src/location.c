#include <stdio.h>
#include <string.h>


void movement(const char *noun, int x, int y)
{
  /*
  Movement along x and y coordinates
  */
   int x;
   int y;
   
   if(noun == "right" && x != 100){
   /* Move right */
     x++;
   }
   else if(noun == "left" && x != 0){
   /* Move left */
     x--;
   }
  else if(noun == "up" && y != 100){
   /* Move up */
    y++;
   }
  else if(noun == "down" && y != 0){
   /* Move down */
    y--;
   }
  else{
     printf("The direction you have entered is invalid. \n");
  }
  
  
}
