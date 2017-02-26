# PPL_ASSIGNMENT
Name - Anurag Bhardwaj
ROLL No - IIT2015076  
Section - A

## OVERVIEW
> 1) The project currenty solves questions 1 and 2.  
> 2) The documentation of the project has been generated. To view documentation, go to ppl/html/index.html  
> 3) The class diagram for both the questions (combined) is in Class Diagram.pdf.  
> 4) All the source files, input-output files are available.  
  
## HOW TO BUILD AND RUN

> Generate random input for boys and girls
```
g++ boy_girl_gen.cpp
./a.out
```
> Generate random gifts.
```
g++ gifts_gen.cpp
./a.out
```
> Create Library
```
gcc -c couples.cpp
gcc -c gift_alloc.cpp
gcc -c gifts.cpp
gcc -c h_c.cpp
gcc -c match_making.cpp
ar rvs lib_load *.o 
```
### Question - 1

> To run Question 1
```
g++ q1.cpp lib_load
./a.out
```
> The couples will be stored in output.txt file.
### Question 2

> To run Question 2
```
g++ q2.cpp lib_load
./a.out
```

> The gifts exchanges will be stored gift_distribution.txt file.  
> k most happy and compatible couples will be stored in k_Couples.txt  