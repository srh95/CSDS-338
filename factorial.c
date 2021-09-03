#include <stdio.h>

int main() {

int rows;

printf("Integer          ");
printf("Square           ");
printf("Factorial");
printf("\n");

for (rows = 1; rows <=10; rows++){
	printf("%d               ",rows);

	int square = rows*rows;
	printf("%d               ",square);
	
	int fact = 1;
	for (int i = 1; i <=rows; i++){
		fact = fact*i;
        }

	printf("%d ", fact);
	printf("\n--------------------------------------------");
	printf("\n");
}

}
