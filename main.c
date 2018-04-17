#include "stdio.h"
#include "stdlib.h"
#include "./headers/dynamic_list.h"

int main(int argc, char const *argv[]) {
    printf("Test Main Starts\n");
    char element[10] = "aagard";
    char elementType[10] = "string";

    dlisthead list = createNewDList();
    if (list == NULL){
        printf("List not created right\n");
        return 1;
    }
    addToList(list, (char*)element, elementType);


    if (list->next == NULL){
        printf("element wasn't attached\n");
    }

    printf("element from dlistElem: %s\n", (char*)list->next->this->element);

    printf("Test Main Ends\n");
    return 0;
}
