#include <stdio.h>
int main()
{
 int a,b,c;
 scanf("%d",&a);
 scanf("\t%d",&b);
 scanf("\t%d",&c);
 if(a>b && a>c)
 {
   printf("%d",a);
 }
 if(b>a && b>c)
 {
   printf("%d",b);
 }
 if(c>b && c>a)
 {
   printf("%d",c);
 }
  return 0;
}
