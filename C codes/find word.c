#include <stdio.h>
#include <string.h>

void main() {
int i=0,j=0,check=0,count=0;
int bsize=0,k1=0,cn[10],c=0;
char a[80],b[80];
printf("\nEnter main string:-\n");
gets(a);
printf("\nEnter sub-string:-\n");
gets(b);
bsize=strlen(b);
while (a[i]!='\0') { //outer loop for MS
    if (a[i]== b[j]) {
        i++;
        j++;
        if (j==bsize) { //check for all chars match
            cn[c++]= i - bsize + 1; //pos array
            //with occurrence count in ‘c’
            j=0;
            check=1;//presence flag (SS)
        }
    }
    else {
        i++;
        j=0;
    }
    } //end of while
if (check==1) {
    printf("\nSubstring is present %d time(s) at position(s)\t", c);
    for(i=0;i<c;i++)
    printf("%d\t",cn[i]);
}
else {
if (check==0)
printf("\nGiven sub-string is not present in the main string.");
}
} //end of program

