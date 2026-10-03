#include <stdio.h>
#include <string.h>
#include "authentication.h"

int loginUser()
{
    char username[30];
    char password[30];

    printf("\n===== HOSPITAL MANAGEMENT SYSTEM =====\n");

    printf("Enter Username: ");
    scanf("%29s", username);

    printf("Enter Password: ");
    scanf("%29s", password);

    if (strcmp(username, "admin") == 0 &&
        strcmp(password, "admin123") == 0)
    {
        return 1;
    }
    else if (strcmp(username, "doctor") == 0 &&
             strcmp(password, "doc123") == 0)
    {
        return 2;
    }
    else if (strcmp(username, "patient") == 0 &&
             strcmp(password, "pat123") == 0)
    {
        return 3;
    }
    else if (strcmp(username, "staff") == 0 &&
             strcmp(password, "staff123") == 0)
    {
        return 4;
    }
    else
    {
        printf("\nInvalid username or password!\n");
        return 0;
    }
}