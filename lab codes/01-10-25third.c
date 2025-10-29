#include <stdio.h>
int FIBO(int num) {
    if (num <= 1)
        return num;
    else
        return FIBO(num - 1) + FIBO(num - 2);
}

int main() {
    int limit;
    printf("Enter the number of terms: ");
    scanf("%d", &limit);
    printf("Fibonacci sequence up to %d terms:\n", limit);
    for (int i = 0; i < limit; i++)
    {
        printf("%d ", FIBO(i));
    }
    return 0;
}