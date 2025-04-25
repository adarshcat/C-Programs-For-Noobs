#include <stdio.h>
#include <conio.h>

typedef struct Customer {
    char name[100];
    int accNo;
    float balance;
} Customer;

int main() {
    Customer customers[3];

    for (int i=0; i<3; i++) {
        printf("Enter the name of customer %d: ", i+1);
        gets(customers[i].name);
        printf("Enter the account number of customer %d: ", i+1);
        scanf("%d", &customers[i].accNo);
        printf("Enter the balance of customer %d: ", i+1);
        scanf("%f", &customers[i].balance);

        printf("\n");
        getchar();
    }

    for (int i=0; i<3; i++) {
        if (customers[i].balance < 100)
            printf("Customer %s with account number %d has an account balance of less than 100\n", customers[i].name, customers[i].accNo);
    }

    getch();
    return 0;
}

/* OUTPUT

Enter the name of customer 1: a
Enter the account number of customer 1: 1
Enter the balance of customer 1: 45

Enter the name of customer 2: b
Enter the account number of customer 2: 2
Enter the balance of customer 2: 1200

Enter the name of customer 3: c
Enter the account number of customer 3: 3
Enter the balance of customer 3: 97

Customer a with account number 1 has an account balance of less than 100
Customer c with account number 3 has an account balance of less than 100

*/