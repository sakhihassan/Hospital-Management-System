#include <stdio.h>
#include "patient.h"

void patientPortal()
{
    int choice;

    do
    {
        printf("\n===== PATIENT PORTAL =====\n");
        printf("1. View Profile\n");
        printf("2. Book Appointment\n");
        printf("3. View Appointments\n");
        printf("4. View Prescription\n");
        printf("5. View Medical Records\n");
        printf("6. Logout\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Patient Profile\n");
                break;

            case 2:
                printf("Book Appointment\n");
                break;

            case 3:
                printf("Appointments\n");
                break;

            case 4:
                printf("Prescription\n");
                break;

            case 5:
                printf("Medical Records\n");
                break;

            case 6:
                printf("Logging out...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 6);
}