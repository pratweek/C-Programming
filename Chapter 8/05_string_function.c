#include<stdio.h>
#include<string.h>

int main (){
    char st[] = "harry";
    printf("%d", strlen(st));
   char source[] = "harry";
   char target[30];
   strcpy (target,st); // target now contains "harry"
   printf("%s %s ", st, target);

   char a1[56] = "Prateek";
   char a2[56] = "Singh";
   strcat(a1,a2);  // No space between two string
   printf("%s %s", a1,a2);

   int b = strcmp("far", "joke");  // postive and negative value assigned according to ascii value
   int c = strcmp("joke","far");
   printf("%d %d", b,c);
    return 0;
}