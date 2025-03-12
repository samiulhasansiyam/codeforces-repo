#include<stdio.h>
#include<string.h>
int main()
{
    char array[100];
    
    scanf("%s",array);
    printf("%s",array);
    int i=strlen(array);
    printf("\n");
    printf("%c",array[0]);
     printf("%d",i);
    int j=i-1;
    printf("%c",array[j]);
    return 0;
}