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
    int odd_data=0,even_data;
    while (temp != NULL) {
        if(temp->data%2!=0)
         odd_data+=temp->data;
        else
          even_data+=temp->data;
        temp = temp->next;  
    }
    printf("Sum of odd values: %d\n",odd_data);
    printf("Sum of even values: %d\n",even_data);
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
