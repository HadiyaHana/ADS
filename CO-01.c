#include <stdio.h>
void main()
{
int i,j,k,n1,n2,n3;
int a[100],b[100],c[200];
printf("Enter the siza of frst array\n");
scanf("%d",&n1);
printf("Enter the array elemnts\n");
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the size of second array\n");
scanf("%d",&n2);
printf("Enter the elements of second  array\n");
for(i=0;i<n2;i++)
{
scanf("%d",&b[i]);
}
n3=n1+n2;
i=j=k=0;

while (i<n1 && j<n2)
{
if (a[i]<b[j])
{
c[k++]=a[i++];
}else
{
c[k++]=b[j++];
}
}
while (i<n1)
c[k++]=a[i++];
while (j<n2)
c[k++]=b[j++];
printf("Merged array\n");
for (i=0;i<n3;i++)
printf ("%d",c[i]);
printf("\n");
}
