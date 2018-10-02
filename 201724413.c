 #include <stdio.h>
 int main(void)
 {
 	float water;
 	printf("Enter your water amount : ");
 	scanf("%f",&water);
 	printf("Water is %f quater.\n", water/950.0);
 	float g=100000000000000000000000.0;
 	printf("Number of water molecules in that amount : \n", water*g);
 	return 0;
 }
