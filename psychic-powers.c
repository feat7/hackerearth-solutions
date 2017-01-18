#include <stdio.h>

int main()
{
    char str[100];
    scanf("%s", &str);
    int counter = 0, len;
    len = strlen(str);
    
    for(int i=0; i<len; i++) {
        if(counter==5) {
            printf("Sorry, sorry!");
            break;
        }
        if(i==strlen(str)-1) {
            printf("Good luck!");
            break;
        }
        if(str[i] == str[i-1]) counter++;
        else counter = 0;
    }
    return 0;
}
