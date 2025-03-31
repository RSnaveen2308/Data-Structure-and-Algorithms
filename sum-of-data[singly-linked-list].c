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

void sum(struct LinkedList* list) {
    struct Node* temp = list->head;
    int sum_data=0;
    while (temp != NULL) {
       sum_data+=temp->data;
        temp = temp->next;  
    }
    printf("%d\n",sum_data);
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

    sum(&list);
    
    return 0;
}
