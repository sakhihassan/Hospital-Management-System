
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
    int patientId;
    int found;

    struct Prescription prescriptions[50];

    do
    {
        printf("\n===== DOCTOR PORTAL =====\n");
        printf("1. View Patients\n");
        printf("2. View Appointments\n");
        printf("3. View Medical Records\n");
        printf("4. Write Prescription\n");
        printf("5. View Prescriptions\n");
        printf("6. Update Patient Diagnosis\n");
        printf("7. Logout\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\n===== PATIENT LIST =====\n");

                if(patientCount == 0)
                {
                    printf("No patients registered yet.\n");
                }
                else
                {
                    for(i = 0; i < patientCount; i++)
                    {
                        printf("\nPatient ID: %d\n", patients[i].id);
                        printf("Name: %s\n", patients[i].name);
                        printf("Age: %d\n", patients[i].age);
                        printf("Assigned Doctor ID: %d\n",
                               patients[i].doctorId);
                        printf("Diagnosis: %s\n",
                               patients[i].diagnosis);
                    }
                }
                break;

            case 2:
                printf("\n===== APPOINTMENTS =====\n");
                printf("Appointment management is not implemented yet.\n");
                break;

            case 3:
                printf("\n===== MEDICAL RECORDS =====\n");

                if(patientCount == 0)
                {
                    printf("No patient records available.\n");
                }
                else
                {
                    for(i = 0; i < patientCount; i++)
                    {
                        printf("\nPatient ID: %d\n", patients[i].id);
                        printf("Name: %s\n", patients[i].name);
                        printf("Age: %d\n", patients[i].age);
                        printf("Diagnosis: %s\n",
                               patients[i].diagnosis);
                    }
                }
                break;

            case 4:
                if(prescriptionCount < 50)
                {
                    printf("\n===== WRITE PRESCRIPTION =====\n");

                    printf("Enter Patient ID: ");
                    scanf("%d",
                          &prescriptions[prescriptionCount].patientId);

                    printf("Enter Medicine Name: ");
                    scanf("%49s",
                          prescriptions[prescriptionCount].medicine);

                    printf("Enter Instructions (one word): ");
                    scanf("%99s",
                          prescriptions[prescriptionCount].instructions);

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
                printf("\n===== UPDATE PATIENT DIAGNOSIS =====\n");

                printf("Enter Patient ID: ");
                scanf("%d", &patientId);

                found = 0;

                for(i = 0; i < patientCount; i++)
                {
                    if(patients[i].id == patientId)
                    {
                        printf("Patient Name: %s\n", patients[i].name);
                        printf("Current Diagnosis: %s\n",
                               patients[i].diagnosis);

                        printf("Enter New Diagnosis (one word): ");
                        scanf("%99s", patients[i].diagnosis);

                        printf("Diagnosis updated successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Patient ID not found!\n");
                }
                break;

            case 7:
                printf("Logging out...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 7);
}
