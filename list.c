#include "list.h"

#include <stdio.h>
#include <stdlib.h>

List* createList() {
    List* list = (List*) malloc(sizeof(List));
    list->head = NULL;
    return list;
}

List* insertNodeAtBeginning(List* list, int x) {
    Node* node = createNode(x);
    if (isEmpty(list)) {
        list->head = node;
    } else {
        Node* aux = list->head;
        list->head = node;
        node->next = aux;
    }
    return list;
}

List* insertNodeAtEnd(List* list, int x) {
    Node* node = createNode(x);
    if (isEmpty(list)) {
        list->head = node;
    } else {
        Node* current = list->head;
        while (current->next) {
            current = current->next;
        }
        current->next = node;
    }
    return list;
}

void printList(List* list) {
    if (isEmpty(list)) {
        printf("Couldn't print the list because it is empty.\n");
    } else {
        Node* current = list->head;
        while (current != NULL) {
            printf("data: %d\n", current->data);
            current = current->next;
        }
    }
}

Node* findNode(List* list, int x) {
    if (isEmpty(list)) {
        return NULL;
    } else {
        Node* current = list->head;
        while (!current) {
            if (current->data == x) return current;
            current = current->next;
        }
        printf("Node not found.\n");
        return NULL;
    }
}

Node* getFirstNode(List* list) {
    if (isEmpty(list)) {
        printf("Couldn't get the first node because the list it is empty.\n");
        return NULL;
    } else {
        return list->head;
    }
}

Node* getLastNode(List* list) {
    if (isEmpty(list)) {
        printf("Couldn't get the first node because the list it is empty.\n");
        return NULL;
    } else {
        Node* current = list->head;
        while (!current->next) {
            current = current->next;
        }
        return current;
    }
}

List* deleteNodeAtBeginning(List* list) {
    if (isEmpty(list)) {
        printf("Couldn't delete the first node because the list it is empty.\n");
        return NULL;
    } else {
        Node* aux = list->head;
        list->head = aux->next;
        aux->next = NULL;
        free(aux);
        return list;
    }
}

List* deleteNodeAtEnd(List* list) {
    if (isEmpty(list)) {
        printf("Couldn't delete the last node because the list it is empty.\n");
        return NULL;
    } else {
        Node* current = list->head;
        while (!current->next->next) {
            current = current->next;
        }
        Node* aux = current->next;
        current->next = NULL;
        free(aux);
        return list;
    }
}

List* updateList(List* list, int x, int y) {
    if (isEmpty(list)) {
        printf("Couldn't update the node with value x because the list it is empty.\n");
    } else {
        Node* current = list->head;
        while (!current) {
            if (current->data == x) {
                current->data = y;
                return list;
            }
            current = current->next;
        }
        printf("Node with value x not found.\n"); 
    }
    return list;
}

int getLength(List* list) {
    Node* current = list->head;
    int i = 0;
    while (!current) {
        i++;
        current = current->next;
    }
    return i;
}

bool isEmpty(List* list) {{
    if (!list->head) return true;
    return false;
}}

void freeList(List* list) {
    free(list);
}