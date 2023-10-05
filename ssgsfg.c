#include<iostream>

int main()
{
       float i=0,s,n=1,b,c=10;
      
      printf("%.2f ",n);
      while(i<=c)
      {
       b=i+n;
       printf("%.2f, ",b);
       i=n;
       n=b;
       i++; 
      }
          
}