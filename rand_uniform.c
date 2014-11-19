#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, n;
   n = 100000;
   double x;

FILE *fp= fopen("rand_uniform.dat","w");

   for( i = 0 ; i < n ; i++ ){
        fprintf(fp,"%f\n",(rand()*10.0 /RAND_MAX)-5.0); }

fclose(fp);
  }

