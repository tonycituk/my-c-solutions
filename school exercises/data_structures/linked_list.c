#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void printNodeP(struct node *p)
{
    printf("%p: %d   --  %p\n", p, p->data, p->next);
}

void push(struct node *head, int new_data)
{
    struct node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = new_data;
    new->next = NULL;
    current->next = new;
}

void print_ll(struct node *head)
{
    struct node *current = head;
    while (current != NULL)
    {
        printf("%d -- ", current->data);
        current = current->next;
    }
    printf("nothing\n");
}

void print_ll_full(struct node *head)
{
    struct node *current = head;
    while (current != NULL)
    {
        printNodeP(current);
        current = current->next;
    }
}

void new_head(struct node **head, int val)
{
    struct node *new_head = (struct node *)malloc(sizeof(struct node));
    new_head->data = val;
    new_head->next = *head;
    //printf(" %p %p \n", head, *head);
    *head = new_head;
}

int pop(struct node **head)
{
    //printf(" %p %p \n", head, *head);
    if(*head == NULL){
        return -1;
    }
    int last_val = (*head)->data;
    struct node *new_head = (*head)->next;
    free(*head);
    *head = new_head;
    //printf("%d", last_val);
    return last_val;
}

int remove_last(struct node *head)
{
    int last_val;
    if(head->next == NULL){
        last_val = head->data;
        free(head);
        return last_val;
    }
    struct node *current = head;
    while (current->next->next != NULL)
    {
        //printNodeP(current);
        current = current->next;
    }
    last_val = current->next->data;
    free(current->next);
    current->next = NULL;
    //printf("%d", last_val);
    return last_val;
}

int main(void)
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->next = NULL;
    head->data = 1;
    push(head, 5);
    push(head, 6);
    print_ll(head);

    push(head, 99);
    push(head, 101);
    print_ll(head);
    print_ll_full(head);
    //<new_head(&head, 7);
    print_ll(head);
    printf("%d",pop(&head));
    print_ll_full(head);
    print_ll(head);
    remove_last(head);
    print_ll_full(head);
    print_ll(head);


    // print pointer of head printf("%p", head);

    return 0;
}