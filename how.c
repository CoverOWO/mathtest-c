# include <stdio.h> 
# include <stdlib.h>
# include <time.h> 

int main() {

	srand(time(0));

	int numbs = rand();
	int cumb = rand();
	int answer = numbs + cumb;
	int t;

	printf(" %d + %d = ", numbs, cumb);
	
	scanf("%d", &t);

	if (t == answer)
	{
		return printf("You are right!");
	} 

	return printf("No the answer is %d", answer);

}