#include <stdio.h>
#include <malloc.h>
struct node
{
    int cof, exp;
    struct node *next;
};
typedef struct node pol;
void main()
{
    pol *head1 = NULL;
    pol *head2 = NULL;
    pol *head3 = NULL;
    pol *p = head1;
    pol *q = head2;
    pol *r = head3;
    pol *nw1, *nw2, *nw3;
    pol *k, *k1;
    int i = 1, j = 1, n, m, f, t, c, e, cof, exp, max;
    printf("enter the number of term of 1st polynomial");
    scanf("%d", &n);
    printf("enter the number of term of 2nd polynomial");
    scanf("%d", &m);

    printf("enter the coefficient and exponent for polynomial 1\n");
    while (i <= n)
    { // enter the 1st polynomial expression

        p = head1;
        nw1 = (pol *)malloc(sizeof(pol));
        printf("enter the coefficient value");
        scanf("%d", &nw1->cof);
        printf("enter the exponent value");
        scanf("%d", &nw1->exp);
        if (head1 == NULL)
        {
            head1 = nw1;
            head1->next = NULL;
        }

        else
        {
            while (p->next != NULL)
            { // finding the last node
                p = p->next;
            }
            p->next = nw1;
            nw1->next = NULL;
        }
        i++;
    }

    printf("enter the coefficient and exponent for polynomial 2\n");
    while (j <= m)
    { // enter the 2nd polynomial expression

        p = head2;
        nw1 = (pol *)malloc(sizeof(pol));
        printf("enter the coefficient value");
        scanf("%d", &nw1->cof);
        printf("enter the exponent value");
        scanf("%d", &nw1->exp);
        if (head2 == NULL)
        {
            head2 = nw1;
            head2->next = NULL;
        }

        else
        {

            while (p->next != NULL)
            { // finding the last node
                p = p->next;
            }
            p->next = nw1;
            nw1->next = NULL;
        }
        j++;
    }

    printf("\n1st polynomial is");
    for (p = head1; p != NULL; p = p->next)
    {
        if (p->exp == 0)
            printf("(%d)", p->cof);

        else if (p->next == NULL)
            printf("(%dX^%d)", p->cof, p->exp);

        else
            printf("(%dX^%d)+", p->cof, p->exp);
    }

    printf("\n");

    printf("\n2nd polynomial is");
    for (q = head2; q != NULL; q = q->next)
    {
        if (q->exp == 0)
            printf("(%d)", q->cof);

        else if (q->next == NULL)
            printf("(%dX^%d)", q->cof, q->exp);

        else
            printf("(%dX^%d)+", q->cof, q->exp);
    }

    printf("\n");

    p = head1;
    while (p != NULL)
    {

        q = head2;
        while (q != NULL)
        {

            cof = p->cof * q->cof;
            exp = p->exp + q->exp;

            nw3 = (pol *)malloc(sizeof(pol));
            nw3->cof = cof;
            nw3->exp = exp;

            if (head3 == NULL)
            {
                head3 = nw3;
                head3->next = NULL;
            }

            else
            {

                r = head3;
                while (r->next != NULL && r->exp != exp)
                {
                    r = r->next;
                }
                if (r->next == NULL && r->exp != exp)
                {
                    r->next = nw3;
                    nw3->next = NULL;
                }
                else
                { // addition exponent same
                    r->cof = r->cof + cof;
                }
            }

            q = q->next;
        }
        p = p->next;
    }

    p = head3;
    k1 = NULL;
    while (p->next != NULL)
    {
        q = head3;
        r = q;
        max = head3->exp;
        while (q != k1)
        {

            if (q->exp < max)
            {
                max = q->exp;
                r = q;
            }
            k = q;
            q = q->next;
        }

        if (r != k)
        {
            t = r->cof;
            r->cof = k->cof;
            k->cof = t;

            t = r->exp;
            r->exp = k->exp;
            k->exp = t;
        }

        q = head3;
        while (q != k)
        {
            q = q->next;
        }

        k1 = q;
        p = p->next;
    }

    printf("\n the multiplication of two polynomial is"); // displaying the resultant expression

    for (r = head3; r != NULL; r = r->next)
    {

        if (r->exp != 0 && r->next == NULL)
            printf("(%d)X^%d", r->cof, r->exp);
        else if (r->exp != 0)
            printf("(%d)X^%d +", r->cof, r->exp);
        else
            printf("(%d),r->cof");
    }

    printf("\n");
}