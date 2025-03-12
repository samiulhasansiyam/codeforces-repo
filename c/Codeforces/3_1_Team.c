#include<stdio.h>
int main()
{
    int n,sum=0,ans=0;
    int a[1000][1000];
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<3;i++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<3;i++)
        {
        if(a[i][j]==1)
        {
            sum=sum+1;
        }
      
        }
        if(sum==2||sum==3)
        {
            ans=ans+1;
            sum=0;
        }
        else
        {
            sum=0;
        }
        
    }
    printf("%d",ans);
    
    
    return 0;
}