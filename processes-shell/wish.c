#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>

char * path[10];

int string_break(char * line, char * tokens[])
{
  int i = 0;
  const char delimiter = ' ';
  // Remove the trailing '\n', if any
  strtok(line, "\n");
  while(1)
    {
      // Break the user input into tokens using a fixed delimiter
      tokens[i] = strsep(&line, &delimiter);
      if(tokens[i] == NULL)
        break;
      i++;
    }
  return i;
}

