#include <stdio.h>
#include <stdbool.h>

#define USD 1
#define EUR 2
#define GTQ 3
#define MIN_CURRENCIES 1
#define MAX_CURRENCIES 3

int get_user_currency(bool is_from);
bool is_valid_currency(int choice);
void print_user_interface(bool is_from);
float get_rate(int source_currency, int target_currency);
void print_result(float amount, float converted_amount);
int get_user_amount(void);

int main() {
    float amount = get_user_amount();
    
    int source_currency = get_user_currency(true);
    int target_currency = get_user_currency(false);

    float rate = get_rate(source_currency, target_currency);
    float converted_amount = amount * rate;
    
    print_result(amount, converted_amount);
}

int get_user_currency(bool is_from) {
    int choice;

    print_user_interface(is_from);
    scanf("%d", &choice);

    if (!is_valid_currency(choice)) {
        printf("Invalid choice. Please choose a valid currency.\n");
        return get_user_currency(is_from);
    }

    return choice;
}

bool is_valid_currency(int choice) {
    return choice >= MIN_CURRENCIES && choice <= MAX_CURRENCIES;
}

void print_user_interface(bool is_from) {
    if (is_from) {
        printf("Choose the currency you want to convert from:\n");
    } else {
        printf("Choose the currency you want to convert to:\n");
    }
    printf("1. USD\n");
    printf("2. EUR\n");
    printf("3. GTQ\n");
}

float get_rate(int source_currency, int target_currency) {
    if (source_currency == target_currency) {
        return 1.0;
    } else if (source_currency == USD && target_currency == EUR) {
        return 0.89;
    } else if (source_currency == USD && target_currency == GTQ) {
        return 7.70;
    } else if (source_currency == EUR && target_currency == USD) {
        return 1.09;
    } else if (source_currency == EUR && target_currency == GTQ) {
        return 8.40;
    } else if (source_currency == GTQ && target_currency == USD) {
        return 0.13;
    } else if (source_currency == GTQ && target_currency == EUR) {
        return 0.12;
    }
}

void print_result(float amount, float converted_amount) {
    printf("Amount: %.2f\n", amount);
    printf("Converted amount: %.2f\n", converted_amount);
}

int get_user_amount(void) {
    float amount;
    printf("Enter the amount to convert: ");
    while (scanf("%f", &amount) <= 0) {
        printf("Invalid input. Please enter a valid number.\n");
        printf("Enter the amount to convert: ");
    }
    return amount;
}