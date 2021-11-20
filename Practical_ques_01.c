#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include <sys/types.h>

int main(){

 /*   Same program, Same code    */

    /*pid_t pid, p;
    p = fork();
    pid = getpid();
    if(p<0){
        fprintf(stderr, "Fork Failed");
        return 1;
    }
    printf("output of fork id: %d \n", p);
    printf("process id is: %d \n", pid);
    return 0;*/

 /*    Same program, Different code   */

   /* int pid;
    pid = fork();
    if(pid<0){
        printf("\n error ");
        exit(1);
    }

    else if(pid == 0){
        printf("Hello I am Child Process.");
        printf("\n My pid is: %d \n", getpid());
        exit(0);
    }

    else{
        printf("\n Hello I am parent process.");
        printf("\n My pid is: %d \n", getpid());
        exit(1);
    }*/


 /*     before terminating parent waits for child to finish its task  */

    int pid;
    pid = fork();
    if(pid<0){
        printf("\n error ");
        exit(1);
    }   

    else if(pid == 0){
        printf("Hello I am Child Process.");
        printf("\n My pid is: %d \n", getpid());
        exit(0);
    }

    else if(pid>0){
        printf("\n Hello I am parent process.");
        printf("\n My pid is: %d \n", getpid());
        wait(NULL);
        exit(1);
    }
}
