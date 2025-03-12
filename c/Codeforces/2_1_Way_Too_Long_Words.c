  #include<stdio.h>
    #include<string.h>
    int main()
    {
        int n;
        scanf("%d",&n);
        char array[100][101];
       
       for(int i=0;i<n;i++)
       {
          scanf("%s",array[i]);
       }
       int count;

       for(int i=0;i<n;i++)
       {
        count = strlen(array[i]);
       if(count>10)
       {
          int c = count-2;
        printf("%c%d%c\n",array[i][0],c,array[i][count-1]);
         
       }
       else
       {
       printf("%s\n",array[i]);
        }
       }

       return 0;

    }