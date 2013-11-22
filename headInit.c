#include "CompressHEAD.h"
#include <stddef.h>

void headInit(Head* h) {
    h->nbCss = h->nbJs = 0;
    h->head = NULL;
    h->css = h->js = NULL;
}
