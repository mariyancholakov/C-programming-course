#include <stdio.h>
#include "processes.h"
#include <string.h>

struct Process processes[5];
int processescount = 0;
static int id = 1;
static int nextprocessid()
{

    if (id > 0)
    {
        return id++;
    }

    return 0;
}

int createnewprocess(char name[30])
{
    if (processescount >= 5)
    {
        printf("Cannot create a new process. Maximum limit reached.\n");
        return 0;
    }
    int newProccessID = nextprocessid();
    if (newProccessID == 0)
    {
        return 0;
    }
    processes[processescount].ID = newProccessID;
    strcpy(processes[processescount].name, name);
    processescount++;

    return newProccessID;
}
void stopprocess(int ID)
{
    for (int i = 0; i < processescount; i++)
    {
        if (processes[i].ID = ID)
        {
            for (int j = i; j < processescount - 1; j++)
            {
                processes[j] = processes[j + 1];
            }

            printf("Process with ID %d was stopped succesfully!\n", processes[i].ID);
            processescount--;
            return;
        }
    }
    printf("Proccess not found!");
}
void listprocesses()
{
    if (processescount == 0)
    {
        printf("No processes found.");
        return;
    }
    for (int i = 0; i < processescount; i++)
    {
        printf("ID: %d, Name: %s\n", processes[i].ID, processes[i].name);
    }
}
