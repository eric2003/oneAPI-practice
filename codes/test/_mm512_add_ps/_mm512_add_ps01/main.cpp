#include <iostream>
#include <immintrin.h>

int main(int argc, char **argv)
{
    {
        __m512 a = _mm512_set_ps( 16.0f, 15.0f, 14.0f, 13.0f, 12.0f, 11.0f, 10.0f, 9.0f, 8.0f, 7.0f, 6.0f, 5.0f, 4.0f, 3.0f, 2.0f, 1.0f );
        __m512 b = _mm512_set1_ps( 1.0f );
        __m512 c = _mm512_add_ps(a, b);
        const int nSize = 16;

        float* fv = (float*) &c;
        for ( int i = 0; i < nSize; ++ i )
        {
            printf("%f ", fv[ i ]);
        }
        printf("\n");
    }
    return 0;
}
