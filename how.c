# include <stdio.h> 
# include <stdlib.h>
# include <time.h> // including is like importing a package
# define MAX_LIMIT 20 // variable defining

// must put int main() {} to beable to code 
int main() {

	srand(time(0));

	int chr[MAX_LIMIT]; // makes it so u can have more then 1 charater in this string
	int numbs = rand();
	int cumb = rand();

	printf(" %d + %d = ", numbs, cumb);
	
	//fgets(chr, MAX_LIMIT, stdin);
	
	//printf("You entered %s", chr);
	return 0;

}

// gcc how.c is how to compile program O_O