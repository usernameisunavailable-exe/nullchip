#include <stdio.h>

int main(int argc, char *argv[]) {
  for (int i = 1; argc > i; i++) {
    printf("data %i: %s \n", i, argv[i]);
  };
};
