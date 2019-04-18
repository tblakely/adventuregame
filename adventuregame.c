/*
ITS240
Final Project
Adventure Game
*/

#include <stdio.h>
#include <windows.h>

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
    Sleep(3000);
    printf("\nThe note reads: 'Check the sofa.'");
  }
  else
    printf("\nYou do not read the note.");
 
  Sleep(3000);
  printf("\nWould you like to open the chest.");
  printf("\nInput [y]/[n]\n");
  scanf(" %c", &chest);
  
  if (chest == 'Y'||chest == 'y')
  {
    printf("\nYou open the chest.");
    Sleep(3000);
    printf("\nInside the chest you find a car key, a laptop, and 500 dollars cash.");
    Sleep(3000);
    printf("\nWould you like to take all?");
    printf("\nInput [y]/[n]\n");
    scanf(" %c", &all);
    
    if (all == 'Y'||all == 'y')
    {
      printf("\nYou take the car key, laptop, and 500 dollars");
      Sleep(3000);
      printf("\nYou close the chest.");
      items = 1;
    }
    else
    {
      printf("\nYou leave everything in the chest.");
      Sleep(3000);
      printf("\nYou close the chest");
      items = 0;
    }
  }
  else
  {
    printf("\nYou do not open the chest.");
    items = 0;
  }
  
  Sleep(3000);
  printf("\nWould you like to sit on the sofa?");
  printf("\nInput [y]/[n]\n");
  scanf(" %c", &sit);
  
  if (sit == 'Y'||sit == 'y')
  {
  printf("\nYou sit on the sofa.");
  Sleep(3000);
  printf("\nIt is not very comfortable.");
  Sleep(3000);
  printf("\nIt feels like something is under a cushion.");
  Sleep(3000);
    
  printf("\nWould you like to check under the cushion?");
  printf("\nInput [y]/[n]\n");
  scanf(" %c", &cushion);
    
    if (cushion == 'Y'||cushion == 'y')
    {
      printf("\nYou check underneath the cushion and find a door handle.");
      
      Sleep(3000);
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
        Sleep(3000);
        badEnd();
      }
    }
    else
    {
      printf("\nYou do not check underneath the cushion.");
      Sleep(3000);
            badEnd();
    }
  
  }
  else
  {
    printf("\nYou do not sit on the sofa.");
    Sleep(3000);
    badEnd();
  }
    
}

void introBeg()
{
  printf("\nYou wake to an unfamiliar room with a large metal door in front of you with no handle.");
  Sleep(3000);
  printf("\nThe room is dark, but you can make out a few pieces of furniture and an empty fireplace.");
  Sleep(3000);
  printf("\nAround the room you see a large wooden chest a leather sofa and a coffee table with a note on it.");
}

void badEnd()
{
   printf("\nYou are trapped in the room.");
  Sleep(3000);
  printf("\nFor all of eternity.");
  Sleep(15000);
  printf("\nLil bitch.");
}

void goodEnd(int items)
{
  printf("\nYou stick the handle in the door and open it.");
  Sleep(3000);
  printf("\nOutside you see a car and an open field.");
  Sleep(3000);
  if (items == 1)
  {
    printf("\nYou open the car with the key you found and drive off into the sunset.");
    Sleep(3000);
    printf("\nCONGRATULATIONS YOU FOUND THE BEST ENDING");
  }
  else
  {
    printf("\nYou are free.");
    Sleep(3000);
    printf("\nYou start walking, hopefully finding civilization soon.");
    Sleep(1000);
    printf("\nCONGRATULATIONS YOU FOUND THE GOOD ENDING");
  }
}
