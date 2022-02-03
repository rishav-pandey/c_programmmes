#include <stdio.h>

int main()
{

	int withdrawn;
	float balance;
	printf("hello\n ");
	scanf("%f", &balance);
	scanf("%d", &withdrawn);
	float tb = withdrawn + 0.5;

	if ((balance >= tb) && (withdrawn % 5 == 0))
	{
		balance = balance - withdrawn - 0.5;
		printf("%.2f", balance);
	}
	else
		printf("%.2f", balance);

	return 0;
}