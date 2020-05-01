#include <stdio.h>
#include <stdlib.h>

struct Node{
  int x;
  struct Node * next;
};

void printNode(struct Node * myNode){
  printf("#####\n" );
  printf("this node: %p\n", myNode);
  printf("%d\n",myNode->x );
  printf("next node: %p\n", myNode->next);
  printf("#####\n" );
}

void printList(struct Node * head){
  struct Node * temporary = head;
  while(temporary != NULL){
    printNode(temporary);
    temporary = temporary->next;
  }
}

struct Node * newNode(int x){
  struct Node * myNode = (struct Node *) malloc(sizeof(struct Node));
  myNode->x = x;
  myNode->next = NULL;
  return myNode;
}

void appendNode(struct Node * current, struct Node * nextNode){
  current->next = nextNode;
}

int main(){
  struct Node * head;
  struct Node * newN;

  head = newNode(13);
  newN = newNode(14);
  appendNode(head, newN);
  appendNode(newN, newNode(16));

  printNode(head);
  printList(head);
}
