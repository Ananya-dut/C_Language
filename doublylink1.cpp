#include<stdio.h>
#include<stdlib.h>  
typedef struct node {
    int data;
    struct node * next;
    struct node * prev;
} s; 
 
s * head,*temp,*newp,*ptr;
 
void display(s * head) {  
    if(head == NULL) {
        printf("Empty List!\n");
    }
    temp = NULL;
    temp = head; 
    while(temp != NULL) {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
} 
void addAtFirst() { 
    int value;
    printf("Enter the data: ");
    scanf("%d", &value);
    newp = (s *)malloc(sizeof(s *));
    newp->data = value;
    newp->prev = NULL;
    newp->next = head; 
    head = newp;
 
} 
 
void addAtEnd() { 
    int value;
    printf("Enter the data: ");
    scanf("%d", &value);
    newp = (s *)malloc(sizeof(s *));
    newp->data = value;
    newp->next = NULL;
    ptr = head;
    while(ptr->next != NULL) {
        ptr = ptr->next;
    }
    newp->prev = ptr;
    ptr->next = newp;
}
void addAtPos() {
   int value, pos, i = 1; 
    printf("Enter the data: ");
    scanf("%d", &value);
    newp = (s *)malloc(sizeof(s *));
    newp->data = value;
    newp->next = NULL;
    printf("Enter the position: ");
    scanf("%d", &pos);
    ptr = head;
    while(i < pos-1) {
        ptr = ptr->next;
        i++;
    }
    newp->next = ptr->next;
    newp->prev = ptr;
 
    ptr->next = newp;
    ptr->next->prev = newp;
}

int main() {
    int choice, data, size;

    while(1) {

        printf(" 1.Display\n 2.Add at first\n 3.Add at end\n 4.Add at position\n 5.Exit\n");
        printf("Enter your choice: "); 
 
        scanf("%d", &choice);
        switch(choice) 
        {
              
            case 1: 
                display(head);
                printf("\n");
        break;

            case 2:

                addAtFirst();

                break;

            case 3:

                addAtEnd();

                break;

            case 4:
          addAtPos();

                break;
           
            case 5:
            exit(1);
 
        }
 
 
    } 
 
    return 0;
  
}

