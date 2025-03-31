#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct LinkedList {
    struct Node* head;
};

void insert(struct LinkedList* list, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (list->head == NULL) {
        list->head = newNode;
    } else {
        struct Node* temp = list->head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void max_and_min(struct LinkedList* list) {
    struct Node* temp = list->head;
    int min=list->head->data,max=0;
    while (temp != NULL) {
        if(temp->data<min)
         min=temp->data;
        if(temp->data>max)
          max=temp->data;
        temp = temp->next;  
    }
    printf("Minimum values: %d\n",min);
    printf("Maximum values: %d\n",max);
}

int main() {
    struct LinkedList list;
    list.head = NULL;
    
    int val;
    while (1) {
        scanf("%d", &val);
        if (val == -1)
            break;
        insert(&list, val);
    }

    max_and_min(&list);
    
    return 0;
}
