#include <stdio.h>
#include <stdlib.h>

#include "disemvowel.h"

int main(int argc, char *argv[]) {
  char *line;
  size_t size;
  
  size = 100;

  while (1) {
    line = (char*) malloc (size + 1);
    getline(&line, &size, stdin);
    char* result = disemvowel(line);
    printf("%s\n", result);
    free(result);
    free(line);
  }
}
