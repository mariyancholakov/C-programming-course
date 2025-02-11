#include <stdio.h>
#include "processes.h"

int main()
{
    int choice;
    char name[30];
    while (1)
    {
        printf("\nChoose one of the 4 options available: \n");
        printf("1. Create a new process\n");
        printf("2. List all processes\n");
        printf("3. Stop a process\n");
        printf("4. Exit the program\n");

        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the name of the new process: ");
            scanf("%s", &name);
            int newID = createnewprocess(name);
            if (newID == 0)
            {
                printf("You reached the max process limit! To create a new process you must first stop one of the others.\n");
                break;
            }
            else
            {
                printf("\nNew process with ID %d created successfully.\n", newID);
            }
            break;
        case 2:
            listprocesses();
            break;
        case 3:
            printf("\nEnter an id of the process you want to stop: ");
            int stopId;
            scanf("%d", &stopId);
            stopprocess(stopId);
            break;
        case 4:
            printf("\nExiting the program...\n");
            return 0;
            break;
        }
    }
}