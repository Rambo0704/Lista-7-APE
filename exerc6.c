#include <stdio.h>

int contem(char *str1, char *str2) {
    char *p1, *p2, *p3;
    for (p1 = str1; *p1 != '\0'; p1++) {
        p3 = p1;
        p2 = str2;
        while (*p3 == *p2 && *p2 != '\0') {
            p3++;
            p2++;
        }
        if (*p2 == '\0') return 1;
    }
    return 0;
}
int main() {
    char s1[100], s2[100];
    printf("Digite a primeira string:\n");
    fgets(s1, 100, stdin);

    printf("Digite a segunda string:\n");
    fgets(s2, 100, stdin);

    int i;
    for (i = 0; s1[i] != '\0'; i++) {
        if (s1[i] == '\n') {
            s1[i] = '\0';
        }
    }
    for (i = 0; s2[i] != '\0'; i++) {
        if (s2[i] == '\n') {
            s2[i] = '\0';
        }
    }
    if (contem(s1, s2)) {
        printf("A segunda string esta na primeira\n");
    } else {
        printf("A segunda string nao esta na primeira\n");
    }
    return 0;
}

