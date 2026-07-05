#include <stdio.h>

#define TAPE_SIZE 500

int main(){
  char *test_program = "++>+++[-<+>]";
  int tape[TAPE_SIZE] = {0};
  int ptr = 0;

  for (int i = 0; test_program[i] != '\0'; i++) {
        char command = test_program[i];
        switch(command
    case ('<'):
      ptr--;
      break;
    case ('>'):
      ptr++;
      break;
    case ('+'):
      tape[ptr]++;
      break;
    case ('-'):
      tape[ptr]--;
      break;
    case ('.'):
      printf("%c", tape[ptr];) 
    };
    
    
  
    
    
  
