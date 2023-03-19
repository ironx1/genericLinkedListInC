#include "library.h"
#include <stdio.h>
#include <stdlib.h>

Node* head = NULL;

void addNode(void* data){
    if(head==NULL){
        head = createNode(data);
        return;
    }
    Node * iter = head;
    while (iter->next!=NULL){
        iter = iter->next;
    }
    iter->next = createNode(data);
}

printMacro(d, int)

//printMacro(s, string) typeof not working for string

printMacro(f, float)

printMacro(lf, double)

printMacro(c, char)
  
Node* createNode(void* data){
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    node->add = addNode;
    return node;
}
