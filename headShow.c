#include "CompressHEAD.h"
#include <stdio.h>

void headShow(Head const* h) {
    int i;
	printf("HEAD:\n");
    printf("* head = \"%.20s\";\n", h->head);
    printf("* nbCss = %d;\n", h->nbCss);
    for (i = 0; i < h->nbCss; ++i)
        printf("  * css[%d] = [%s]\n", i, h->css[i]);
    printf("* nbJs  = %d;\n", h->nbJs);
    for (i = 0; i < h->nbJs; ++i)
        printf("  *  js[%d] = [%s]\n", i, h->js[i]);
}
