# README #

### What is this repository for? ###

This repository is for hw8 in STC at UT, Fall 2014
The homework uses monte carlo methods to achieve certain numerical goals, such as inverse transformations of uniform random variables, acceptance/rejection of uniform random variables, and similar monte carlo integration techniques. It also includes an mpi version of one of the programs for extra credit.

### How do I get set up? ###
Just type "make" and the Makefile will compile all source code to executables. One of the executables is an mpi program and thus requires ibrun and support for parallelization.  Three .dat files will be generated when running the programs: rand_uniform.dat, rand_exp.dat, and rand_normal.dat, each containing 100,000 random variables from each of the respective distributions. Note that the program integral_importance.c depends on rand_normal.dat being populated first. That is to say, in order for this program to work, you must already have generated the 100,000 normal random variables using rand_normal.c



### Who do I talk to? ###

For questions contact nathaniel.raley@utexas.edu