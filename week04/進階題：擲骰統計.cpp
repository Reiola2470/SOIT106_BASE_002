#include <stdio.h>
char a[999];
int main()
{
	char count[7]={0};
	scanf("%s",&a);
	int i=0;
	while(a[i]!='\0')
	{
		count[a[i]-'0']++;
		i++;
	}
	for(int i=1;i<=6;i++)
	{
		printf("%d:%d\n",i,count[i]);
	}
}

