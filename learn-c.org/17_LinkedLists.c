#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    struct node *next;
} node_t;

void print_list(node_t *head);
void push(node_t *head, int val);
void pushBeginning(node_t **head, int val);
int pop(node_t **head);
int remove_last(node_t *head);
int remove_by_index(node_t **head, int n);
int remove_by_value(node_t ** head, int val);

int main()
{

    node_t *head;
    head = (node_t *)malloc(sizeof(node_t));
    head->val = 1;
    head->next = (node_t *)malloc(sizeof(node_t));

    head->next->val = 17;
    head->next->next = NULL;

    print_list(head);
    push(head, 15);
    print_list(head);
    pushBeginning(&head, 44);
    print_list(head);
    printf("deleted %d \n",remove_by_value(&head, 44));
    print_list(head);
    printf("deleted %d \n",remove_by_value(&head, 14));
    print_list(head);

    return 0;
}

void print_list(node_t *head)
{
    node_t *current = head;

    while (current != NULL)
    {
        printf("%d\n", current->val);
        current = current->next;
    }
}

void push(node_t *head, int val)
{
    node_t *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    // node_t * newNode = (node_t *) malloc(sizeof(node_t));
    // newNode->val = val;
    // newNode->next = NULL;
    // current->next = newNode;
    current->next = (node_t *)malloc(sizeof(node_t));
    current->next->val = val;
    current->next->next = NULL;
}

void pushBeginning(node_t **head, int val)
{
    node_t *new_node = (node_t *)malloc(sizeof(node_t));
    new_node->val = val;
    new_node->next = *head;
    *head = new_node;
}

int pop(node_t **head)
{
    int retval = -1;
    node_t *next_node = NULL;

    if (*head == NULL)
    {
        return -1;
    }

    next_node = (*head)->next;
    retval = (*head)->val;
    free(*head);
    *head = next_node;

    return retval;
}

int remove_last(node_t *head)
{
    int retval = 0;
    /* if there is only one item in the list, remove it */
    if (head->next == NULL)
    {
        retval = head->val;
        free(head);
        return retval;
    }

    node_t *current = head;
    while (current->next->next != NULL)
    {
        current = current->next;
    }

    retval = current->next->val;
    free(current->next);
    current->next = NULL;
    return retval;
}

int remove_by_index(node_t **head, int n)
{
    int i = 0;
    int retval = -1;
    node_t *current = *head;
    node_t *temp_node = NULL;

    if (n == 0)
    {
        return pop(head);
    }

    for (i = 0; i < n - 1; i++)
    {
        if (current->next == NULL)
        {
            return -1;
        }
        current = current->next;
    }

    temp_node = current->next;
    retval = temp_node->val;
    current->next = temp_node->next;
    free(temp_node);

    return retval;
}

int remove_by_value(node_t ** head, int val) {
    node_t * current = *head;
    node_t * temp;
    int retval = -1;

    if(current->val == val){
        retval = pop(head);
        return retval;
    }
    else{

    }

    while (current->next != NULL )
    {
        if(current->next->val == val){
            retval = current->next->val;
            temp = current->next;
            current->next = current->next->next;
            free(temp);
            return retval;
        }
        current = current->next;
    }
    return retval;
}