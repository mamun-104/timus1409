#include<iostream>
#include<Stdio.h>
using namespace std;
int main()
{
    int n,m,total;
    scanf("%d%d",&n,&m);
    total = n+m-1;
    printf("%d %d",total-n,total-m);

    return 0;
}



