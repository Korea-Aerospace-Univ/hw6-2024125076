

#include <stdio.h>

int main()
{
    int N=0;
    scanf("%d",&N);
    int arr1[100]={};
    int arr2[100]={};
    int *p=nullptr;
    int *q=nullptr;
    
    
    for(p=arr1;p<arr1+N;p++){
        scanf("%d",p);
    }
    for(q=arr2;q<arr2+N;q++){
        scanf("%d",q);
        
    }
    p=arr1;
    q=arr2+N-1;
    for(int i=0;i<N;i++){
        printf(" %d",*p+*q);
        p++;
        q--;
    }
    return 0;
}
