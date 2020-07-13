#include <stdio.h>

int main() {
    int nc = 0, nw = 0, nl = 0;
    char c;
    
    OUT: if((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
                ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            goto OUT;
        else {
            ++nw;
            goto IN;
        }
    }

    IN: if((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
                ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            goto OUT;
        else 
            goto IN;
    }
    printf("%d %d %d \n", nl, nw, nc);
}