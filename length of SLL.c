/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//TO GET LENGTH OF THE SSL
#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*link;
    
};
void main()
{//declaration
   struct node*head;
    struct node*first;
    struct node*sec;
    struct node*third;
    struct node*fourth;
    
    //allocating memory
    
    head = (struct node*)malloc(sizeof (struct node));
    first = (struct node*)malloc(sizeof (struct node));
    sec= (struct node*)malloc(sizeof (struct node));
    third = (struct node*)malloc(sizeof (struct node));
    fourth= (struct node*)malloc(sizeof (struct node));
    
    head->data = 10;
    head->link = sec;
    first->data = 20;
    first->link = third;
    sec->data = 30;
    sec->link = fourth;
    third->data = 10;
    third->link = fourth;
    fourth->data = 40;
    fourth->link = NULL;
}


void getlength()
{
    int count=0;
    struct node*head;
    struct node*temp;
    temp=head;
    while(temp!=0)
    {
        temp=temp->link;
        count++;
    }
    printf("\n%d length is",count);
}
    


