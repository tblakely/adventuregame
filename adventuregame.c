/*
ITS240
Final Project
Adventure Game
*/

#include <stdio.h>

void introBeg();
void badEnd();
void goodEnd(int);

int main()
{
  char note, chest, all, sit, cushion, handle;
  int items;
  
  
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
      items = 1;
    }
    else
    {
      printf("\nYou leave everything in the chest.");
      printf("\nYou close the chest");
      items = 0;
    }
  }
  else
  {
    printf("\nYou do not open the chest.");
    items = 0;
  }
  
  printf("\nWould you like to sit on the sofa?");
  printf("\nInput [y]/[n]\n");
  scanf(" %c", &sit);
  
  if (sit == 'Y'||sit == 'y')
  {
  printf("\nYou sit on the sofa.");
  printf("\nIt is not very comfortable.");
  printf("\nIt feels like something is under a cushion.");
    
  printf("\nWould you like to check under the cushion?");
  printf("\nInput [y]/[n]\n");
  scanf(" %c", &cushion);
    
    if (cushion == 'Y'||cushion == 'y')
    {
      printf("\nYou check underneath the cushion and find a door handle.");
      
      printf("\nWould you like to pick up the handle?");
      printf("\nInput [y]/[n]\n");
      scanf(" %c", &handle);
      
      if (handle == 'Y'||handle =='y')
      {
        printf("\nYou pick up the door handle.");
        goodEnd(items);
      }
      else
      {
        printf("\nYou do not pick up the door handle.");
        badEnd();
      }
    }
    else
    {
      printf("\nYou do not check underneath the cushion.");
            badEnd();
    }
  
  }
  else
  {
    printf("\nYou do not sit on the sofa.");
    badEnd();
  }
    
}

void introBeg()
{
  printf("\nYou wake to an unfamiliar room with a large metal door in front of you with no handle.");
  printf("\nThe room is dark, but you can make out a few pieces of furniture and an empty fireplace.");
  printf("\nAround the room you see a large wooden chest a leather sofa and a coffee table with a note on it.");
}

void badEnd()
{
   printf("\nYou are trapped in the room.");
  printf("\nFor all of eternity.");
  printf("\nLil bitch.");
}

void goodEnd(int items)
{
  printf("\nYou stick the handle in the door and open it.");
  printf("\nOutside you see a car and an open field.");
  if (items = 1)
  {
    printf("\nYou open the car with the key you found and drive off into the sunset.");
    printf("\nCONGRATULATIONS YOU FOUND THE BEST ENDING");
  }
  else
  {
    printf("\nYou are free.");
    printf("\nYou start walking, hopefully finding civilization soon.");
    printf("\nCONGRATULATIONS YOU FOUND THE GOOD ENDING");
  }
}
