#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double stdnorm(double x);

int main()
{
   int i, n, j;
   n = 100000;
   double x;
   float *u, *y,a,b;
   u = malloc (sizeof(float) * 100000);
   y = malloc (sizeof(float) * 100000);

for( i = 0 ; i < n ; i++ ){
   u[i]=((rand()*10.0 /RAND_MAX)-5.0);
   y[i]=((rand()*10.0 /RAND_MAX)-5.0);
}

FILE *fp= fopen("rand_normal.dat","w");

 for( i = 0 ; i < n ;){
a=((rand()*10.0 /RAND_MAX)-5.0);
b=((rand()*10.0 /RAND_MAX)-5.0);
if(fabs(a)<=(stdnorm(b)/stdnorm(0))){
  fprintf(fp,"%f\n",b);
i++;} 
}

fclose(fp);
free(u);
free(y);
  }

double stdnorm(double x){
double y=1/sqrt(2*3.14159)*exp(-1*(x*x/2));
return y;
}
