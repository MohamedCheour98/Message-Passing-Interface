#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int main (int argc, char *argv[])
{
    char *args[4];
    
    args[0] = malloc(100);
    args[1] = malloc(100);
    args[2] = malloc(100);
    args[3] = malloc(100);
    
    strcpy(args[0],argv[1]);

    strcpy(args[2], argv[2]); //X must be par_count
    args[3] = NULL; //don’t forget for args[4]
    
    int n = atoi(argv[2]);

    for (int i = 0; i < n; i++)
    {
        char id[20];
        sprintf(id, "%d", i);

        if (fork() == 0)
        {   
            strcpy(args[1], id);
            execv(args[0],args);
            return 0;
        }
    }
    
    wait(0);
    return 0; 
}