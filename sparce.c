#include<stdio.h>
void main()
{
 int a[100][100],r,c,i,j,count=0,k,s[100][3],tran[100][3],m=1;
 
 printf("Enter row :");
 scanf("%d",&r);
 
 printf("Enter columns :");
 scanf("%d",&c);
 
 printf("Enter elements :");
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 scanf("%d",&a[i][j]);
 }
 printf("\n Matrix \n");
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 printf("%d ",a[i][j]);
 printf("\n");
 }
 printf("\n");
 s[0][0] = r;
 s[0][1] = c;
 k =1;
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 {
 if(a[i][j]!=0)
 {
 s[k][0] = i;
 s[k][1] = j;
 s[k][2] = a[i][j];
 k++;
 count++;
 }
 }
 }
 s[0][2] =count;
 
 for(i=0;i<k;i++)
 {
 printf("%d ",s[i][0]);
 printf("%d ",s[i][1]);
 printf("%d ",s[i][2]);
 printf("\n");
 }
 printf("\nTranspose \n");
 tran[0][0] = s[0][1];
 tran[0][1] = s[0][0];
 tran[0][2] = s[0][2];
 
 for(i=0;i<s[0][1];i++)
 {
 for(j=1;j<=s[0][2];j++)
 {
 if(s[j][1] == i)
 {
 tran[m][0] = s[j][0];
 tran[m][1] = s[j][1];
 tran[m][2] = s[j][2];
 m++;
 }
 }
 }
 
 for(i=0;i<m;i++)
 {
 printf("%d ",tran[i][0]);
 printf("%d ",tran[i][1]);
 printf("%d ",tran[i][2]);
 printf("\n");
 }
 
}
