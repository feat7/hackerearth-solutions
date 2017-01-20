#include <stdio.h>

int cbase(int num, int base, int sum);
int getsimple(int num, int denominator);

int main()
{

    int t, total, num, denominator;
    scanf("%d\n", &t);
    
    for(int i=0; i<t; i++) {
        scanf("%d", &num);
        total = 0;
        for(int j=2; j<num; j++) {
            total += cbase(num, j, 0);
        }
        denominator = getsimple(total, num-2);
        printf("%d\n", denominator);
    }
  
    return 0;
}

int cbase(int num, int base, int sum)
{
    if(num<base) {
        sum += num;
        return sum;
    }
    else {
        sum += num%base;
        cbase(num/base, base, sum); 
    }
}

int getsimple(int num, int denominator)
{
    int sd = denominator;
    if(num%denominator==0) return 1;
    else {
        for(int i=2; i<denominator; i++) {
            if(num%i==0 && denominator%i==0) {
                if(sd > denominator/i) sd = denominator/i;
            }
        }
        return sd;
    }
}