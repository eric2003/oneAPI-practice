#include <iostream>
#include <immintrin.h>

int main(int argc, char **argv)
{
    {
        const int nSize = 8;
        float vec[ nSize ];
        for ( int i = 0; i < nSize; ++ i )
        {
            vec[ i ] = i;
        }
        
        __m256 a = _mm256_loadu_ps( vec );

        float* fv = (float*) &a;
        for ( int i = 0; i < nSize; ++ i )
        {
            printf("%f ", fv[ i ]);
        }
        printf("\n");
    }

    return 0;
}
