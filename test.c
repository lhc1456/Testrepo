#include <stdio.h>

main()
{
	int i, j;

	for(i=0; i<15; i++)
	{
		for(j=0; j<15; j++)
		{
			if(i==j)
			{
				continue;
			}
			printf("%d %d\n", i, j);
		}
	}
}
