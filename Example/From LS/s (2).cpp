#include<cstdio>
#include<cstring>
#define N 601
#define M 100001
using namespace std;
double g[N][N];
bool bz[N][N];
int n;
double abs(double x)
{
	if (x<0) return -x;
	return x;
}
void swap(double &x,double &y)
{
	double t=x;x=y;y=t;
}
int main()
{
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n+1;j++) scanf("%lf",&g[i][j]);
	int fu=1;
	for (int i=1;i<=n;i++)
	{
		int maxs=i;
		for (int j=i;j<=n;j++)
		{
			if (abs(g[j][i])>abs(g[maxs][i]))
				maxs=j;
		}
		for (int j=1;j<=n+1;j++)
		{
			swap(g[maxs][j],g[i][j]);
		}
//		if (maxs!=i) fu=-fu;
		for (int j=1;j<=n+1;j++)
		{
			if (j!=i)
			{
				double temp=g[j][i]*1.0/g[i][i];
				for (int k=i;k<=n+1;k++)
					g[j][k]=g[j][k]-g[i][k]*temp;
			}
		}
	}
	for (int i=1;i<=n;i++)
	{
		printf("%0.2lf\n",g[i][n+1]*1.0/g[i][i]);
	}
}
