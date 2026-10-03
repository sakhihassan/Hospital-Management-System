#include <stdio.h>
#include "doctor.h"

void doctorPortal()
{
    int choice;

    do
    {
        printf("\n===== DOCTOR PORTAL =====\n");
        printf("1. View Patients\n");
        printf("2. View Appointments\n");
        printf("3. View Medical Records\n");
        printf("4. Write Prescription\n");
        printf("5. Logout\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Patient List\n");
                break;

            case 2:
                printf("Appointments\n");
                break;

            case 3:
                printf("Medical Records\n");
                break;

            case 4:
                printf("Prescription\n");
                break;

            case 5:
                printf("Logging out...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);
}