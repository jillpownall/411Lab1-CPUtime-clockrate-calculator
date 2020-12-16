#include <stdio.h>

int main( int argc, char** argv ) {

	// Jill Pownall
	// Comp 411 2020
	// 8/20/2020

	int num;
	printf("Please select the computation you want to make: (1 = clock rate, 2 = CPU time): ");
	scanf("%d",&num);
	if(num==1) {
		float seconds;
		printf("You selected clock rate, please enter the duration of one clock cycle in seconds: ");
		scanf("%f",&seconds);
		float cr=1/seconds;
		printf("The clock rate corresponding to this duration is: %.1f Hertz\n",cr);
	}
	if(num==2) {
		float seconds;
		printf("You selected CPU time, please enter the duration of one clock cycle in seconds: ");
		scanf("%f",&seconds);
		float inst;
		printf("You selected CPU time, please enter the number of instructions in the program: ");
		scanf("%f",&inst);
		float cc;
		printf("You selected CPU time, please enter the number of clock cycles per instruction: ");
		scanf("%f",&cc);
		float cpu=seconds*inst*cc;
		printf("The CPU execution time corresponding to these parameters is: %.1f seconds\n",cpu);
	}

	return 0;

}