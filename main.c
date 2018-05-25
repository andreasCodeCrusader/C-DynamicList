#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./headers/dynamic_list.h"

int main(int argc, char const *argv[]) {
    char element[10], elementType[10];

    strcpy(element, "asfss");
    strcpy(elementType, "string");

    printf("Test Main Starts\n");

    dlisthead list = createNewDList();
    if (list == NULL){
        printf("List not created right\n");
        return 1;
    }

    addToList(list, (char*)element, elementType);

    if (emptyList(list)){
        printf("element wasn't attached\n");
    }

    printf("element from dlistElem: %s\n", (string) list->next->this->element);

    printf("Test Main Ends\n");
    return 0;
}
