#include <stdio.h>
#include <string.h>

int main() {
   FILE *file;
   char filename[100], ch;

   printf("Enter the filename to create or open: ");
   scanf("%s", filename);

   file = fopen(filename, "w+");

   if (file == NULL) {
      printf("Error opening file.\n");
      exit(1);
   }

   printf("Enter the text to add to the file: ");
   while ((ch = getchar()) != EOF) {
      fputc(ch, file);
   }

   fclose(file);

   return 0;
}
