#include <stdio.h>
#include <stdlib.h>

void prompt();

typedef struct Node {
    int data;
    struct Node *next;
} node;

void freeList(node *head)
{
    node *temp;
    while(head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

void prompt()
{
    printf("To add node enter 0\n");
    printf("To print the linked list enter 1\n");
    printf("To exit press to 2\n");
    printf("Your Choice: ");
}

void printList(node *head)
{
    node *temp = head;
    int count = 1;
    
    printf("-----------------\n");
    if(temp == NULL) {
        printf("List is Empty\n");
        printf("-----------------\n");
        return;
    }


    while(temp != NULL) {
        printf("Node Number %d = %d\n", count, temp->data);
        temp = temp->next;
        count++;
    }
}

void addNode(node **head_ref , int nodeValue)
{
    node* new_node = (node*)malloc(sizeof(node));
    
    if(new_node == NULL) {
        printf("Memory allocation failed\n");
        return ;
    }

    new_node->data = nodeValue;
    new_node->next = NULL;

    if(*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    node *temp = *head_ref;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = new_node;
}

int main(void)
{

    node *head = NULL;


    int command;
    
    while(command != 2) {

        prompt();
        scanf("%d", &command);

        switch(command) {
            case 0:
                int nodeValue;
                printf("Please Enter Node Value: ");
                scanf("%d", &nodeValue);
                addNode(&head, nodeValue);
                printf("Node Added Thank you\n");
                break;
            
            case 1:
                printList(head);
                break;

            case 2:
                printf("Thank You\nGood Bye\n");    
                return 0;
                break;
            
            default:
                printf("Invalid Choice please try again\n");
                break;
        }

    }

    freeList(head);
    return 0;
}