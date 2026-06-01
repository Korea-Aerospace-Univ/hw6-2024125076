
#include <stdio.h>

int main()
{
    char arr[100];
    char max_char='\0';
    int max_count=0;
    int count=0;
    
    
    for(char *p=arr;p<arr+10;p++){
        scanf("%c",p);
        
    }
    for(char*p=arr;p<arr+10;p++){
        count=0;
        for(char *q=arr;q<arr+10;q++){
            if(*q==*p){
                count++;
            }
        }
        if(count>max_count){
        max_count=count;
        max_char=*p;
        }
    }
    
    printf("%c%d",max_char,max_count);
    return 0;
}
