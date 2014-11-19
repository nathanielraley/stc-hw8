#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int i, n;
   n = 100000;
   double x;
   float *u;
   u = malloc (sizeof(float) * 100000);

FILE *fp= fopen("rand_exp.dat","w");


   for( i = 0 ; i < n ; i++ )
    u[i]=(rand()*1.0 /RAND_MAX);

for(i=0;i<n;i++){
u[i]=(-3*log(u[i]));
fprintf(fp,"%f\n",u[i]);
}

free(u);
fclose(fp);
  }

