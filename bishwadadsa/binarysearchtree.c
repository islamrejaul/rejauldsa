#include <stdio.h>
#include <conio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *lchild, *rchild;
};
typedef struct node BST;

BST *insert(BST *, int);
void in(BST *);
void pre(BST *);
void post(BST *);
int search(BST *, int);
void maximum(BST *);
void minimum(BST *);
BST *Delete(BST *, int);
int totalNode(BST *);
int internalNode(BST *);
int externalNode(BST *);
int height(BST *);
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
            printf("\nenter the element: ");
            scanf("%d", &x);
            root = insert(root, x);
            break;
        case 2:
            if (root == NULL)
                printf("tree is empty");
            else
                in(root);
            break;
        case 3:
            if (root == NULL)
                printf("tree is empty");
            else
                pre(root);
            break;
        case 4:
            if (root == NULL)
                printf("tree is empty");
            else
                post(root);
            break;
        case 5:
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
        case 6:
            exit(1);

        case 7:
            maximum(root);
            break;
        case 8:
            minimum(root);
            break;

        case 9:
            printf("\nenter the element u want to delete");
            scanf("%d", &x);
            root = Delete(root, x);
            break;

        case 10:
            x = externalNode(root);
            printf("\nnumber of external node is %d", x);
            break;
        case 11:
            x = internalNode(root);
            printf("\nnumber of internal node is %d", x);
            break;
        case 12:
            x = totalNode(root);
            printf("\nnumber of total node is %d", x);
            break;
        case 13:
            x = height(root);
            printf("\nheight of the tree is %d", x);
            break;
        defaulf:
            printf("enter the right");
            break;
        }
    }

    return 0;
}

BST *insert(BST *root, int x)
{
    BST *ptr = root;
    BST *new1;
    new1 = (BST *)malloc(sizeof(BST));
    new1->data = x;
    new1->lchild = NULL;
    new1->rchild = NULL;
    if (root == NULL)
    {
        root = new1;
        return root;
    }
    while (1)
    {
        if (ptr->data > x)
        {
            if (ptr->lchild == NULL)
            {
                ptr->lchild = new1;
                break;
            }
            else
                ptr = ptr->lchild;
        }
        else
        {
            if (ptr->rchild == NULL)
            {
                ptr->rchild = new1;
                break;
            }
            else
                ptr = ptr->rchild;
        }
    }
    return root;
}

int search(BST *root, int item)
{

    BST *ptr = root;
    int flag = 0;
    while (ptr != NULL && flag == 0)
    {
        if (ptr->data == item)
        {
            flag = 1;
            break;
        }
        else if (ptr->data < item)
            ptr = ptr->rchild;
        else
            ptr = ptr->lchild;
    }
    if (flag == 0)
        return 0;
    else
        return 1;
}

void in(BST *r)
{ //  LDR
    if (r->lchild != NULL)
        in(r->lchild);

    printf("%d", r->data);

    if (r->rchild != NULL)
        in(r->rchild);
}

void pre(BST *r)
{ //  DLR
    printf("%d", r->data);

    if (r->lchild != NULL)
        pre(r->lchild);

    if (r->rchild != NULL)
        pre(r->rchild);
}

void post(BST *r)
{ //  LRD

    if (r->lchild != NULL)
        post(r->lchild);

    if (r->rchild != NULL)
        post(r->rchild);

    printf("%d", r->data);
}

void maximum(BST *t)
{

    BST *ptr = t;
    if (ptr != NULL)
    {
        while (ptr->rchild != NULL)
            ptr = ptr->rchild;

        printf("maximum value is %d ", ptr->data);
    }

    else
        printf("tree is empty\n");
}

void minimum(BST *t)
{

    BST *ptr = t;
    if (ptr != NULL)
    {
        while (ptr->lchild != NULL)
            ptr = ptr->lchild;

        printf("maximum value is %d ", ptr->data);
    }

    else
        printf("tree is empty\n");
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

int externalNode(BST *ptr)
{
    if (ptr == NULL)
        return 0;
    else
    {
        if (ptr->lchild == NULL && ptr->rchild == NULL)
            return 1;
        else
            return externalNode(ptr->lchild) + externalNode(ptr->rchild);
    }
}

int internalNode(BST *ptr)
{
    if (ptr == NULL)
        return 0;

    else
    {
        if (ptr->lchild == NULL && ptr->rchild == NULL)
            return 0;
        else
            return internalNode(ptr->lchild) + internalNode(ptr->rchild) + 1;
    }
}

int totalNode(BST *ptr)
{
    if (ptr == NULL)
        return 0;
    else
        return totalNode(ptr->lchild) + totalNode(ptr->rchild) + 1;
}

int height(BST *ptr)
{
    int lh, rh;
    if (ptr == NULL)
    {
        return 0;
    }
    else
    {
        lh = height(ptr->lchild);
        rh = height(ptr->rchild);
        if (lh > rh)
            return lh + 1;
        else
            return rh + 1;
    }
}



















