#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	double usage,bill=0.0;
	double reamining; 
	printf("Enter water usage\n");
	scanf("%lf",&usage);
	if(usage<=1000)
	{
		bill=155;
	}
	else if(usage>1000 && usage<=2000)
	{
		bill=155+(0.175*(usage-1000));
	}
	else if(usage>2000 && usage<=3000)
	{
		bill=155+(0.175*1000)+(0.200*(usage-2000));
	}
	else
	{
		bill=700;
	}
	printf("%lf",bill);
	return 0;
}
