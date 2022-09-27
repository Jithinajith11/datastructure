#include <stdio.h>
#include <stdlib.h>

typedef struct single_LL{
    int data;
    struct single_LL* next;
}SiLL;

void sll_display(SiLL *);
void addtobeg(SiLL **,int);
void addtoend(SiLL **,int);
void addincsort(SiLL **,int);
void delfrombeg(SiLL**);
void delfromend(SiLL**);
void delspecific(SiLL**,int);