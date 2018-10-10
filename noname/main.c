/*
 * main.c
 *
 *  Created on: 3 окт. 2018 г.
 *      Author: student
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int main(void) {
	int var1;
	int var2;
	printf("Enter 1num:\n");
	scanf("%i", &var1);
	var2 = 1;
	do {
		if (var1 & var2)
			printf("1");
		else
			printf("0");
		var2 = var2 << 1;
	} while (var2 != 0);
	return EXIT_SUCCESS;
}
