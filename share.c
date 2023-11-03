#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	double buying,selling,BS,BB; 
	int shares;
	double ST,STT; /*Service tax & security transaction tax*/
	double turnover;
	double stampduty;
	double regulatory;
	double total,profit;
	
	printf("Enter buying price\n");
	scanf("%lf",&buying);
    printf("Enter selling price\n");
    scanf("%lf",&selling);
    printf("Enter shares\n");
    scanf("%d",&shares);
    
    BS=selling*(0.03/100)*shares;
    BB=buying*(0.03/100)*shares;
    
    ST=(BS+BB)*(10.36/100);
     
    STT=selling*(0.025/100);
    
    turnover=(selling-buying)*shares;
    
    stampduty=turnover*(0.002/100);
    
    regulatory=turnover*(0.004/100);
    
    total=ST+STT+stampduty+regulatory;
    profit=turnover-total;   /* profit=selling-buying*shares*/
    printf("%lf \n",profit);
	return 0;
}
