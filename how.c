# include <stdio.h> 
# include <stdlib.h>
# include <time.h> 

int main(void) {

	srand(time(NULL));

	int l = 1;
	int t;

	while (l < 2)
	{
		int numbs = rand() % 10 + 1;
		int cumb = rand() % 10 + 1;
		int answer = numbs + cumb;

		printf("%d + %d = ", numbs, cumb);
	
		scanf("%d", &t);

		if (t == answer)
		{
			printf("You are right! \n");
		} 
		else {
			return printf("No the answer is %d \nTry again by opening the exe again", answer);
		}
		
	}

}