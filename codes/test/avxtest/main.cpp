#include<iostream>
#include<immintrin.h>  //ICX needs the include
using namespace std;
void add_sse(float *a, int N){
        __m128 x, y;
        y = _mm_set_ps1(1.f);
        for(int i = 0; i < N/4; i++)
        {
                x = _mm_load_ps(a);
                x = _mm_add_ps(x, y);
                _mm_store_ps(a, x);
                a+=4;
        }
}
void add_avx(float *a, int N){
        __m256 x, y;
        y = _mm256_set_ps(1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f);
        for(int i = 0; i < N/8; i++)
        {
                x = _mm256_load_ps(a);
                x = _mm256_add_ps(x, y);
                _mm256_store_ps(a, x);
                a+=8;
        }
}
void add_avx512(float *a, int N){
        __m512 x, y;
        y = _mm512_set_ps(1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f);
        for(int i = 0; i < N/16; i++)
        {
                x = _mm512_load_ps(a);
                x = _mm512_add_ps(x, y);
                _mm512_store_ps(a, x);
                a+=16;
        }
}
int main(){
        float a[32];
        for(int i = 0; i < 32; i++)
                a[i] = i;
        #ifdef SSE
                add_sse(a,32);
        #elif AVX
                add_avx(a,32);
        #else
                add_avx512(a,32);
        #endif
        std::cout<<"a[15] = "<<a[15]<<"\n";
        return 0;
}