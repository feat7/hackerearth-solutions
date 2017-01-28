#include <stdio.h>
 
int main()
{
    int x, start;
    scanf("%d\n", &x);
    char str[25];
    scanf("%s", &str);
    
    if(x<0) {
        start = x*(-1);
    }
    else if(x==0) {
        start=0;
    }
    else {
        start = strlen(str)-x;
    }
    
    for(int i=start; i<strlen(str); i++) {
        printf("%c", str[i]);
        
        if(i==strlen(str)-1) i=-1;
        if(i==start-1) break;
    }
       
    return 0;
}