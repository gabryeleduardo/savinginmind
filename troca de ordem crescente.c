#include <stdio.h>

int main() {
    
    int a, b, c;
    int x, y, z, temp;
    
    scanf("%d %d %d", &a, &b, &c);
    
    // cópias
    x = a;
    y = b;
    z = c;
    
    // ordenação
    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }
    
    if (x > z) {
        temp = x;
        x = z;
        z = temp;
    }
    
    if (y > z) {
        temp = y;
        y = z;
        z = temp;
    }
    
    // saída ordenada
    printf("%d\n%d\n%d\n", x, y, z);
    
    printf("\n"); // linha em branco
    
    // saída original
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}
