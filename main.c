#include "list.h"

#include <stdio.h>

int main() {
    // Example code
    List* list = createList();
    
    insertNodeAtEnd(list, 10);
    insertNodeAtEnd(list, 20);
    insertNodeAtEnd(list, 30);
    insertNodeAtEnd(list, 40);
    insertNodeAtEnd(list, 50);
    insertNodeAtEnd(list, 60);
    insertNodeAtEnd(list, 70);
    insertNodeAtEnd(list, 80);

    printList(list);

    Node* firstNode = getFirstNode(list);
    Node* lastNode = getLastNode(list);

    printf("firstNode: %p\n", firstNode);
    printf("lastNode: %p\n", lastNode);

    printf(isEmpty(list) ? "the list is empty\n" : "the list is not empty\n");

    return 0;
}