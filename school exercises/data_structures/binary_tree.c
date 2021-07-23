#include <stdio.h>
#include <stdlib.h>

//Define the node tree struct
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *new_node(int val);
void printNodeP(struct node *p);
void insert_node(struct node *tree, int val);
void preorder(struct node *tree);
void inorder(struct node *tree);
void postorder(struct node *tree);
struct node *dfs(struct node *tree, int val);
int i_dfs(struct node *tree, int val);

int main(void)
{
    int rootVal, cant_nodos;
    printf("Ingresa el valor del nodo raíz; ");
    scanf("%d", &rootVal);
    struct node *root = new_node(rootVal);

    printf("Ingresa el número de nodos; ");
    scanf("%d", &cant_nodos);
    for (int i = 1; i <= cant_nodos; i++)
    {
        int node_value;
        printf("Ingresa el valor del nodo %d; ", i);
        scanf("%d", &node_value);
        insert_node(root, node_value);
    }

    printf("\nPREORDER:  \n");
    preorder(root);
    printf("\nINORDER:  \n");
    inorder(root);
    printf("\nPOSTORDER:  \n");
    postorder(root);

    printf("\n %p ", dfs(root, 9));
    printf("\n %d ", i_dfs(root, 9));

    return 0;
}

struct node *new_node(int val)
{
    struct node *a_node = (struct node *)malloc(sizeof(struct node));
    a_node->data = val;
    a_node->left = NULL;
    a_node->right = NULL;
    return a_node;
}

void printNodeP(struct node *p)
{
    printf("%p: %d   --  %p  --  %p\n", p, p->data, p->left, p->right);
}

void insert_node(struct node *tree, int val)
{
    if (val <= tree->data)
    {
        if (tree->left == NULL)
        {
            tree->left = new_node(val);
        }
        else
        {
            insert_node(tree->left, val);
        }
    }
    else
    {
        if (tree->right == NULL)
        {
            tree->right = new_node(val);
        }
        else
        {
            insert_node(tree->right, val);
        }
    }
}

void preorder(struct node *tree)
{
    printf("%p -  %d\n", tree, tree->data);
    if (tree->left != NULL)
    {
        preorder(tree->left);
    }
    if (tree->right != NULL)
    {
        preorder(tree->right);
    }
}

void inorder(struct node *tree)
{
    if (tree->left != NULL)
    {
        inorder(tree->left);
    }
    printf("%d\n", tree->data);

    if (tree->right != NULL)
    {
        inorder(tree->right);
    }
}
void postorder(struct node *tree)
{
    if (tree->left != NULL)
    {
        postorder(tree->left);
    }

    if (tree->right != NULL)
    {
        postorder(tree->right);
    }
    printf("%d\n", tree->data);
}

struct node *dfs(struct node *tree, int val)
{
    if (tree->data == val)
    {
        return tree;
    }

    if ((tree->left != NULL) && (dfs(tree->left, val) != NULL))
    {
        return dfs(tree->left, val);
    }
    else if (tree->right != NULL)
    {
        return dfs(tree->right, val);
    }
    return NULL;
}

int i_dfs(struct node *tree, int val)
{
    if (tree->data == val)
    {
        return 0;
    }

    if ((tree->left != NULL) && (dfs(tree->left, val) != NULL))
    {
        return 1 + i_dfs(tree->left, val);
    }
    else if (tree->right != NULL)
    {
        return 1 + i_dfs(tree->right, val);
    }
    return -1;
}

/*

2
8
7
2
6
5
11
5
9
4

*/