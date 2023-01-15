#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ptrace.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <sys/reg.h>

extern char **enviorn;

int main(int argc, char* argv[]){
  /*

  char *arg2[] = {argv[1], NULL};

pid_t child_pid;
child_pid = fork();

if(child_pid == 0){

  ptrace(PTRACE_TRACEME, 0, 0, 0);
  execve(argv[1], arg2, NULL);

}else{

  int syscallnum;
  int status;
  waitpid(child_pid, &status, 0);
  ptrace(PTRACE_SETOPTIONS, child_pid, 0, PTRACE_O_TRACESYSGOOD);
  ptrace(PTRACE_CONT, child_pid, NULL, NULL);//added

  do{
    ptrace(PTRACE_SYSCALL, child_pid, 0, 0);
    waitpid(child_pid, 0, 0);
    if(WIFEXITED(status))
    {
      exit(1);
    }
  } while (!(WIFSTOPPED(status) && WSTOPSIG(status) & 0x80));

  syscallnum = ptrace(PTRACE_PEEKUSER, child_pid, sizeof(long)* ORIG_RAX, NULL);
  fprintf(stderr, "System call number %d\n", syscallnum);
  ptrace(PTRACE_CONT, child_pid, NULL, NULL);
  //waitpid(child_pid, NULL, 0);
  //ptrace(PTRACE_SETOPTIONS, child_pid, 0, PTRACE_O_EXITKILL);

  ptrace(PTRACE_SYSCALL, child_pid, 0, 0);
  waitpid(child_pid, 0, 0);
  ptrace(PTRACE_PEEKUSER, child_pid, 0, 0);

  int input = open(argv[2], O_WRONLY | O_APPEND);

  //struct user_regs_struct regs;
  char regs[10];
  ptrace(PTRACE_GETREGS, child_pid, 0, &regs);
  //long syscall = regs.orig_rax;

  write(input, &regs, 4);


  //fprintf(stderr, "%ld\n(%ld\n, %ld\n, %ld\n, %ld\n, %ld\n, %ld\n)", syscall, (long)regs.nr, (long)regs.rsi, (long)regs.rdx, (long)regs.r10, (long)regs.r8, (long)regs.r9);


//}
*/




}
