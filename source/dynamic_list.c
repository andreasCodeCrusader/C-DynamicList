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
