#include <stdio.h>

void introBeg();

int main()
{
  int inspect;
  introBeg();
  printf("\n\nWhat would you like to inspect first?");
  prinf("\nInput 1 for coffee table, 2 for sofa, 3 for chest.);
  scanf("%d", &inspect);
        
}

void introBeg()
{
  printf("\nYou wake to an unfamiliar room with a large metal door in front of you with no handle.");
  printf("\nThe room is dark, but you can make out a few pieces of furniture and an empty fireplace.");
  printf("\nAround the room you see a large wooden chest a leather sofa and a coffee table with a note on it.");
}
