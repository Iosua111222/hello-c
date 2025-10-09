#include <stdio.h>
#include <string.h>

int puncte(char *cuv, int n) {
    printf("%s", cuv);
    for(int i = 0; i < n; i++) {
        printf(".");
    }
}

int main() {
    
    char cuvant[40] = "buna";
    char *c = cuvant;
    int lungime = strlen(cuvant);
    puncte(c, lungime);

    return 0;
}