

#include <stdio.h>

int main()
{
    char arr[10]={};
    char *p=arr;
    char max_char=*p;
    char current_char=*(p+1);
    int max_count=0;
    int count=0;
    
    for(int i=0;i<10;i++){
        scanf("%c",(p+i));
    }
    for(int i=0;i<10;i++){
        current_char=*(p+1);
        
        
    }
    for(int j=0;j<10;j++){
        if(*(p+j)==current_char){
            count ++;
        }
    }
    if(count>max_count){
        max_count=count;
        max_char=current_char;
        
    }
    printf("%c %d", max_char, max_count);
    
}
