#include <stdio.h>
void main(){
FILE *fp;
char c;
fp = fopen("gay","w");
printf("Enter contents of the file : ");
while((c=(char)getchar())!=EOF)
    putc((char)c,fp);
fclose(fp);
}
