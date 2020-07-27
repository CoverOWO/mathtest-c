# include <stdio.h> 
# include <stdlib.h>
# include <time.h> 

int main() {

	srand(time(0));

	int numbs = rand();
	int cumb = rand();
	int t;

	printf(" %d + %d = ", numbs, cumb);
	
	scanf("%d", &t);

	return 0;

}