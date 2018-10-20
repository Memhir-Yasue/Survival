#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#define n 100





struct organism {
	float strength;
} uno, poly ;

int main(int argc, char const *argv[]) {
	
	struct organism uno[n];
	uno[0].strength = 5;
	for (int i = 1; i < n; ++i) {
		
		srand(time(NULL));
		sleep(1);
		float prev_generation_strength = (uno[i-1].strength) * 0.8;
		int birthStrength = 0 + rand() % 10;
		uno[i].strength =  birthStrength + prev_generation_strength;
		printf("%d %.1f %.1f\n",birthStrength,prev_generation_strength, uno[i].strength );
	
	}
	// for (int i = 0; i < 10; ++i) {

	// 	printf("%.2f\n",uno[i].strength);
	// }
	

	return 0;

}

