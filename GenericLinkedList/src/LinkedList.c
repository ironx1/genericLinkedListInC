#include "../include/LinkedList.h"
#include <stdlib.h>
#include <stdio.h>
Node* head = NULL;
Node* createNode(void* data){
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->prev = NULL;
    node->next = NULL;
    return node;
}
void add(void* data){
    if (head==NULL)
    {
        head = createNode(data);
        return;
    }
    Node* iter = head;
    while (iter->next!=NULL)
    {
        iter = iter->next;
    }
    iter->next = createNode(data);
    iter->next->prev = iter;
}
addMacro(int)
printMacro(d,int)
addMacro(float)
printMacro(f, float)
addMacro(double)
printMacro(lf, double)
addMacro(char)
printMacro(c, char)
addMacro(string)
printMacro(s, string)
