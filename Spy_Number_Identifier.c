/** Spy Number  identifier **/

#include<stdlib.h>

main()
{
	int n, no, k, s=0, t=1;
	system("cls");
	printf("Enter any number:");
	scanf("%d", &n);
	no=n;
	system("cls");
	while(no!=0)
	{
		k=no%10;
		s=s+k;
		t=t*k;
		no=no/10;
	}
	if(s==t)
	{
		printf("%d is a Spy Number.", n);
	}
	else
	{
		printf("%d is not a Spy Number.", n);
	}
}
