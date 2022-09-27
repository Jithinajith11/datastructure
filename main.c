#include "LL.h"

int main()
{
    SiLL * hptr=NULL;
    int choise,new_value,del_choice;
    char ch;

    do{
    printf("Chose option:\n1: Display the LL\n2: Add new element\n3:Delete\n");
    scanf("%d",&choise);
    switch(choise)
    {
        case 1: sll_display(hptr);
                break;
        case 2: printf("Enter value: ");
                scanf("%d", &new_value);
add_choice:
                printf("\n1: at the begining\n2: at the end\n3: sorted\n");
                scanf("%d",&choise);
                if(choise==1)
                        addtobeg(&hptr,new_value);
                else if(choise==2)
                        addtoend(&hptr,new_value);
                else if(choise==3)
                        addincsort(&hptr,new_value);
                else
                {
                    printf("Wrong input!!\n");
                    goto add_choice;
                }
                break;
        case 3: 
del_choice:
                printf("1: at the begining\n2: at the end\n3: specific\n");
                scanf("%d",&choise);
                if(choise==1)
                    delfrombeg(&hptr);
                else if(choise==2)
                    delfromend(&hptr);
                else if(choise==3)
                {
                    printf("Enter the data to delete: ");
                    scanf("%d",&del_choice);
                    delspecific(&hptr,del_choice);
                }
                else
                {
                    printf("Wrong input!!");
                    goto del_choice;
                }
                break;
        default: printf("Wrong input!!");       
    }
    printf("Do you want to continue? (y/n)");
    do{
    scanf(" %c",&ch);
    }while(ch!='y' && ch!='Y' && ch!='N' && ch!='n');
    }while(ch=='y'|| ch=='Y');

}
