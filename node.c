#include "node.h"

#include <stdlib.h>

Node* createNode(int x) {
    Node* node = (Node*) malloc(sizeof(Node));
    node->next = NULL;
    node->data = x;
    return node;
}