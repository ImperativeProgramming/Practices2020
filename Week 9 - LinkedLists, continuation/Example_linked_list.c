#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person
{
  char name[50];
  int yearBorn;
  struct Person *next;
};

struct Person* push(int yearBorn, char *name, struct Person* previous){
  struct Person *pn = malloc(sizeof(struct Person));
  pn->yearBorn = yearBorn;
  strcpy(pn->name, name);
  previous->next = pn;
  previous = pn;
  pn->next = NULL;
  return pn;
}

int main(){

  struct Person *head = NULL;

  struct Person *p1 = malloc(sizeof(struct Person));
  p1->yearBorn = 1800;
  strcpy(p1->name, "Name 0");
  head = p1;

  p1 = malloc(sizeof(struct Person));
  head->next = p1;
  p1->yearBorn = 1801;
  p1->next = NULL;
  strcpy(p1->name, "Name 1");
  struct Person *previous = p1;

  p1 = malloc(sizeof(struct Person));
  head->next = previous;
  p1->yearBorn = 1802;
  previous->next = p1;
  strcpy(p1->name, "Name 2");
  previous = p1;

  for(int i=0; i<2; i++){
    char * name = strdup("Josh");
    previous = push(1900+i,name, previous);
  }

  struct Person *current = head;

  while(current != NULL){
    printf("%s \n", current->name);
    //printf("%p\n", current->next);
    current = current->next;

  }

  /* code */
  return 0;

}
