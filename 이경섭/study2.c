#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;

	FILE* fp = fopen("D:\\study\\study\\in.txt", "r");
	fscanf_s(fp, "%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	printf("%d %d %d %d %d %d", a, b, c, d, e, f);

	fclose(fp);

	return 0;
}
