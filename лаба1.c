# include <stdio.h>
float sqrt(float n)
{
	float x = n;
	float y = 1;
	float e = 0.000001;
	while (x - y > e) {
		x = (x + y) / 2;
		y = n / x;
	}
	return x;
}
int main()
{
	float x = squareRoot(2);
	float epsilon = 0.0001f;
	float y = 1.41421356237f;
	if (x - y < epsilon) {
		printf("Okay, it's right:%.5f", x);
		return 0;
	}
	else {
		printf("bad");
		return 1;
	}
}