#include <stdio.h>
#include <string.h>

#define TAPE_SIZE 30000
#define BUFFER_SIZE 100024

int main() {
  // 1. Initialize your state (the tape and the pointer)
  unsigned char tape[TAPE_SIZE] = {0};
  int ptr = 0;

  char input_buffer[BUFFER_SIZE];

  printf("welcome to the Brainf*ck REPL!\n");

  // 2. Start the Loop
  while (1) {
    printf("BF>> ");
    fflush(stdout); // Forces the prompt to print immediately

    // 3. Read user input
    if (fgets(input_buffer, BUFFER_SIZE, stdin) == NULL) {
      break; // Exit if EOF (like pressing Ctrl+D)
    }

    // Check for exit command
    if (strcmp(input_buffer, "exit\n") == 0) {
      break;
    }

    // 4. Eval (Loop through input_buffer here and execute commands!)
    //  my command loop will go here
    for (int i = 0; input_buffer[i] != '\0'; i++) {
      char command = input_buffer[i];
      switch (command) {
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
        printf("%c", tape[ptr]);
        fflush(stdout);
        break;
      case ('['):
        if (tape[ptr] == 0) {
          int bracketc = 1;
          do {
            i++;
            if (input_buffer[i] == ']') {
              bracketc--;
            } else if (input_buffer[i] == '[') {
              bracketc++;
            };
          } while (bracketc != 0);
        }
        break;
      case (']'):
        if (tape[ptr] != 0) {
          int bracketc = 1;
          do {
            i--;
            if (input_buffer[i] == ']') {
              bracketc++;
            } else if (input_buffer[i] == '[') {
              bracketc--;
            };
          } while (bracketc != 0);
        }
        break;
      };
      // Your logic here
    }
  }

  return 0;
}
