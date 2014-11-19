#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double pi(double x, double y);

int main()
{
   int i, n, j;
   n = 100000;
   double a,b;
   float *u, *y;
   u = malloc (sizeof(float) * 100000);
   y = malloc (sizeof(float) * 100000);

for( i = 0 ; i < n ; i++ ){
   u[i]=((rand()*1.0 /RAND_MAX));
   y[i]=((rand()*1.0 /RAND_MAX));
}

FILE *fp= fopen("rand_normal.dat","w");

for(i=0;i <= n;i++){
a=((rand()*1.0 /RAND_MAX));
b=((rand()*1.0 /RAND_MAX));
if(pi(a,b)<1){
  j++;}
if(i==10)printf("%d \t %f\n",i,4.*(float)j/(float)i);
if(i==100)printf("%d \t %f\n",i,4.*(float)j/(float)i);
if(i==1000)printf("%d \t %f\n",i,4.*(float)j/(float)i);
if(i==10000)printf("%d \t %f\n",i,4.*(float)j/(float)i);
if(i==100000)printf("%d \t %f\n",i,4.*(float)j/(float)i);
}

//printf("%d %f\n",j,4.*(float)j/100000);
fclose(fp);
free(u);
free(y);
  }

double pi(double x, double y){
double r=sqrt((x*x)+(y*y));
return r;
}
