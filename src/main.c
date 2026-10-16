#include <math.h>
#include <stdio.h>
#include <uxhw.h>

int
main(void)
{
	double X = UxHwDoubleUniformDist(0, 1);
	double Y = UxHwDoubleUniformDist(0, 1);
	double Z = UxHwDoubleUniformDist(0, 1);

    double infer_fma = (X*Y)+Z;
    double explicit_fma = fma(X, Y, Z);

    printf("%f\r\n", infer_fma);
    printf("%f\r\n", explicit_fma);
	return 0;
}
