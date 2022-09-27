#include "LL.h"
void sll_display(SiLL *ptr)
{
    while(ptr)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    printf("\n\n");
}

void addtobeg(SiLL **ptr,int n)
{
    SiLL* tptr;
    tptr=malloc(sizeof(SiLL));
    if(tptr==NULL)
        return;
    tptr->data=n;
    tptr->next=*ptr;
    *ptr=tptr;
}

void addtoend(SiLL **ptr,int n)
{
    SiLL* tptr=malloc(sizeof(SiLL));
    if(tptr==NULL)
        return;
    tptr->data=n;
    tptr->next=NULL;
    while(*ptr)
        ptr=&(*ptr)->next;
    *ptr=tptr;
}

void addincsort(SiLL **ptr,int n)
{
    SiLL* tptr=malloc(sizeof(SiLL));
    if(tptr==NULL)
        return;
    tptr->data=n;

    while(*ptr && (*ptr)->data<n)
        ptr=&(*ptr)->next;
    tptr->next=*ptr;
    *ptr=tptr;
}

void delfrombeg(SiLL**ptr)
{
    SiLL* tptr= *ptr;
    if(*ptr==NULL)
        return;
    *ptr=(*ptr)->next;
    free(tptr);
}

void delfromend(SiLL**ptr)
{
    if(*ptr==NULL)
        return;
    while((*ptr)->next)
        ptr=&(*ptr)->next;
    free(*ptr);
    *ptr=NULL;   
}

void delspecific(SiLL**ptr,int n)
{
    SiLL* tptr;
    while(*ptr)
    {
        if((*ptr)->data==n)
            {
                tptr=*ptr;
                *ptr=(*ptr)->next;
                free(tptr);
                return;
            }
        ptr=&(*ptr)->next;
    }
}