#ifndef     COMPRESSHEAD_H
#define     COMPRESSHEAD_H

char* getContent(char const* path);

typedef struct {
    int nbCss, nbJs;
    char const *head, **css, **js;
}Head;

void headInit(Head*);
void headShow(Head const*);
int  headParse(Head*, char const* content);

#endif
