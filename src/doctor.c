
#include <stdio.h>
#include "doctor.h"
#include "hospital.h"

struct Prescription
{
    int patientId;
    char medicine[50];
    char instructions[100];
};

void doctorPortal()
{
    int choice;
    int prescriptionCount = 0;
    int i;

    struct Prescription prescriptions[50];

    do
    {
        printf("\n===== DOCTOR PORTAL =====\n");
        printf("1. View Patients\n");
        printf("2. View Appointments\n");
        printf("3. View Medical Records\n");
        printf("4. Write Prescription\n");
        printf("5. View Prescriptions\n");
        printf("6. Logout\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\n===== PATIENT LIST =====\n");
                printf("Patient records will be connected during integration.\n");
                break;

            case 2:
                printf("\n===== APPOINTMENTS =====\n");
                printf("Appointment management is not implemented yet.\n");
                break;

            case 3:
                printf("\n===== MEDICAL RECORDS =====\n");
                printf("Medical record management is not implemented yet.\n");
                break;

            case 4:
                if(prescriptionCount < 50)
                {
                    printf("\n===== WRITE PRESCRIPTION =====\n");

                    printf("Enter Patient ID: ");
                    scanf("%d", &prescriptions[prescriptionCount].patientId);

                    printf("Enter Medicine Name: ");
                    scanf("%49s", prescriptions[prescriptionCount].medicine);

                    printf("Enter Instructions (one word): ");
                    scanf("%99s", prescriptions[prescriptionCount].instructions);

                    prescriptionCount++;

                    printf("Prescription added successfully!\n");
                }
                else
                {
                    printf("Prescription limit reached!\n");
                }
                break;

            case 5:
                printf("\n===== PRESCRIPTION LIST =====\n");

                if(prescriptionCount == 0)
                {
                    printf("No prescriptions available.\n");
                }
                else
                {
                    for(i = 0; i < prescriptionCount; i++)
                    {
                        printf("\nPatient ID: %d\n",
                               prescriptions[i].patientId);
                        printf("Medicine: %s\n",
                               prescriptions[i].medicine);
                        printf("Instructions: %s\n",
                               prescriptions[i].instructions);
                    }
                }
                break;

            case 6:
                printf("Logging out...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 6);
}
