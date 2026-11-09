#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    if (top < MAX - 1)
        stack[++top] = value;
}

int pop(void) {
    return stack[top--];
}

void insertAtBottom(int value) {
    if (top == -1) {
        push(value);
        return;
    }

    int current = pop();
    insertAtBottom(value);
    push(current);
}

void reverseStack(void) {
    if (top == -1)
        return;

    int value = pop();
    reverseStack();
    insertAtBottom(value);
}

int main(void) {
    int n, value;

    printf("How many elements (0–%d)? ", MAX);
    scanf("%d", &n);

    if (n < 0 || n > MAX) {
        printf("Invalid stack size.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        push(value);
    }

    reverseStack();

    printf("Reversed stack (top to bottom): ");
    for (int i = top; i >= 0; i--)
        printf("%d ", stack[i]);

    printf("\n");
    return 0;
}
