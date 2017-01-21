#include <stdio.h>

int maxStreak(char str[]);

int main()
{
    char str[365][1440];
    int codingStreak=0, N, count=0, lastCount=0;
    scanf("%d\n", &N);
    
    for(int i=0; i<N; i++) {
        scanf("%s\n", &str[i]);
        if(codingStreak<maxStreak(str[i]))
        codingStreak = maxStreak(str[i]);
        
        for(int j=0; j<strlen(str[i]); j++) {
            if(str[i][j]=='C') count++;
            else {
                if(lastCount<count) lastCount=count;
                count = 0;
            }
            if(count>lastCount) lastCount=count;
        } 
    }
    
    printf("%d %d", codingStreak, lastCount);
    return 0;
}

int maxStreak(char str[])
{
    int len = strlen(str), count=0, lastCount=0;
    for(int i=0; i<len; i++) {
        if(lastCount<count) lastCount=count;
        if(str[i]=='C') count++;
        else {
            if(lastCount<count)
            lastCount = count;
            count = 0;
        }
        if(count>lastCount) lastCount=count;
    }
    return lastCount;
}
