#define _GNU_SOURCE
#include "file.h"

int count = 0;
int total = 0;
int sum = 0;

void free(void *ptr){
  int i = 0;
  while(i != 250){
      if(ptr == frees[i].ptr){
        frees[i].size = 0;
      }
      i++;
  }

  int a = 0;
  while(a != 250){
    if(frees[a].size != 0){
      fprintf(stderr, "LEAK  %d\n", frees[a].size);
      total++;
      sum = frees[a].size + sum;
    }
    a++;
  }

  fprintf(stderr, "TOTAL %d ", total);
  fprintf(stderr, "%d", sum);
}

void *malloc(size_t size){

  void *(*original_malloc) (size_t size);
  original_malloc = dlsym(RTLD_NEXT, "malloc");
 void *ptr = original_malloc(size);

 frees[count].size = size;
 frees[count].ptr = ptr;
 count++;

 return ptr;



}
