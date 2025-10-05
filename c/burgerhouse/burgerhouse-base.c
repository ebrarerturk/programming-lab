#include <stdio.h>

#define BURGER_COUNT 4
#define FRIES_COUNT  2
#define DRINK_COUNT  3

#define BASE_BURGER 0
#define BASE_FRIES  (BASE_BURGER + BURGER_COUNT) // 4
#define BASE_DRINK  (BASE_FRIES  + FRIES_COUNT)  // 6

char *burgers[] = {"Classic Burger", "Cheese Burger", "Spicy Burger", "Vegan Burger"};
int  burgerPrices[] = {12, 14, 15, 13};

char *fries[] = {"Regular Fries", "Curly Fries"};
int  friesPrices[] = {6, 7};

char *drinks[] = {"Coke", "Sprite", "Iced Tea"};
int  drinkPrices[] = {5, 5, 6};

void showMenus(void);

int main(void) {
    showMenus();
    int cart[100];
    int cartCount = 0;
    int choice;

    do {
        printf("\nMain Menu:\n");
        printf("1. Burgers\n2. Fries\n3. Drinks\n9. View Cart\n0. Checkout\n");
        printf("Choose: ");
        scanf("%d", &choice);

        if (choice == 1) {
            int sub;
            printf("\n-- Burgers --\n");
            for (int i = 0; i < BURGER_COUNT; i++) {
                printf("%d. %s - $%d\n", i+1, burgers[i], burgerPrices[i]);
            }
            printf("0. Back\nChoose: ");
            scanf("%d", &sub);
            if (sub >= 1 && sub <= BURGER_COUNT) {
                int productIndex = BASE_BURGER + (sub - 1);
                cart[cartCount++] = productIndex;
                printf("Added: %s ($%d)\n", burgers[sub-1], burgerPrices[sub-1]);
            }

        } else if (choice == 2) {
            int sub;
            printf("\n-- Fries --\n");
            for (int i = 0; i < FRIES_COUNT; i++) {
                printf("%d. %s - $%d\n", i+1, fries[i], friesPrices[i]);
            }
            printf("0. Back\nChoose: ");
            scanf("%d", &sub);
            if (sub >= 1 && sub <= FRIES_COUNT) {
                int productIndex = BASE_FRIES + (sub - 1);
                cart[cartCount++] = productIndex;
                printf("Added: %s ($%d)\n", fries[sub-1], friesPrices[sub-1]);
            }

        } else if (choice == 3) {
            int sub;
            printf("\n-- Drinks --\n");
            for (int i = 0; i < DRINK_COUNT; i++) {
                printf("%d. %s - $%d\n", i+1, drinks[i], drinkPrices[i]);
            }
            printf("0. Back\nChoose: ");
            scanf("%d", &sub);
            if (sub >= 1 && sub <= DRINK_COUNT) {
                int productIndex = BASE_DRINK + (sub - 1);
                cart[cartCount++] = productIndex;
                printf("Added: %s ($%d)\n", drinks[sub-1], drinkPrices[sub-1]);
            }

        } else if (choice == 9) {
            printf("\n--- Your Cart ---\n");
            if (cartCount == 0) {
                printf("Cart is empty.\n");
            } else {
                int subtotal = 0;
                for (int i = 0; i < cartCount; i++) {
                    int idx = cart[i];
                    if (idx < BASE_FRIES) {
                        printf("- %s : $%d\n", burgers[idx], burgerPrices[idx]);
                        subtotal += burgerPrices[idx];
                    } else if (idx < BASE_DRINK) {
                        int j = idx - BASE_FRIES;
                        printf("- %s : $%d\n", fries[j], friesPrices[j]);
                        subtotal += friesPrices[j];
                    } else {
                        int k = idx - BASE_DRINK;
                        printf("- %s : $%d\n", drinks[k], drinkPrices[k]);
                        subtotal += drinkPrices[k];
                    }
                }
                printf("Subtotal: $%d\n", subtotal);
            }

        } else if (choice == 0) {
            printf("\n--- Checkout ---\n");
            if (cartCount == 0) {
                printf("Cart is empty.\n");
            } else {
                int total = 0;
                for (int i = 0; i < cartCount; i++) {
                    int idx = cart[i];
                    if (idx < BASE_FRIES) {
                        printf("- %s : $%d\n", burgers[idx], burgerPrices[idx]);
                        total += burgerPrices[idx];
                    } else if (idx < BASE_DRINK) {
                        int j = idx - BASE_FRIES;
                        printf("- %s : $%d\n", fries[j], friesPrices[j]);
                        total += friesPrices[j];
                    } else {
                        int k = idx - BASE_DRINK;
                        printf("- %s : $%d\n", drinks[k], drinkPrices[k]);
                        total += drinkPrices[k];
                    }
                }
                printf("Total: $%d\n", total);
            }
            printf("Bye!\n");

        } else {
            printf("Invalid choice!\n");
        }

    } while (choice != 0);

    return 0;
}

void showMenus(void) {
    printf("\n----- BurgerHouse Menu -----\n" );
    printf("\nBurgers:\n");
    for (int i=0; i<BURGER_COUNT; i++) {
        printf("%d. %s - $%d \n", i+1, burgers[i], burgerPrices[i]);
    }

    printf("\nFries:\n");
    for (int i=0; i<FRIES_COUNT; i++) {
        printf("%d. %s - $%d \n", i+1, fries[i], friesPrices[i]);
    }

    printf("\nDrinks:\n");
    for (int i=0; i<DRINK_COUNT; i++) {
        printf("%d. %s - $%d \n", i+1, drinks[i], drinkPrices[i]);
    }
    printf("\n0. Checkout\n");
}
