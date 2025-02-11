#ifndef PROCCESSES_H_
#define PROCCESSES_H_

struct Process
{

    int ID;
    char name[30];
};

extern struct Process processes[5];
extern int processescount;
int createnewprocess(char name[]);
void stopprocess(int ID);
void listprocesses();

#endif