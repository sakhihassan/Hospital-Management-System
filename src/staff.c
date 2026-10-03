#include <stdio.h>
#include "staff.h"

void staffPortal()
{
    int choice;

    do
    {
        printf("\n===== STAFF PORTAL =====\n");
        printf("1. Register Patient\n");
        printf("2. Manage Appointments\n");
        printf("3. View Patient Records\n");
        printf("4. Manage Billing\n");
        printf("5. Logout\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Patient Registration\n");
                break;

            case 2:
                printf("Appointment Management\n");
                break;

            case 3:
                printf("Patient Records\n");
                break;

            case 4:
                printf("Billing Management\n");
                break;

            case 5:
                printf("Logging out...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);
}