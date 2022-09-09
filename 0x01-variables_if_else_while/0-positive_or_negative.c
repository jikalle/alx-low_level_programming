#include <stdlib.h>
#include <time.h>
/* more headers goes here*/

/* betty style doc for function main goes there*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here*/
	scanf("%d",&n); /*get input from user for check*/
	if(n > 0){
	    printf("%d", n);
	printf("is a positive number"
	}
	else if(n < 0){
	printf("%d", n);
	printf("is a negative number");
	}
	else{
	printf("You entered zero");
	}
	getch();

	return (0);
}
