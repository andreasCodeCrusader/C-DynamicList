#include "stdio.h"
#include "stdlib.h"
#include "./headers/dynamic_list.h"

int main(int argc, char const *argv[]) {
    printf("Test Main Starts\n");

    char element[10] = "aagard";
    dlistElem elem = createNewDListElem(element);
    printf("element from dlistElem: %s\n", (char*)elem->element);

    printf("Test Main Ends\n");
    return 0;
}
