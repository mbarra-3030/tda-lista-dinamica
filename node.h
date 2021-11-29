typedef struct Node {
    int data;
    struct Node* next;
} Node;

/**
 * @brief Create a Node object
 * 
 * @param x 
 * @return Node* 
 */
Node* createNode(int x);