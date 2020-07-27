# include <stdio.h> 
# include <stdlib.h>
# include <time.h> 

int main(void) {

	int t;
	int score = 0;

	while (true)
	{
		int numbs = rand() % 10 + 1;
		int cumb = rand() % 10 + 1;
		int answer = numbs + cumb;

		printf("%d + %d = ", numbs, cumb);
	
		scanf("%d", &t);

		if (t == answer)
		{
			score += 1;
			printf("You are right! Current Streak: %d \n", score);
		} 
		else {
			return printf("No the answer is %d \nTry again by opening the exe again", answer);
		}
		
	}

}