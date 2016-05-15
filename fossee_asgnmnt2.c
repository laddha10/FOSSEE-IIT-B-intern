     #include "fossee_asgnmnt2.h"
     
     void addme(const real32_T a[5], const real32_T b[10], real32_T c[2])
     {
       int32_T z;
       int32_T y;
       for (z = 0; z < 2; z++) {
         c[z] = 0;
         for (y = 0; y < 5; y++) {
          c[z] += a[y] + b[y];
        }
      }
    }