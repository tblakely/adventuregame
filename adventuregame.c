/*
ITS240
Final Project
Adventure Game
*/

#include <stdio.h>

void introBeg();

int main()
{
  char note, chest, all, sit;
  
  
  introBeg();
  
  printf("\nWould you like to read the note?");
  printf("\nInput [y]/[n]\n");
  scanf(" %c", &note);
  
  if (note == 'Y'||note == 'y')
  {
    printf("\nYou pick up the note");
    printf("\nThe note reads: 'Check the sofa.'");
  }
  else
    printf("\nYou do not read the note.");
  
  printf("\nWould you like to open the chest.");
  printf("\nInput [y]/[n]\n");
  scanf(" %c", &chest);
  
  if (chest == 'Y'||chest == 'y')
  {
    printf("\nYou open the chest.");
    printf("\nInside the chest you find a car key, a laptop, and 500 dollars cash.");
    printf("\nWould you like to take all?");
    printf("\nInput [y]/[n]\n");
    scanf(" %c", &all);
    
    if (all == 'Y'||all == 'y')
    {
      printf("\nYou take the car key, laptop, and 500 dollars");
      printf("\nYou close the chest.");
    }
    else
    {
      printf("\nYou leave everything in the chest.");
      printf("\nYou close the chest");
    }
  }
  else
    printf("\nYou do not open the chest.");
  
  printf("Would you like to sit on the sofa?");
  printf("\nInput [y]/[n]\n");
  scanf(" %c", &sit);
  
 
        
}

void introBeg()
{
  printf("\nYou wake to an unfamiliar room with a large metal door in front of you with no handle.");
  printf("\nThe room is dark, but you can make out a few pieces of furniture and an empty fireplace.");
  printf("\nAround the room you see a large wooden chest a leather sofa and a coffee table with a note on it.");
}
