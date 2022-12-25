#include<stdio.h>
#include <string.h>
int main()
{
	int i = 0, j = 0, k = 0, m = 0;
	char str1[50], str2[5];
	gets_s(str1);
	gets_s(str2);
	while (str1[i] != '\0')
	{
		i++;
		k++;
	}
	while (str2[j] != '\0')
	{
		j++;
		m++;
	}
	for (i = 0; i <= k + m; i++)//注意：在把str2复制过来时连着最后一个'\0'也要复制过来
	{
		str1[i + k] = str2[i];
	}
	puts(str1);
	return 0;
}
