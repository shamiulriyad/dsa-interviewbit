
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solve(char* A) {
    int n = strlen(A);
    char *result = (char*)malloc((n + 1) * sizeof(char));
    char *words[30000];
    int count = 0;
    int i = 0;

    while (i < n) {
        while (i < n && A[i] == ' ') i++;
        if (i >= n) break;

        words[count++] = &A[i];

        while (i < n && A[i] != ' ') i++;

        A[i] = '\0';
        i++;
    }

    int idx = 0;
    int j;

    for(j = count - 1; j >= 0;j--) {
        int len = strlen(words[j]);
        int k;

        for ( k = 0; k < len; k++) {
            result[idx++] = words[j][k];
        }

        if (j != 0) {
            result[idx++] = ' ';
        }
    }

    result[idx] = '\0';
    return result;
}