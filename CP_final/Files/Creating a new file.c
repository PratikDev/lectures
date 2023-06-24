#include <stdio.h>

int main() {
   FILE *fp;
   char filename[20] = "example.txt";
   fp = fopen(filename, "w");
   
   if (fp == NULL) {
      printf("Error creating file!\n");
      return -1;
   }
   
   printf("File created successfully.\n");
   fclose(fp);
   
   return 0;
}