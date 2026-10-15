/*
NAME: DIGVIJAYSINH SODHAPARMAR
ENROLLMENT NO: 92500527123
UNIT 4 PROGRAM 1
*/

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int data)
{
    struct Node* newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void preorder(struct Node* root)
{
    if(root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct Node* root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void postorder(struct Node* root)
{
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

void main()
{
    struct Node* root = createNode(4);

    root->left = createNode(16);
    root->right = createNode(7);

    root->left->left = createNode(6);
    root->left->right = createNode(31);

    printf("PREORDER: ");
    preorder(root);

    printf("\nINORDER: ");
    inorder(root);

    printf("\nPOSTORDER: ");
    postorder(root);
}