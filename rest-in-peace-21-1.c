#include <stdio.h>

int streak(int num);
void substring(char s[7], char sub[7], int p, int l);

int main()
{
    int t;
    scanf("%d\n", &t);
    int num[t];
    for(int i=0; i<t; i++) {
        scanf("%d\n", &num[i]);
        if(streak(num[i])) {
            printf("The streak lives still in our heart!\n");
        }
        else { printf("The streak is broken!\n"); }
    }
    return 0;
}

int streak(int num)
{
    char numc[7];
    sprintf(numc, "%d", num);
    char temp[2];
    if(num%21==0) return 0;
    else {
        for(int i=0; i<strlen(numc); i++) {
            substring(numc, temp, i, 2);
            if(strcmp(temp, "21")==0) {
            return 0;
            break;
            } 
        }
        return 1;
    }
}
void substring(char s[7], char sub[7], int p, int l) {
   int c = 0;
   while (c < l) {
      sub[c] = s[p+c-1];
      c++;
   }
    sub[c] = '\0';
}