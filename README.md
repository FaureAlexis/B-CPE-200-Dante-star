# Dante star

The goal of this project is to generate and solve mazes using two binaries. 
All systems and libC functions are allowed.

## Compilation

### Build all :

`make`

### Build solver or generator

`make [solver/generator]`

## Run

### Generator :
`./generator/generator X Y [perfect]`

### Solver : 
`./solver/solver maze_path.txt`

## Generator

### Algorithm: 
Binary tree

## Solver

For the solver, because of ATs timeout, the program load maze from file 
into int array (because it's way faster than char array) into a structure.
Then we follow the left wall until the exit

## Results

TA : 65%
Coding style : No errors
Unit tests coverage: 71.7%

### Authors

- [Alexis Faure](alexis.faure@epitech.eu)
- [Édouard Pradie](edouard.pradie@epitech.eu)
