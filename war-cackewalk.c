#include <stdio.h>

int main()
{
    int t, ns, maxb, maxa, maxbi, maxai;
    scanf("%d", &t);
    
    for(int i=0; i<t; i++) {
        maxb = maxa = 0;
        scanf("%d", &ns);
        for(int j=0; j<ns; j++) {
            scanf("%d ", &maxbi);
            if(maxb<maxbi) maxb = maxbi;
        }
        for(int k=0; k<ns; k++) {
            scanf("%d ", &maxai);
            if(maxa<maxai) maxa = maxai;
        }
        
        if(maxb > maxa) printf("Bob\n");
        else if(maxb < maxa) printf("Alice\n");
        else printf("Tie\n");
        
    }
    return 0;
}