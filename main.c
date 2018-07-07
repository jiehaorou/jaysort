#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>
#include "jaysort.c"


int main(int argc, char* argv[]) {
	int bits = (argc>1 ? atoi(argv[1]) : 22);  //items quantity
	int decis[bits];
	for(int q=bits; q>0; --q) {
		decis[bits-q] = q+(bits-q)*(q%2)+(q/3); //generate the item,can change to another way
	}

	printf("Origin:\n");
	for(int i=0; i<bits; i++) {
		printf("%d ", decis[i]);
	}
	printf("\n\n");

	struct timeval t1,t2; //only for calculate running time
	gettimeofday(&t1,NULL);

	jaysort(decis, bits); //algorithm here

	gettimeofday(&t2,NULL);
	double timeuse = t2.tv_sec - t1.tv_sec + (t2.tv_usec - t1.tv_usec)/1000000.0;

	printf("Sorted:\n");
	for(int i=0; i<bits; i++) {
		printf("%d ", decis[i]);
	}

	printf("Used Time:%f\n",timeuse);

	return 0;
}
