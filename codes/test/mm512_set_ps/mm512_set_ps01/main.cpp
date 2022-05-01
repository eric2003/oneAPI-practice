#include <iostream>
#include <immintrin.h>

int main(int argc, char **argv)
{
    {
        __m256 a = _mm256_set_ps( 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0 ); 
        float vec[8];
        _mm256_store_ps( vec, a );
        for ( int i = 0; i < 8; ++ i )
        {
            std::cout << vec[ i ] << " ";
        }
        std::cout << std::endl;
    }
    {
        __m512 a = _mm512_set_ps( 16.0f, 15.0f, 14.0f, 13.0f, 12.0f, 11.0f, 10.0f, 9.0f, 8.0f, 7.0f, 6.0f, 5.0f, 4.0f, 3.0f, 2.0f, 1.0f );
        float vec[16];
        _mm512_storeu_ps( vec, a );
        for ( int i = 0; i < 16; ++ i )
        {
            std::cout << vec[ i ] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
