#include <stdio.h>
#include "admin.h"

void adminPortal()
{
    int choice;

    do
    {
        printf("\n===== ADMIN PORTAL =====\n");
        printf("1. Manage Doctors\n");
        printf("2. Manage Patients\n");
        printf("3. Manage Staff\n");
        printf("4. View Hospital Records\n");
        printf("5. Logout\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Doctor Management\n");
                break;

            case 2:
                printf("Patient Management\n");
                break;

            case 3:
                printf("Staff Management\n");
                break;

            case 4:
                printf("Hospital Records\n");
                break;

            case 5:
                printf("Logging out...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);
}