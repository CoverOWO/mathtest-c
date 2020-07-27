# include <stdio.h> 
# include <stdlib.h>
# include <time.h> 

int main(void) {

	srand(time(NULL));

	int numbs = rand() % 10 + 1;
	int cumb = rand() % 10 + 1;
	int answer = numbs + cumb;
	int l = 1;
	int t;

	while (l < 2)
	{
		printf(" %d + %d = ", numbs, cumb);
	
		scanf("%d", &t);

		if (t == answer)
		{
			printf("You are right! \n");
		} 
		else {
			printf("No the answer is %d \n", answer);
		}
		
	}
	
	return 0;
}