#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;

    // it is completely legal !
    struct Node *next;

    // the self-inclusion is the problem which requires infinite memory causes an error.
};



int main()
{
    struct Node *first = malloc(sizeof(struct Node));
    first->data = 10;
    first->next = NULL;

    struct Node *second = malloc(sizeof(struct Node));
    second->data = 20;
    second->next = NULL;

    first->next = second;

    struct Node *curr = first;
    while(curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    return 0;
}