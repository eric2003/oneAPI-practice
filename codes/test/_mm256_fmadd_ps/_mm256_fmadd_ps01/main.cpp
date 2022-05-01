#include <iostream>
#include <immintrin.h>

int main(int argc, char **argv)
{
    {
        __m256 a = _mm256_set_ps( 8.0f, 7.0f, 6.0f, 5.0f, 4.0f, 3.0f, 2.0f, 1.0f );
        __m256 b = _mm256_set1_ps( 2.0f );
        __m256 c = _mm256_set1_ps( 1.0f );
        __m256 d = _mm256_fmadd_ps ( a, b, c );
        const int nSize = 8;

        float* fv = (float*) &d;
        for ( int i = 0; i < nSize; ++ i )
        {
            printf("%f ", fv[ i ]);
        }
        printf("\n");
    }
    return 0;
}
