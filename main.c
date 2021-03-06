#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Linked_List.h"
#include "Playlist.h"

int main(){
  srand(time(NULL));
  printf("=============\n");
  printf("Introduction:\n");
  printf("=============\n\n");
  printf("Production of Matthew So"); 
  printf("Period 4\n"); 
  printf("Project 0: Tunez\n"); 
  printf("October 21, 2016\n\n\n"); 

  printf("======================\n");
  printf("Testing Initialization\n");
  printf("======================\n\n");

  printf("Creating list with 'forever dolphin love' by 'conan mockasin'.\n\n");
  song_node* test = insert_inOrder( "forever dolphin love", "conan mockasin", 0);

  printf("List print:\n");
  print_list(test);
  printf("\n\n");

  printf("======================\n");
  printf("Testing Insert Front\n");
  printf("======================\n\n");

  printf("Inserting 'megumi milkyway' by 'conan mockasin' to the front of the list.\n\n");
  test = insert_front("megumi milkyway", "conan mockasin", test);

  printf("List print:\n"); 
  print_list(test);
  printf("\n\n");

  printf("=======================\n");
  printf("Testing Insert In Order\n");
  printf("=======================\n\n");

  test = insert_inOrder("salad days", "mac demarco", test);
  test = insert_inOrder("never", "taylor swift",test);
  test = insert_inOrder("heat", "homeshake",test);
  test = insert_inOrder("closer", "the tiny",test);
  test = insert_inOrder("ultralight beam", "kayne",test); 

  printf("List print:\n");  
  print_list(test);
  printf("\n\n");

  printf("=======================\n");
  printf("Testing Find Artist\n");
  printf("=======================\n\n");

  song_node* temp = find_artist("kayne", test);
  print_single(temp);

  printf("=======================\n");
  printf("Testing Find Name\n");
  printf("=======================\n\n");

  temp = find_name("heat", test);
  print_single(temp);

  printf("=======================\n");
  printf("Random Node\n");
  printf("=======================\n\n");

  temp = random_node(test);
  print_single(temp);
  temp = random_node(test);
  print_single(temp);
  temp = random_node(test);
  print_single(temp);

  printf("=======================\n");
  printf("Remove Song\n");
  printf("=======================\n\n");

  printf("Removing 'oswalds last song' by 'taylor swift'.\n");
  test = remove_song("closer", "the tiny", test);

  printf("List print:\n");  
  print_list(test);
  printf("\n\n");

  printf("=======================\n");
  printf("Free List\n");
  printf("=======================\n\n");

  printf("Length: %lu\n", length(test));
  test = free_list(test);
  printf("Length: %lu\n", length(test));


  printf("\n\n");
  table turn_table = { NULL };
  add_song(turn_table, "julep", "punch brothers");
  add_song(turn_table, "whoots in the room", "kat the rice serf");
  add_song(turn_table, "driftin away", "kat the rice serf");
  print_library(turn_table);

  shuffle(turn_table);

  temp = search_name(turn_table, "whoots in the room");
  print_single(temp);

  temp = search_artist(turn_table, "kat the rice serf");
  print_single(temp);

  print_artist(turn_table, "punch brothers");

  delete_song(turn_table,"julep", "punch brothers");
  print_library(turn_table);

  delete(turn_table);
  print_library(turn_table);




  return 0; 
}
