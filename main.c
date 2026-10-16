
#include <stdio.h>
#include "authentication.h"
#include "admin.h"
#include "doctor.h"
#include "patient.h"
#include "staff.h"

int main()
{
    int role;
    int choice;

    do
    {
        role = loginUser();

        switch(role)
        {
            case 1:
                adminPortal();
                break;

            case 2:
                doctorPortal();
                break;

            case 3:
                patientPortal();
                break;

            case 4:
                staffPortal();
                break;
        }

        printf("\n1. Login Again\n");
        printf("0. Exit Program\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

    } while(choice != 0);

    return 0;
}
