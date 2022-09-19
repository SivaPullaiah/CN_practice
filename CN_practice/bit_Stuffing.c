#include<stdio.h>
#include<string.h>

void main()
{
    char b[30], c=0;
    int i;
    printf("Enter the bit Stream: ");
    scanf("%s", b);
    printf("After bit Stuffing...");
    for(i=0; i<strlen(b); i++)
    {
        printf("%c", b[i]);
        if(b[i]=='1')
            c+=1;
        else
            c=0;
        if(c==5)
        printf("0");
    }
}