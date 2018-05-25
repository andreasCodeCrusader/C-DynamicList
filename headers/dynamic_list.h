typedef char* string;

typedef struct dynamicListElement {
    void *element;
} *dlistElem;

typedef struct dynamicList *dlist;

struct dynamicList {
    string     elementType;
    dlistElem  this;
    dlist      next;
};

typedef struct dynamicListHead {
    dlist next;
} *dlisthead;


dlistElem createNewDListElem(void* element);
dlisthead createNewDList();
dlist     createNewDListNode(dlistElem element, string elementType);
int       glueToHead(dlisthead head, dlist target);
int       glueToPointer(dlist lastNode, dlist target);
void      addToList(dlisthead list, void* element, string elementType);
int       emptyList(dlisthead list);
