#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 100
int array[ARRAY_SIZE] = { 0 };
int i, j;

int arrayInit() {
	srand(time(NULL));

	for(i = 0; i < ARRAY_SIZE; i++) {
	array[i] = 0 + rand()%100;
	}
}

int arraySort() {
	for(i = 0; i < ARRAY_SIZE - 1; i++) {
		for(j = 0; j < ARRAY_SIZE - i - 1; j++) {
			if (array[j] > array[j+1]) {
				int tmp = array[j+1];
				array[j+1] = array[j];
				array[j] = tmp;
			}
		}
	}
}

int arrayPrint() {

	for(i = 0; i < ARRAY_SIZE; i++) {
		printf("%d ", array[i]);
	}
	printf("\n\n");

}

int main() {
	
	arrayInit();
	arrayPrint();
	arraySort();
	arrayPrint();
}
