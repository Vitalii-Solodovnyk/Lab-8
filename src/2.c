#include <stdio.h>

#define MAX_ACCOUNTS 100  


void print_menu(void);
void deposit(double saldo[], int n);
void withdraw(double saldo[], int n);
void show_balance(const double saldo[], int n);

int main() {
    double saldo[MAX_ACCOUNTS] = {0};  
    int choice;

    do {
        print_menu();
        if (scanf("%d", &choice) != 1) { 
            printf("Invalid input.\n");
         
            while(getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
                deposit(saldo, MAX_ACCOUNTS);
                break;
            case 2:
                withdraw(saldo, MAX_ACCOUNTS);
                break;
            case 3:
                show_balance(saldo, MAX_ACCOUNTS);
                break;
            case 0:
                printf("End of program.\n");
                break;
            default:
                printf("Invalid option.\n");
        }
    } while (choice != 0);

    return 0;
}

void print_menu(void) {
    printf("\nMENU:\n");
    printf("1 - DEPOSIT\n");
    printf("2 - WITHDRAW\n");
    printf("3 - SHOW BALANCE\n");
    printf("0 - EXIT\n");
    printf("Choose option: ");
}

void deposit(double saldo[], int n) {
    int account;
    double amount;
    printf("Enter account number (0-%d): ", n-1);
    if (scanf("%d", &account) != 1) {
        printf("Invalid input.\n");
        while(getchar() != '\n');
        return;
    }

    if (account < 0 || account >= n) {
        printf("Invalid account number.\n");
        return;
    }

    printf("Enter deposit amount: ");
    if (scanf("%lf", &amount) != 1 || amount < 0) {
        printf("Invalid amount.\n");
        while(getchar() != '\n');
        return;
    }

    saldo[account] += amount;
    printf("DEPOSIT OK. Account %d new balance: %.2lf\n", account, saldo[account]);
}

void withdraw(double saldo[], int n) {
    int account;
    double amount;
    printf("Enter account number (0-%d): ", n-1);
    if (scanf("%d", &account) != 1) {
        printf("Invalid input.\n");
        while(getchar() != '\n');
        return;
    }

    if (account < 0 || account >= n) {
        printf("Invalid account number.\n");
        return;
    }

    printf("Enter withdrawal amount: ");
    if (scanf("%lf", &amount) != 1 || amount < 0) {
        printf("Invalid amount.\n");
        while(getchar() != '\n');
        return;
    }

    if (amount > saldo[account]) {
        printf("WITHDRAW ERROR. Insufficient funds.\n");
    } else {
        saldo[account] -= amount;
        printf("WITHDRAW OK. Account %d new balance: %.2lf\n", account, saldo[account]);
    }
}


void show_balance(const double saldo[], int n) {
    int account;
    printf("Enter account number (0-%d): ", n-1);
    if (scanf("%d", &account) != 1) {
        printf("Invalid input.\n");
        while(getchar() != '\n');
        return;
    }

    if (account < 0 || account >= n) {
        printf("Invalid account number.\n");
        return;
    }

    printf("SHOW: Account %d balance = %.2lf\n", account, saldo[account]);
}
