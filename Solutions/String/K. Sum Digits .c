#include <stdio.h>
#include <string.h>
int main()
{
    int x;
    scanf("%d",&x);
    char s[1000001];
    scanf("%s",s);
    int n = strlen(s);
    int sum=0,a;
        for (int i=0;i<n;i++){
        s[i]-='0';
        sum=sum+s[i];
    }
    printf("%d",sum);
    return 0;
}


// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K
