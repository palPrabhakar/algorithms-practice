#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,index,i,temp;
    scanf("%d",&n);
     int a[n];
    for(i=0;i<100;i++)
        a[i]=0;
    
    for(i=0;i<n;i++)
        {
        scanf("%d",&index);
        a[index]++;
    }
    
    for(i=0;i<100;i++){
        temp=a[i];
        for(int j=0;j<temp;j++)
            printf("%d ",i);
    }
    return 0;
}
