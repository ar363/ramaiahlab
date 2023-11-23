/*
• C-Program to read the name of the user, number of units consumed and print out the
charges. An electricity board charges the following rates for the use of electricity:
o For the first 200 units 80 paise per unit
o For the next 100 units 90 paise per unit
o Beyond 300 units Rs 1 per unit.
 All users are charged a minimum of Rs. 100 as meter charge. If the total amount is
more than Rs 400, then an additional surcharge of 15% of total amount is charged
*/

#include <stdio.h>

void main()
{
    char name[25];
    int units;
    double amt;

    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 200)
        amt = units * 0.8;
    else if (units >= 200 && units <= 300)
        amt = (200 * 0.8) + ((units - 200) * 0.9);
    else
        amt = (200 * 0.8) + (100 * 0.9) + ((units - 300) * 1);

    amt += 100;

    if (amt > 400)
        amt = amt + 0.15 * amt;

    printf("\nElectricity Bill\n");
    printf("Consumer name: %s\n", name);
    printf("Units consumed: %d\n", units);
    printf("Bill amount: %.2f\n", amt);
}

/*
Enter your name: adi
Enter the number of units consumed: 150

Electricity Bill
Consumer name: adi
Units consumed: 150
Bill amount: 220.00
*/