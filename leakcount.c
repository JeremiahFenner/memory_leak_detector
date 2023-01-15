#include "file.h"
extern char **environ;

int main(int argc, char **argv){

  pid_t child_pid;
  char* file[] = {argv[1], NULL};
  char* arrg[] = {"LD_PRELOAD=./shim.so", NULL};



  child_pid = fork();
  if(child_pid == 0)
  {

    execve(argv[1], file, arrg);

  }else{
    wait(NULL);
  }


  return 0;
}
