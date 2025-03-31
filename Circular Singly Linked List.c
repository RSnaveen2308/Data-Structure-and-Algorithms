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
        newNode->next=list->head;
    } else {
        struct Node* temp = list->head;
        while (temp->next != list->head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next=list->head;
    }
}

void display(struct LinkedList* list) {
    struct Node* temp = list->head;
    // int min=list->head->data,max=0;
    do {
        printf("%d ",temp->data);
        temp = temp->next;  
    }while(temp!=list->head);

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

    display(&list);
    
    return 0;
}
