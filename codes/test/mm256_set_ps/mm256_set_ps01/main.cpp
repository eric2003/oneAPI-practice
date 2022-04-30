#include <iostream>
#include <immintrin.h>

int main(int argc, char **argv)
{
    __m256 a = _mm256_set_ps( 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0 ); 
    float vec[8];
    _mm256_store_ps( vec, a );
    for ( int i = 0; i < 8; ++ i )
    {
        std::cout << vec[ i ] << " ";
    }
    std::cout << std::endl;

    return 0;
}
