#include <stdio.h>
#include<conio.h>

int main(char argv[],char argc[])
{
   FILE *ptr,*ptr2;
   char ch;
   int letter=0,words=0,line=0;

   ptr1= fopen(argc[1],"r");
   if(ptr1==NULL)
   {
       printf("file not opened");
   }
    ptr2= fopen("arun","w");
    if(ptr2==NULL)
    {
        printf("file not opened");
    }
    while (ch= fgetc(ptr1)!=EOF){

        fputc(ch,ptr2);
        letter++;
        if(ch=='\n'||ch=='\0'||ch=='\t'){
            line++;
        }
        if(ch=='\n'||ch=='\0'||ch=='\t'||ch==' ') {
            words++;
        }
        if (letter<0){
            words++;
            line++;
        }

        fprintf(ptr2,"NO OF WORDS");
        fprintf(ptr2,"%d",words);
       fprintf(ptr2,"NO OF line");
        fprintf(ptr2,"%d",line);
       fprintf(ptr2,"NO OF letter");
        fprintf(ptr2,"%d",letter);

        printf("file is copyed succfully");
        fclose(ptr1);
        fclose(ptr2);
        return 0;
    }

}
