#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void show(struct Node *ptr)
{
    while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    

}

struct Node * insertionatfirst(struct Node *head,int data)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}


int main()
{
    struct Node *head=(struct Node *) malloc(sizeof(struct Node));
    struct Node *second=(struct Node *) malloc(sizeof(struct Node));
    struct Node *third=(struct Node *) malloc(sizeof(struct Node));

    //Allocaste memory for nodes in the linked list in heap
    //head=(struct Node *) malloc(sizeof(struct Node));
    // second=(struct Node *) malloc(sizeof(struct Node));
    // third=(struct Node *) malloc(sizeof(struct Node));
    head->data=7;
    head->next=second;

    second->data=8;
    second->next=third;

    third->data=9;
    third->next=NULL;
    show(head);  //head cause we are starting from head
    printf("after insertion\n");
    head=insertionatfirst(head,85);
    show(head);
    return 0;

    head->data=7;
    head->next=second;

    second->data=8;
    second->next=third;

    third->data=9;
    third->next=NULL;
    show(head);  //head cause we are starting from head
    printf("after insertion\n");
    head=insertionatfirst(head,85);
    show(head);
    return 0;

}
