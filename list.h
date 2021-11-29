#include "node.h"

#include "stdbool.h"

typedef struct List {
    struct Node* head;
} List;

/**
 * @brief Create a List object
 * 
 * @return List* 
 */
List* createList();

/**
 * @brief Insert Node at the beginning
 * 
 * @param list 
 * @param x 
 * @return List* 
 */
List* insertNodeAtBeginning(List* list, int x);

/**
 * @brief Insert Node at the end
 * 
 * @param list 
 * @param x 
 * @return List* 
 */
List* insertNodeAtEnd(List* list, int x);

/**
 * @brief Print the List object
 * 
 * @param list 
 */
void printList(List* list);

/**
 * @brief Find Node with value x
 * 
 * @param list 
 * @param x 
 * @return Node* 
 */
Node* findNode(List* list, int x);

/**
 * @brief Get the first Node object
 * 
 * @param list 
 * @return Node* 
 */
Node* getFirstNode(List* list);

/**
 * @brief Get the last Node object
 * 
 * @param list 
 * @return Node* 
 */
Node* getLastNode(List* list);

/**
 * @brief Delete Node at the beginning
 * 
 * @param list 
 * @return List* 
 */
List* deleteNodeAtBeginning(List* list);

/**
 * @brief Delete Node at the end
 * 
 * @param list 
 * @return List* 
 */
List* deleteNodeAtEnd(List* list);

/**
 * @brief Update Node with value x by y 
 * 
 * @param list 
 * @param x 
 * @param y 
 * @return List* 
 */
List* updateList(List* list, int x, int y);

/**
 * @brief Get the length object
 * 
 * @param list 
 * @return int 
 */
int getLength(List* list);

/**
 * @brief Check if List object is empty
 * 
 * @param list 
 * @return true 
 * @return false 
 */
bool isEmpty(List* list);

/**
 * @brief Frees up memory of the list object
 * 
 * @param list
 */
void freeList(List* list);