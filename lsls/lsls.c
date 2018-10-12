#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>
#include <stdlib.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
  DIR *dir;
  struct dirent *sd;

  // Open directory
  dir = opendir(".");

  if (dir == NULL)
  {
    printf("Error! Cant open directory. \n");
    exit(1);
  }

  // Repeatly read and print entries

  while ((sd = readdir(dir)) != NULL)
  {
    printf(">> %s\n", sd->d_name);
  }

  // Close directory
  closedir(dir);

  return 0;
}