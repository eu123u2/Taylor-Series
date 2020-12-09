/*Ezigbo Ugochukwu 11/5/2020 This proram calculates the summation of the taylor series. Then compares it with the log calculation.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	/*Declare variables*/
	float x, sum, taylor;
	int n, counter;
	
	/*Get input value for x*/
	printf("Enter x:");
	scanf("%f", &x);
	
	/*Error check for x*/
	while(fabs(x)>=1)
	{          
		printf("Invalid input. Enter a value that has an absolute value less than one:");
		scanf("%f", &x);     
	}

	/*Get input value for n*/
	printf("Enter the number of terms:");
	scanf("%d", &n);
	
	/*Error check for n*/
	while(n<1)
	{          
	printf("Invalid input. Enter a positive integer:");
	scanf("%d", &n);     
	}

	/*Calculate*/
	counter = 2; 
	sum = x;
	while(counter<=n)
	{ 
		sum = sum + (pow(x,counter)/counter);
		counter++;
	}
	taylor = -log(1-x);

	/*Display*/
	printf("The running sum is %f compared to the taylor series of %f. /n", sum, taylor);
	system("pause");
	return 0;
}

/*Enter x:0.5
Enter the number of terms:2
The running sum is 0.625000 compared to the taylor series of 0.693147.
Enter x:-0.5
Enter the number of terms:2
The running sum is -0.375000 compared to the taylor series of -0.405465.
Enter x:1
Invalid input. Enter a value that has an absolute value less than one:0.5
Enter the number of terms:0
Invalid input. Enter a positive integer:0
Invalid input. Enter a positive integer:2
The running sum is 0.625000 compared to the taylor series of 0.693147.*/
