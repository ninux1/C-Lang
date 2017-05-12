
/* 
If we get some number for the Parent Process ID then the child process is not completely isolated and shares some things from its parent.
If the Parent Process ID is 0 means that there is no parent process for that process and is completely a 
isolated process
*/

#define _GNU_SOURCE
#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

static char child_stack[1048576];

static int child_fn() {
  printf("PID: %ld\n", (long)getpid());
  //printf("PPID: %ld\n", (long)getppid()); // Get Parent process identifier
  return 0;
}

int main() {
  pid_t child_pid = clone(child_fn, child_stack+1048576, CLONE_NEWPID | SIGCHLD, NULL);
  // Removing the CLONE_NEWPID below
  //pid_t child_pid = clone(child_fn, child_stack+1048576, SIGCHLD, NULL);
  printf("clone() = %ld\n", (long)child_pid);

  waitpid(child_pid, NULL, 0);
  return 0;
}
