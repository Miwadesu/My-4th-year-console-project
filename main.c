#include <stdio.h>

void buyItem();
void playGame(char name[]);
void doMath();
void repeatMessage();

int main() {
    char name[30];
    int choice;

    printf("=====================================\n");
    printf("      Welcome to My Fun Program\n");
    printf("=====================================\n");

    printf("Enter your name: ");
    scanf("%29s", name);

    do {
        printf("\nHello, %s!\n", name);
        printf("\nChoose an option:\n");
        printf("1. Buy an Item\n");
        printf("2. Play a Game\n");
        printf("3. Do Some Math\n");
        printf("4. Repeat a Message\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        printf("\n");

        switch (choice) {
            case 1:
                buyItem();
                break;

            case 2:
                playGame(name);
                break;

            case 3:
                doMath();
                break;

            case 4:
                repeatMessage();
                break;

            case 5:
                printf("Thank you for using my program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}

void buyItem() {
    char item[30];

    printf("Choose an item (knife or gun): ");
    scanf("%29s", item);

    printf("\nInteresting choice! I happen to have a %s for sale.\n", item);
}

void playGame(char name[]) {
    int number;
    char food[30];

    printf("Let's play a game, %s!\n", name);
    printf("Pick a number from 1 to 10: ");
    scanf("%d", &number);

    if (number > 4) {
        printf("\nThat's a pretty high number! You win a reward.\n");

        printf("What's your favorite food? ");
        scanf("%29s", food);

        printf("\nHere you go, have some %s!\n", food);
        printf("(Imagine a delicious picture here.)\n");
    }
    else {
        printf("\nThat's a low number. Sorry, no reward this time.\n");
    }
}

void doMath() {
    int num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("\n%d + %d = %d\n", num1, num2, sum);
}

void repeatMessage() {
    char message[100];

    printf("Enter a message: ");
    scanf("%99s", message);

    for (int i = 1; i <= 100; i++) {
        printf("%d. %s\n", i, message);
    }
}
