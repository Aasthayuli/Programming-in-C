// File Handling
// open and read a file

#include <stdio.h>
int main()
{
   FILE *fptr;
   fptr = fopen("apple.txt", "r");
   int n;

   fscanf(fptr, "%d", &n);
   printf("%d\n", n);
   fscanf(fptr, "%d", &n);
   printf("%d\n", n);
   fscanf(fptr, "%d", &n);
   printf("%d\n", n);
   fscanf(fptr, "%d", &n);
   printf("%d\n", n);
   fscanf(fptr, "%d", &n);
   printf("%d\n", n);
   fscanf(fptr, "%d", &n);
   printf("%d\n", n);
   fscanf(fptr, "%d", &n);
   printf("%d\n", n);
   fscanf(fptr, "%d", &n);
   printf("%d\n", n);
   fscanf(fptr, "%d", &n);
   printf("%d\n", n);
   fscanf(fptr, "%d", &n);
   printf("%d\n", n);
   fclose(fptr);

   return 0;
}