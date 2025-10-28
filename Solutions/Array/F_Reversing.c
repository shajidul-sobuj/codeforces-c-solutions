#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0,j=n-1;i<j;i++,j--){
        int temp=a[j];
        a[j]=a[i];
        a[i]=temp;
    }
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    
    return 0;
}
