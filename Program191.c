#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newm->data + no;
    newn->next = NULL;

    if((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
        (*Tail)->next = *Head;
    }
    else 
    {
        
    }
}
void InsertLast(PPNODE Head, PPNODE Tail, int no)
{}
void InsertAtPos(PPNODE Head, PPNODE Tail, int no, int ipos)
{}
void DeleteFirst(PPNODE Head, PPNODE Tail)
{}
void DeleteLast(PPNODE Head, PPNODE Tail)
{}
void DeleteAtPos(PPNODE Head, PPNODE Tail, int ipos)
{}
void Display(PPNODE Head, PPNODE Tail)
{}
int Count(PNODE Head, Pnode Tail)
{
    return 0;
}


int main()
{ 
    PNODE First = NULL;
    PNODE Last = NULL;                 //#

    return 0;
}
