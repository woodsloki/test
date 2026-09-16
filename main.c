#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define MAX_COMMAND_LENGTH 512
void handle_command(char* str);

int main(int argc, char *arga[]) {
  printf("\033c"); fflush(stdout);
  char command[MAX_COMMAND_LENGTH];
  while (1) {
    printf(">");
    if (fgets(command, MAX_COMMAND_LENGTH, stdin) == NULL) {}

    handle_command(command);
  }
  
  return 0;
}

char** parce_command(char* command) {
  
}

void handle_command(char* str) {
  printf("%s\n", str);
  return;
}