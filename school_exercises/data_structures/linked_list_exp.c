#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    char tipo;
    struct node *next;
};

void push(struct node *head, int val, char tipo);
void printll(struct node *head);
void pop(struct node *head);

int main(void)
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->val = 15;
    head->tipo = 'Z';
    push(head, 21, 'A');
    push(head, 67, 'b');
    push(head, 47, 'c');
    printll(head);
    pop(head);
    printll(head);

    return 0;
}

void push(struct node *head, int val, char tipo)
{
    struct node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->val = val;
    new->tipo = tipo;
    current->next = new;
}

void printll(struct node *head)
{
    struct node *current = head;
    printf("\n[val: %d, tipo: %c]--", current->val, current->tipo);
    while (current->next != NULL)
    {
        current = current->next;
        printf("[val: %d, tipo: %c]--", current->val, current->tipo);
    }
}

void pop(struct node *head)
{
    struct node *current = head;
    while (current->next->next != NULL)
    {

        current = current->next;
    }

    free(current->next);
    current->next = NULL;
    //printf("val: %d, tipo: %c\n", current->val, current->tipo);
}
