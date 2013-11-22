#include <stdio.h>
#include <stdlib.h>

char* getContent(char const* path) {
    FILE* f = fopen(path, "rb");
    char* content = NULL;
    if (f) {
        int size;
        if (fseek(f, 0, SEEK_END) == 0 && (size = ftell(f)) != -1 && (content = malloc(size + 1))) {
            rewind(f);
            if (fread(content, 1, size, f) == (unsigned)size) {
                content[size] = '\0';
            } else {
                free(content);
                content = NULL;
            }
        }
        fclose(f);
    }
    return content;
}
