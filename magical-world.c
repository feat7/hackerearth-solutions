#include <stdio.h>

int findPrime(int num, int counter);
int isPrime(int num);

int main()
{
    int t;
    int len, num;
        char str[500];
    scanf("%d\n", &t);
    
    for(int i=0; i < t; i++) {
        
        scanf("%d\n%s", &len, &str);
        
        for(int j=0; j < len; j++) {
            num = str[j];
            if(num < 65) num = 65;
            printf("%c", findPrime(num, 0));
        }
        printf("\n");    }
    
    return 0;
}

int findPrime(int num, int counter)
{
    if(isPrime(num)) return num;
    else {
        counter++;
        
        if(isPrime(num-counter) && (num-counter) > 64 ) {
            return num-counter; 
        }
        else if(isPrime(num+counter) && (num+counter) < 123) return num+counter;
        
        else {
            findPrime(num, counter);
        }
        
        
       
    }
}

int isPrime(int num)
{
    if(num == 1 || num == 2) return 1;
    if(num%2 == 0) return 0;
    
    else {
        for(int i=3; i <= num/2; i++) {
        if(num%i == 0) {
            return 0;
            break;
            }
        }
    }
    
    
    return 1;
}