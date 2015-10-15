#include <stdio.h>

main()
{
	int x, y;

	printf("1번째 정수 : ");
	scanf("%d", &x);
	printf("2번째 정수 : ");
	scanf("%d", &y);

	printf("%d + %d = %d\n", x, y, x+y);
}
