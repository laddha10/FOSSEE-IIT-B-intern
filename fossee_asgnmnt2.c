     #include "fossee_asgnmnt2.h"
     
     void addme(const real a[5], const real b[10], real c[2])
     {
       int z;
       int y;
       for (z = 0; z < 2; z++) {
         
         for (y = 0; y < 5; y++) {
          c[z] = a[y] + b[y];
        }
      }
    }
