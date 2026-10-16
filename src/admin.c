
#include <stdio.h>
#include "admin.h"
#include "hospital.h"

struct Patient patients[50];
int patientCount = 0;

void adminPortal()
{
    int choice;
    int subChoice;
    int doctorCount = 0;
    int staffCount = 0;
    int i;

    struct Doctor doctors[50];
    struct Staff staff[50];

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
                do
                {
                    printf("\n===== DOCTOR MANAGEMENT =====\n");
                    printf("1. Add Doctor\n");
                    printf("2. View Doctors\n");
                    printf("3. Back\n");

                    printf("Enter your choice: ");
                    scanf("%d", &subChoice);

                    switch(subChoice)
                    {
                        case 1:
                            if(doctorCount < 50)
                            {
                                printf("Enter Doctor ID: ");
                                scanf("%d", &doctors[doctorCount].id);

                                printf("Enter Doctor Name: ");
                                scanf("%49s", doctors[doctorCount].name);

                                printf("Enter Specialization: ");
                                scanf("%49s", doctors[doctorCount].specialization);

                                doctorCount++;

                                printf("Doctor added successfully!\n");
                            }
                            else
                            {
                                printf("Doctor limit reached!\n");
                            }
                            break;

                        case 2:
                            if(doctorCount == 0)
                            {
                                printf("No doctors added yet.\n");
                            }
                            else
                            {
                                for(i = 0; i < doctorCount; i++)
                                {
                                    printf("\nDoctor ID: %d\n", doctors[i].id);
                                    printf("Name: %s\n", doctors[i].name);
                                    printf("Specialization: %s\n",
                                           doctors[i].specialization);
                                }
                            }
                            break;

                        case 3:
                            break;

                        default:
                            printf("Invalid choice!\n");
                    }

                } while(subChoice != 3);
                break;

            case 2:
                do
                {
                    printf("\n===== PATIENT MANAGEMENT =====\n");
                    printf("1. Add Patient\n");
                    printf("2. View Patients\n");
                    printf("3. Back\n");

                    printf("Enter your choice: ");
                    scanf("%d", &subChoice);

                    switch(subChoice)
                    {
                        case 1:
                            if(patientCount < 50)
                            {
                                printf("Enter Patient ID: ");
                                scanf("%d", &patients[patientCount].id);

                                printf("Enter Patient Name: ");
                                scanf("%49s", patients[patientCount].name);

                                printf("Enter Patient Age: ");
                                scanf("%d", &patients[patientCount].age);

                                printf("Enter Assigned Doctor ID: ");
                                scanf("%d", &patients[patientCount].doctorId);

                                patientCount++;

                                printf("Patient added successfully!\n");
                            }
                            else
                            {
                                printf("Patient limit reached!\n");
                            }
                            break;

                        case 2:
                            if(patientCount == 0)
                            {
                                printf("No patients added yet.\n");
                            }
                            else
                            {
                                for(i = 0; i < patientCount; i++)
                                {
                                    printf("\nPatient ID: %d\n",
                                           patients[i].id);
                                    printf("Name: %s\n", patients[i].name);
                                    printf("Age: %d\n", patients[i].age);
                                    printf("Assigned Doctor ID: %d\n",
                                           patients[i].doctorId);
                                }
                            }
                            break;

                        case 3:
                            break;

                        default:
                            printf("Invalid choice!\n");
                    }

                } while(subChoice != 3);
                break;

            case 3:
                do
                {
                    printf("\n===== STAFF MANAGEMENT =====\n");
                    printf("1. Add Staff Member\n");
                    printf("2. View Staff Members\n");
                    printf("3. Back\n");

                    printf("Enter your choice: ");
                    scanf("%d", &subChoice);

                    switch(subChoice)
                    {
                        case 1:
                            if(staffCount < 50)
                            {
                                printf("Enter Staff ID: ");
                                scanf("%d", &staff[staffCount].id);

                                printf("Enter Staff Name: ");
                                scanf("%49s", staff[staffCount].name);

                                printf("Enter Job Title: ");
                                scanf("%49s", staff[staffCount].job);

                                staffCount++;

                                printf("Staff member added successfully!\n");
                            }
                            else
                            {
                                printf("Staff limit reached!\n");
                            }
                            break;

                        case 2:
                            if(staffCount == 0)
                            {
                                printf("No staff members added yet.\n");
                            }
                            else
                            {
                                for(i = 0; i < staffCount; i++)
                                {
                                    printf("\nStaff ID: %d\n", staff[i].id);
                                    printf("Name: %s\n", staff[i].name);
                                    printf("Job Title: %s\n", staff[i].job);
                                }
                            }
                            break;

                        case 3:
                            break;

                        default:
                            printf("Invalid choice!\n");
                    }

                } while(subChoice != 3);
                break;

            case 4:
                printf("\n===== HOSPITAL RECORD SUMMARY =====\n");
                printf("Total Doctors: %d\n", doctorCount);
                printf("Total Patients: %d\n", patientCount);
                printf("Total Staff Members: %d\n", staffCount);
                break;

            case 5:
                printf("Logging out...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);
}
