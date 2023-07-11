// #include <stdio.h>

// void main () {
//     FILE* filePtr;
//     char buffer[101];

//     filePtr = fopen("gothAM.txt", "r");

//     if (NULL == filePtr) {
//         printf("file can't be opened \n");
//     }

    

//     fclose(filePtr);
// }

#include <stdio.h>
#include <stdlib.h>

int main()
{
   char num;
   FILE *fptr, *fptr2;

   if ((fptr = fopen("gotham.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   if ((fptr2 = fopen("taksh domar.txt","w")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   do {
    num = fgetc(fptr);
    printf("read char - %c\n", num);

    fputc(num, fptr2);

   } while (num != EOF);

   fclose(fptr);
   return 0;
}