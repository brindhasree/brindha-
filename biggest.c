#include<stdio.h>
int main()
{
 int a[5],n,i,big;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 big=a[0];
 for(i=1;i<n;i++)
 {
  if(big<a[i])
  big=a[i];
 }
  printf("\n %d",big);
return 0;
getch();
}
