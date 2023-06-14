# memory-leak-detector
memory leak detector using a shim implemented in C
all of this work is my own

to compile
gcc -o shim.so shim.c
gcc -Wall -o leakcount leakcount.c

to run
LD_PRELOAD=./shim.so ./leakcount <file with memory leak>
