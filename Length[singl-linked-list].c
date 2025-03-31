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

void display(struct LinkedList* list) {
  
    struct Node* temp = list->head;
    int c=0;
    while (temp != NULL) {
        c++;
        temp = temp->next;  // Move to next node
    }
    printf("Length : %d",c);
    printf("\n");
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
