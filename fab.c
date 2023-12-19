//normal method
#include <stdio.h>

int main() {
    int num, a = 0, b = 1, c;

    printf("Enter range 0 to ");
    scanf("%d", &num);

    printf("0 1 ");

    for (int i = 0; i < num - 2; i++) {  
        c = a + b;
        a = b;
        b = c;
        
        if (c > num) 
            break;

        printf("%d ", c);
    }

    return 0;
}






//using recursion
#include <stdio.h>

int fab(int, int, int);

int main() {
    int num;
    printf("Enter range 0 to ");
    scanf("%d", &num);
    printf("0 1 ");
    int result = fab(0, 1, num);
    return 0;
}

int fab(int a, int b, int num) {
    if (num < 0) {
        return -1;
    }
    int c = a + b;

    if (c <= num) {
        printf(" %d", c);
        return fab(b, c, num);
    } else {
        return -1;
    }
}
