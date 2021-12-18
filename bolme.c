#include <stdio.h>
#include <stdlib.h>


int main()
{
	int num1, num2, count = 0;

	printf("bölünen ->");
	scanf("%d", &num1);
	printf("bölen ->");
	scanf("%d", &num2);

	if (num1 == 0 && num2 == 0)
	{
		printf("NaN\n");
		system("pause");
		exit(0);
	}


	while (num1 >= num2)
	{
		num1 -= num2;
		count++;
	}

	end:

	printf("sonuc -> %d", count);
	printf("\nkalan -> %d", num1);


	return 0;
}