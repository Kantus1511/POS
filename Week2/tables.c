#include <stdio.h>
#include <math.h>

int main(void)
{
	printf("Table de multiplication\n\n");
	for (int i=2; i<11; ++i) {
    printf("Table %d\n", i);
    for (int j=1; j<11; ++j){
      printf("%d * %d = %d\n", j, i, i*j);    
    }
		printf("\n");
	}

  return 0;
}
