#include<iostream>

void f2(int n)
{
    int i;

    for(i = -n; i <= n; i++)
    {
        printf("%d, ",i);
    }
}

int main()
{
    f2(50);

    return 0;
}
