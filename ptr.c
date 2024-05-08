#include <stdio.h>

int main(char argv[],char argc[])
{
   FILE *p1,*p2;
   char ch;
   int character=0,words=0,line=0;

   p1= fopen(argc[1],"r");
   if(p1==NULL)
   {
       printf("file is not opened");
   }
    p2= fopen("arun","w");
    if(p2==NULL)
    {
        printf("file is not opened");
    }
    while (ch= fgetc(ptr1)!=EOF){

        fputc(ch,ptr2);
        charcter++;
        if(ch=='\n'||ch=='\0'||ch=='\t'){
            line++;
        }
        if(ch=='\n'||ch=='\0'||ch=='\t'||ch==' ') {
            words++;
        }
        if (character<0){
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
