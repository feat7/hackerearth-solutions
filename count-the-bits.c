#include <stdio.h>

int main()
{
    int t;
    scanf("%d\n", &t);
    int n;
    
    for(int i=0; i < t; i++) {
    	
    	scanf("%d\n", &n);
    	int count = 0;
    
    	while(n) {
    		n = n & (n-1);
    		count++;
    	}
    
    printf("%d\n", count);
    }
    
    
    return 0;
}
