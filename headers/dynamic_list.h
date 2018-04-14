typedef char* string;

typedef struct dynamicListElement {
    void *element;
} *dlistElem;

struct dynamicList {
    string     elementType;
    dlistElem *this;
    dlistElem *next;
};


dlistElem createNewDListElem(void* element);
