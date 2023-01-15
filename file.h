#ifndef FILE_H
#define FILE_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dlfcn.h>
#include <sys/types.h>
#include <sys/wait.h>

#define n 250




struct body
{
  int size;
  void* ptr;

};

struct body frees[250];



#endif
