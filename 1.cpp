#include <stdio.h>
int main()
{
  int dp[100]={0};
  int a[100]={0};
  int num,ans;
  int i,j,k;
  scanf("%d",&num);
  ans=0;
  for (i=1;i<=num;i++)
  {
    scanf("%d",&a[i]);
    dp[i]=a[i]+dp[i-1];
    if (dp[i]<0) dp[i]=0;
    if (ans<dp[i]) ans=dp[i];
  }
  printf("%d\n",ans);
}
