#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int grades[n];
    for(int i=0;i<n;i++)
    {
    scanf("%d",&grades[i]);        
    }
    int mod;
    for(int i=0;i<n;i++)
    {
        mod=grades[i]/5;
        if(grades[i]>=38 && 5*(mod+1)-grades[i]<3)
        {
            grades[i]=5*(mod+1);
        }
        else {
        grades[i]=grades[i];
        }
    }
    for(int i=0;i<n;i++)
    {
    printf("%d \n",grades[i]);        
    }
    
}
