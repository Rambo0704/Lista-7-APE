#include <stdio.h>

int main() {
    int num = 5;    
    float real = 7.4;    
    char caract = 'a';    
    printf("%d\n", num);
    printf("%.1f\n", real);    
    printf("%c\n", caract);    
    
    int *pontnum;    
    float *pontreal;    
    char *pontcaract;
    pontnum = &num;    
    pontreal = &real;
    pontcaract = &caract;
    *pontnum = 8;
    *pontreal = 9.6;
    *pontcaract = 'd';
    printf("%d\n", num);
    printf("%.1f\n", real);    
    printf("%c\n", caract);
    return 0;    
}

