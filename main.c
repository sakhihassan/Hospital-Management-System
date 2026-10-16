
#include <stdio.h>
#include "authentication.h"
#include "admin.h"
#include "doctor.h"
#include "patient.h"
#include "staff.h"

int main()
{
    int role;

    role = loginUser();

    switch (role)
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

        default:
            printf("\nAccess Denied\n");
    }

    return 0;
}
