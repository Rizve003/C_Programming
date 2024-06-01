#include <stdio.h>

struct driver_info
{

    char name[34];
    int driving_lisence;
    char route[34];
    int km;
};

int main()
{
    int s_no;
    char action;
    struct driver_info driver_id[6];

    printf("\n******Travel Agency Management******\n");
lebel:
    printf("\nEnter driver's serial Num (1-5): ");
    scanf("%d", &s_no);

    switch (s_no)
    {
    case 1:
        printf("***Enter Driver Details***\n\nEnter Name: ");
        scanf("%s", &driver_id[1].name);
        printf("Enter driving lisence: ");
        scanf("%d", &driver_id[1].driving_lisence);
        printf("Enter route: ");
        scanf("%s", &driver_id[1].route);
        printf("Enter distance: ");
        scanf("%d", &driver_id[1].km);
        printf("\nDriver's Details:\nSerial Number: %d\nDriver's Name: %s\n",
               s_no, driver_id[1].name);
        printf("Driving Lisence No.: %d\nDriver's Route: %s\nTraveled distance: %d Km",
               driver_id[1].driving_lisence, driver_id[1].route, driver_id[1].km);
        printf("\nDo you want to Continue?--->'y' for Yes 'n' for No: ");
        scanf("%s", &action);
        if (action == 'y')
        {
            goto lebel;
        }
        else
        {
            goto end;
        }

        break;

    case 2:
        printf("***Enter Driver Details***\n\nEnter Name: ");
        scanf("%s", &driver_id[2].name);
        printf("Enter driving lisence: ");
        scanf("%d", &driver_id[2].driving_lisence);
        printf("Enter route: ");
        scanf("%s", &driver_id[2].route);
        printf("Enter distance: ");
        scanf("%d", &driver_id[2].km);
        printf("\nDriver's Details:\n\nSerail Number: %d\nDriver's Name: %s\n",
               s_no, driver_id[2].name);
        printf("Driving Lisence No.: %d\nDriver's Route: %s\nTraveled distance: %d Km",
               driver_id[2].driving_lisence, driver_id[2].route, driver_id[2].km);
        printf("\nDo you want to Continue?--->'y' for Yes 'n' for No: ");
        scanf("%s", &action);
        if (action == 'y')
        {
            goto lebel;
        }
        else
        {
            goto end;
        }
        break;

    case 3:
        printf("***Enter Driver Details***\n\nEnter Name: ");
        scanf("%s", &driver_id[3].name);
        printf("Enter driving lisence: ");
        scanf("%d", &driver_id[3].driving_lisence);
        printf("Enter route: ");
        scanf("%s", &driver_id[3].route);
        printf("Enter distance: ");
        scanf("%d", &driver_id[3].km);
        printf("\nDriver's Details:\n\nSerail Number: %d\nDriver's Name: %s\n",
               s_no, driver_id[3].name);
        printf("Driving Lisence No.: %d\nDriver's Route: %s\nTraveled distance: %d Km",
               driver_id[3].driving_lisence, driver_id[3].route, driver_id[3].km);
        printf("\nDo you want to Continue?--->'y' for Yes 'n' for No: ");
        scanf("%s", &action);
        if (action == 'y')
        {
            goto lebel;
        }
        else
        {
            goto end;
        }
        break;

    case 4:
        printf("***Enter Driver Details***\n\nEnter Name: ");
        scanf("%s", &driver_id[4].name);
        printf("Enter driving lisence: ");
        scanf("%d", &driver_id[4].driving_lisence);
        printf("Enter route: ");
        scanf("%s", &driver_id[4].route);
        printf("Enter distance: ");
        scanf("%d", &driver_id[4].km);
        printf("\nDriver's Details:\n\nSerail Number: %d\nDriver's Name: %s\n",
               s_no, driver_id[4].name);
        printf("Driving Lisence No.: %d\nDriver's Route: %s\nTraveled distance: %d Km",
               driver_id[4].driving_lisence, driver_id[4].route, driver_id[4].km);
        printf("\nDo you want to Continue?--->'y' for Yes 'n' for No : ");
        scanf("%s", &action);
        if (action == 'y')
        {
            goto lebel;
        }
        else
        {
            goto end;
        }
        break;

    case 5:
        printf("***Enter Driver Details***\n\nEnter Name: ");
        scanf("%s", &driver_id[5].name);
        printf("Enter driving lisence: ");
        scanf("%d", &driver_id[5].driving_lisence);
        printf("Enter route: ");
        scanf("%s", &driver_id[5].route);
        printf("Enter distance: ");
        scanf("%d", &driver_id[5].km);
        printf("\nDriver's Details:\n\nSerail Number: %d\nDriver's Name: %s\n",
               s_no, driver_id[5].name);
        printf("Driving Lisence No.: %d\nDriver's Route: %s\nTraveled distance: %d Km",
               driver_id[5].driving_lisence, driver_id[5].route, driver_id[5].km);
        printf("\nDo you want to Continue?--->'y' for Yes 'n' for No : ");
        scanf("%s", &action);
        if (action == 'y')
        {
            goto lebel;
        }
        else
        {
            goto end;
        }
        break;

    default:
        printf("\n*Enter a valid serial number*\n");
        printf("\nDo you want to Continue?--->'y' for Yes 'n' for No : ");
        scanf("%s", &action);
        if (action == 'y')
        {
            goto lebel;
        }
        else
        {
            goto end;
        }
        break;
    }

end:

    return 0;
}
