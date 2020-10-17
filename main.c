// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,n,sum=0,count,a[50];
    scanf("%d",&n);
    int fre[n];
    int visited=-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                fre[j]=visited;
            }
        }
        if(fre[i]!=visited)
        {
            fre[i]=count;
        }
    }
    
     for(i=0;i<n;i++)
        {
            if(fre[i]!=visited)
            {
                  sum=sum+(fre[i]/2);  
                
            }
        }
        printf("%d",sum);
    
    return 0;
}
