#include <stdio.h>
#include <stdlib.h>

void print_image(int a[5][5])
{
	int i,j;
	int *ptr;
	
	ptr = &a[0][0];
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++){
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
}

void brighten_image(int a[5][5])
{
	int i,j;
	int *ptr;
	
	ptr = (int*)a[0];
	for (i=0;i<5;i++){
		for(j=0;j<5;j++){
		*ptr += 10;
		ptr++;
	}
}
	
}

int main(void)
{
	int image[5][5] = {
	{10,20,30,40,50},
	{10,20,30,40,50},
	{10,20,30,40,50},
	{10,20,30,40,50},
	{10,20,30,40,50},			
	};

	print_image(image);
	brighten_image(image);
	print_image(image);
	return	0;
}


