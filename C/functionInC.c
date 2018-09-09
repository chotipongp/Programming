#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    int A[4] = {a,b,c,d};
    int i=1;
    int max = A[0];
    
    for(i=1;i<4;i++)
        if(max < A[i])
            max = A[i];
    
    return max;   
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}