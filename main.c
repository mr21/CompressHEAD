#include "CompressHEAD.h"
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char* av[]) {
    (void)av;
    if (1 || ac >= 2) {
        char* indexPath = /*av[1]*/"index.html";
        char* content = getContent(indexPath);
        Head head;
        headInit(&head);
        headParse(&head, content);
        printf("file: %s\n", indexPath);
        headShow(&head);
    }
    system("pause");
    return 0;
}
