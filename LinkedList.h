#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#define printMacro(format, type) void print_##type(){ \
    if(head==NULL)                                    \
        return;                                       \
    Node* iter = head;                                \
    while(iter!=NULL){                                \
        printf("%"#format" ",*(type*)(iter->data));   \
        iter = iter->next;\
    }\
}

#define addInterface(data) ({   \
    typeof(data) type = data;   \
    void* ptr = &type;          \
    if(head==NULL)              \
        head = createNode(ptr); \
    else                        \
        head->add(ptr);\
})

#define printInterface(type) ({ \
    print_##type();             \
})

typedef char* string;

typedef struct Node{
    void* data;
    struct Node* next;
    void (*add)(void*);
}Node;

extern Node* head;

Node* createNode(void*);
void addNode(void*);

void print_int();
//void print_string();
void print_char();
void print_float();
void print_double();

#endif //BASICLINKEDLIST_LIBRARY_H
