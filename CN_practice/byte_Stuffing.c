#include<stdio.h>
#include<string.h>

void main()
{
    char s[70], f[10], e[10], c;
    int i=0, j=0, w, o=1, t,k,r=0;
    printf("Enter the data: ");
    while (1)
    {
        scanf("%c", &c);
        if(c=='\n') break;
        else s[i++]=c;

    }
    printf("Ente the value of escape: ");
    scanf("%s", e);
    printf("Ente the value of flage: ");
    scanf("%s", f);
    //printf("\nescape is %s\nFlag is %s", e,f);
    printf("%s", f);

    while (j<i)
    {
        o=0;
        if((s[j]==f[0] && j==0) || (s[j-1]==' '&&s[j]==f[0]))
        {
            w=j;
            for(t=0; t<strlen(f) && w<i; t++)
            {
                if(s[w] != f[t]) {
                    o=0;
                    break;
                }
                w++;
            }
            if(o!=0)
                printf("%s ", e);
        }r=0;
        if((s[j]==e[0] && j==0) || (s[j-1]=' ' && s[j]==e[0]))
        {
            w=j;
            for(t=0; t<strlen(e) && w<i; t++)
            {
                if(s[w]!=e[t])
                {
                    r=1;
                    break;
                }
                w++;
            }
            if(r!=1)
                printf("%s ", e);
        }
        printf("%c", s[j]);
        j=j+1;
    }
    printf("%s", f);
}