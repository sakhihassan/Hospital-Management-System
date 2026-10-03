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
            printf("\nWelcome to Admin Portal\n");
            break;

        case 2:
            printf("\nWelcome to Doctor Portal\n");
            break;

        case 3:
            printf("\nWelcome to Patient Portal\n");
            break;

        case 4:
            printf("\nWelcome to Staff Portal\n");
            break;

        default:
            printf("\nAccess Denied\n");
    }

    return 0;
}