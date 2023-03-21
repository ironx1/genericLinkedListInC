#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#define addMacro(type) void add_##type(type val){\
    type* valPtr = &val;\
    add(valPtr);\
}
#define addGeneric(val) _Generic((val),\
    int:add_int,\
    char:add_char,\
    float:add_float,\
    double:add_double,\
    string:add_string\
)(val)
#define printMacro(format, type) void print_##type(){\
    if(head==NULL){\
        return;\
    }\
    Node* iter = head;\
    while(iter!=NULL){\
        printf("%"#format"-", *((type*)iter->data));\
        iter = iter->next;\
    }\
    printf("\n");\
}
#define printGeneric(type) ({\
    print_##type();\
})
typedef char* string;
typedef struct node
{
    void* data;
    struct node* next;
    struct node* prev;
}Node;
extern Node* head;
Node* createNode(void*);
void add(void*);
void add_int(int);
void print_int();
void add_float(float);
void print_float();
void add_double(double);
void print_double();
void add_char(char);
void print_char();
void add_string(string);
void print_string();
#endif