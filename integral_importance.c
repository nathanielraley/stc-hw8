#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double inte(int x);

int main()
{
   int i, n, j;
   n = 100000;
   double a,b;
/*   float *u, *y;
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

fclose(fp);
free(u);
free(y);
*/

printf("%d \t %f\n",10,inte(10));
printf("%d \t %f\n",100,inte(100));
printf("%d \t %f\n",1000,inte(1000));
printf("%d \t %f\n",10000,inte(10000));
printf("%d \t %f\n",100000,inte(100000));

  }

double inte(int n){
double r=0;
int i;
float *y;
y = malloc(sizeof(float)*100000);
FILE *fp= fopen("rand_normal.dat","r");

for(i=0;i<n;i++){
fscanf(fp,"%f",&y[i]);}

for(i=0;i<n;i++){
r=r+(cos(y[i])+5);}
r=r*(sqrt(2.0*3.1415926)/n);

fclose(fp);
free(y);

return r;
}
