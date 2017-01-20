#include <stdio.h>

int main()
{
    char str[20];
    scanf("%s ", &str);
    int k;
    scanf("%d", &k);
    
    for(int i=0; i<k; i++) {
        if(str[i] == '9') {
           k++; 
        } 
        else str[i] = '9';
    }
    printf("%s", str);
    return 0;
}