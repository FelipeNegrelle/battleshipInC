<<<<<<< HEAD
#include <stdio.h>

int main() {
    printf("Hello World!");
    return 0;
}
=======
# include <stdio.h>
# include <stdlib.h>

void basicCalc() {
    int num1;
    int num2;
    printf("Basic integer sum calculator\n");
    
    printf("Type first number: ");
    scanf("%d", &num1);
    
    printf("Type second number: ");
    scanf("%d", &num2);
    
    printf("the sum is: %d", num1 + num2);
}



int main() {
    basicCalc();
    return 0;
}

>>>>>>> 6b96533 (alteracoes 09/03)
