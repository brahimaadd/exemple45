#include "pi.h"
#include "stdio.h"
int main( )
{
	float rayon;
	printf("rayon?");
	scanf("%f", &rayon);
	printf("%f %f", surface(rayon), circonference(rayon));
}
