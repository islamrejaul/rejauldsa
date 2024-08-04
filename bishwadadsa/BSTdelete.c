#include<stdio.h>






struct node
{
    int data;
    struct node *lchild, *rchild;
};
typedef struct node BST;

int search(BST *, int);

BST *Delete(BST *, int);
BST *findMin(BST *);

int main()
{
    int x, c, item;
    BST *root = NULL;
    while (1)
    {
        printf("\n1.insert\n2.inorder\n3.preorder\n4.postorder\n5.search\n6.exit\n7.maximum\n8.minimum\n9.delete\n10.externalnode\n11.internalnode\n12.totalnode\n13.height\n");
        printf("\nenter the choice");
        scanf("%d", &c);
        switch (c)
        {

 
        case 1:
            if (root == NULL)
                printf("tree is empty");
            else
            {
                printf("enter the data");
                scanf("%d", &item);
                x = search(root, item);
                if (x == 1)
                    printf("\n%d is found\n", item);
                else
                    printf("\n%d is not found\n", item);
            }
            break;
        case 2:
            exit(1);

        case 3:
            printf("\nenter the element u want to delete");
            scanf("%d", &x);
            root = Delete(root, x);
            
            break;


        defaulf:
            printf("enter the right");
            break;
        }
    }

    return 0;
}

BST *Delete(BST *root, int value)
{
    BST *temp;
    int c;
    c = search(root, value);
    if (c == 0)
    {
        printf("\ndata not exist");
        return root;
    }
    else if (value < root->data)
    {
        root->lchild = Delete(root->lchild, value);
    }
    else if (value > root->data)
    {
        root->rchild = Delete(root->rchild, value);
    }
    // Node deletion
    else
    {
        // case 1: Leaf Node
        if (root->lchild == NULL && root->rchild == NULL)
        {
            // delete root;
            root = NULL;
            return root;
        }
        // case 2: one child
        else if (root->lchild == NULL)
        {
            // temp = root;
            root = root->rchild;
            // delete temp;
            return root;
        }
        else if (root->rchild == NULL)
        {
            // temp = root;
            root = root->lchild;
            // delete temp;
            return root;
        }
        // case 3: 2 children
        else
        {
            temp = findMin(root->rchild);
            root->data = temp->data;
            root->rchild = Delete(root->rchild, temp->data);
        }
    }
    return root;
}

BST *findMin(BST *root)
{
    while (root->lchild != NULL)
    {
        root = root->lchild;
    }
    return root;
}







































