#include <stdio.h>

#define MAX 100

int queue[MAX];
int front = 0;
int rear = -1;
int count = 0;

void enqueue(int value) {
    if (count == MAX) {
        printf("Queue is full.\n");
        return;
    }

    rear = (rear + 1) % MAX;
    queue[rear] = value;
    count++;
}

void dequeue(void) {
    if (count == 0) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Removed: %d\n", queue[front]);
    front = (front + 1) % MAX;
    count--;
}

void display(void) {
    if (count == 0) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue (front to rear): ");
    for (int i = 0; i < count; i++)
        printf("%d ", queue[(front + i) % MAX]);

    printf("\n");
}

int main(void) {
    int choice, value;

    do {
        printf("\n1. Enqueue  2. Dequeue  3. Display  0. Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 0:
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 0);

    return 0;
}
