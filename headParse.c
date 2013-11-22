#include "CompressHEAD.h"
#include <string.h>

static int _findHead(Head* h, char const* content) {
    h->head = strstr(content, "<head");
    if (h->head) {
        h->head = strstr(h->head, ">");
        if (h->head)
            ++h->head;
    }
    return h->head != NULL;
}

int headParse(Head* h, char const* content) {
    int ret = _findHead(h, content);
    if (ret) {

    }
    return ret;
}
