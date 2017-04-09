# PPL_ASSIGNMENT
Name - Anurag Bhardwaj
ROLL No - IIT2015076  
Section - A

## OVERVIEW
> 1) The project currenty solves questions 3 to 6.  
> 2) The documentation of the project has been generated. To view documentation, go to ppl/html/index.html  
> 3) The class diagram for all the questions (combined) is in q3_inheritance.pdf.  
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

## Class Diagram

>The class diagram is generated using visual-paradigm.
>To view the clas diagram, open q3.inheritance.jpg
  
## HOW TO BUILD AND RUN

>Change Directory to q3_inheritance
```
cd q3_inheritance
```

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
g++ -c boy.cpp
g++ -c girl.cpp
g++ -c Input.cpp
g++ -c couples.cpp
g++ -c gift_alloc.cpp
g++ -c gifts.cpp
g++ -c h_c.cpp
ar rvs lib_load *.o 
```
### Question - 3

>To run Question 3
```
g++ q3.cpp lib_load
./a.out
```
>k most happy and compatible couples will be stored in k_Couples.txt  

### Question - 4

>To run Question 4
```

g++ q4.cpp lib_load
./a.out
```
>Couples formed after breakup are stored in couples_afterbreakup.txt

### Question - 5

>To run Question 5
```
g++ q5.cpp lib_load
./a.out
```
>k most happy and compatible couples will be stored in k_Couples.txt  

### Question -6

>To run Question 6
```
g++ q6.cpp lib_load
./a.out
```
>Couples formed after breakup are stored in couples_afterbreakup.txt
