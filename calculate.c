#include <stdio.h>
#include <string.h>

void calculateItemPrice(int* b2, int* a2, char a[][20], int length){
	//calculations before 2PM
	b2[0] *= 15;
	b2[1] *= 6;
	b2[2] *= 10;
	b2[3] *= 6;
	
	int width = strlen(a[3]);
	printf("\n\nBefore 2pm\n\n");
	for(int i=0; i < 4; i++){
		printf("\n%s%*d", a[i], (int)(width - strlen(a[i]) + 10), b2[i]);
		printf("\n***********************************");	
	}
	// calculations after 2PM
	
	
	a2[0] *= 8;
	a2[1] *= 3;
	a2[2] *= 5;
	a2[3] *= 4;
	
	printf("\n\nAfter 2pm\n\n");
	for(int i=0; i < 4; i++){
		printf("\n%s%*d", a[i],(int)(width - strlen(a[i]) + 10), a2[i]);
		printf("\n***********************************");  
	}
	
	int grandTotal = 0;
	for(int i = 0; i < 4; i++){
		grandTotal += b2[i];	
		grandTotal += a2[i];
	}
	printf("\n\nGrand Total\t\t %d \n", grandTotal);
	
	
	printf("\n\nRoom Charge Calculation");

	printf("\n\nRoom charge Before 2pm");

	for(int i = 1; i <= length; i++){ 	
		printf("\n%d.) How many %s did you sell? ", i, a[i - 1]);
		scanf("%d", &b2[i-1]);
	}
	
	printf("\n\nRoom charge After 2pm");

	for(int i = 1; i <= length; i++){ 	
		printf("\n%d.) How many %s did you sell? ", i, a[i - 1]);
		scanf("%d", &a2[i-1]);
	}

	b2[0] *= 15;
	b2[1] *= 6;
	b2[2] *= 10;
	b2[3] *= 6;

	a2[0] *= 8;
	a2[1] *= 3;
	a2[2] *= 5;
	a2[3] *= 4;

	int accRoomCharge = 0;
	for(int i = 0; i < 4; i++){
		accRoomCharge += b2[i];	
		accRoomCharge += a2[i];
	}
	
	accRoomCharge = (grandTotal - accRoomCharge) + 150;

	printf("\n\nCash in Hand\t\t %d \n", accRoomCharge);

}
