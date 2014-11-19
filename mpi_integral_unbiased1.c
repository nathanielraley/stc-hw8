#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <mpi.h>

double inte(int x);

const int NNN=100000;
const int NN=10000;
int main(int argc, char *argv[])
{   
	int myrank, size;
	int localstart1=0, localstart2=0, localend1, localend2;
double localsum1=0.0, localsum2=0.0;	
double sum1 =0.0,sum2=0.0;
   int i, n, j;
   n = 100000;
   double a,b,y=0,r=0;

MPI_Init(&argc, &argv);
MPI_Comm_rank(MPI_COMM_WORLD, &myrank);
MPI_Comm_size(MPI_COMM_WORLD, &size);

if(myrank==0)printf("\n");

localstart1=NNN/size * myrank +1;
localend1=NNN/size * (myrank +1);

localstart2=NN/size*myrank+1;
localend2=NN/size*(myrank+1);

for(i=localstart1-1;i<localend1; i++){
   y=((rand()*10.0 /RAND_MAX)-5.0);
   localsum1=localsum1+(10./NNN)*(exp(-(y*y)/2)*(cos(y)+5));
   }

for(i=localstart2-1;i<localend2; i++){
   y=((rand()*10.0 /RAND_MAX)-5.0);
   localsum2=localsum2+(10./NN)*(exp(-(y*y)/2)*(cos(y)+5));
   }


/*
printf("%d \t %f\n",10,inte(10));
printf("%d \t %f\n",100,inte(100));
printf("%d \t %f\n",1000,inte(1000));
printf("%d \t %f\n",10000,inte(10000));
printf("%d \t %f\n",100000,inte(100000));
*/

MPI_Reduce(&localsum2, &sum2, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
if(myrank==0)printf("\n 10000 \t %f\n",sum2);

MPI_Reduce(&localsum1, &sum1, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
if(myrank==0)printf("\n 100000 \f %f\n",sum1);

MPI_Finalize();
return 0;

  }

double inte(int n){
double r=0;
int i;
double y = 0;
for(i=0;i<n;i++){
y=((rand()*10.0 /RAND_MAX)-5.0);
r=r+(exp(-(y*y)/2)*(cos(y)+5));}
r=r*(10./n);
return r;
}
