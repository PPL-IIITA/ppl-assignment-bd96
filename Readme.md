# PPL_ASSIGNMENT
Name - Anurag Bhardwaj
ROLL No - IIT2015076  
Section - A

## OVERVIEW
> 1) The project currenty solves questions 1 to 2.  
> 2) The documentation of the project has been generated. To view documentation, go to ppl/html/index.html  
> 3) The class diagram for all the questions (combined) is in Class Diagram.pdf.  
> 4) All the source files, input-output files are available.  

## Generate Documentaion

>The Documentation of the project was generated using Doxygen on Linux.
>Following is the steps to generate documentation
```
doxygen -g
```

>A doxyfile will be generated, open it to make following changes

>In the GENERATE_LATEX option: change "YES" to "NO"
>In the OUTPUT_DIRECTORY option: set to "ppl/"
>In the PROJECT_NAME option: set to "PPL Assignment (phase-2) 2017-rk"
>Execute the following command in the terminal
```
doxygen
```
>To view documentation open ppl/html/index.html
  
## HOW TO BUILD AND RUN

>Generate random input for boys and girls
```
g++ boy_girl_gen.cpp
./a.out
```
>Generate random gifts.
```
g++ gifts_gen.cpp
./a.out
```
>Create Library
```
g++ -c couples.cpp
g++ -c gift_alloc.cpp
g++ -c gifts.cpp
g++ -c h_c.cpp
ar rvs lib_load *.o 
```
### Question - 1

>To run Question 1
```
g++ q1.cpp lib_load
./a.out
```
>Couples are stored in output.txt  

>To run Question 2
```

g++ q2.cpp lib_load
./a.out
```
>k most happy and compatible couples will be stored in k_Couples.txt  


>Change Directory to q3_inheritance
```
cd q3_inheritance
```