#include "stdio.h"
#include "stdlib.h"
#include "../headers/dynamic_list.h"

dlistElem createNewDListElem(void* element) {
    dlistElem elem;

    if ( (elem = malloc(sizeof(dlistElem))) != NULL ) {
        elem->element = element;
    }
    else {
        elem = NULL;
    }

    return elem;
}

dlisthead createNewDList() {
    dlisthead listHead;

    if ( (listHead = malloc(sizeof(dlisthead))) != NULL ) {
        listHead->next = NULL;
    }
    else {
        listHead = NULL;
    }

    return listHead;
}

dlist createNewDListNode(dlistElem element, string elementType) {
    dlist listNode;

    if ( (listNode = malloc(sizeof(dlist))) != NULL ) {
        listNode->next = NULL;
        listNode->this = element;
        listNode->elementType = elementType;

    }
    else {
        listNode = NULL;
    }

    return listNode;
}

dlist getDlistLastNode(dlisthead list) {
    dlist node = list->next;
    if (node == NULL) {
        return node;
    }
    while(node->next != NULL) {
        node = node->next;
    }

    return node;
}

int glueToHead(dlisthead head, dlist target) {
    if ( head->next = target ) {
        return 1;
    }
    return 0;
}

int glueToPointer(dlist lastNode, dlist target) {
    if ( lastNode->next = target ) {
        return 1;
    }
    return 0;
}

void addToList(dlisthead list, void* element, string elementType) {
    dlistElem elem;
    dlist node;
    int error = 0;
    if ( (elem = createNewDListElem(element)) == NULL ) {
        error++;
        printf("Error Creating new dlistElement\n");
        return;
    }
    // printf("List element created\n");

    if ( (node = createNewDListNode(element, elementType)) == NULL ) {
        printf("Error creating new Node\n");
        return;
    }
    // printf("List node created\n");

    dlist lastNode = getDlistLastNode(list);

    if ( lastNode == NULL ) {
        if ( !glueToHead(list, node) ){
            printf("Error glueToHead\n");
            return;
        }
    }
    else {
        if ( !glueToPointer(lastNode, node) ){
            return;
        }
    }
    // printf("Added to list\n");
}

int emptyList(dlisthead list) {
    int returnVal = 0;
    if (list->next == NULL){
        returnVal = 1;
    }

    return returnVal;
}
