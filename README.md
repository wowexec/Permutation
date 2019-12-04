# Permutation
A permutation program, it can enumerate all cases.

* Usage:

1. Change the keywords number. (Line 8, change=7)

2. Change the keywords. (Line 8, change='A', 'B', 'C', 'D', 'E', 'F', 'G')

> char   array[7] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};

Example: If you want to array A,C,D,F, you can change the code to:

> char   array[4] = {'A', 'C', 'D', 'F'};

3.Change the used number. (Line 10, change=6, 3)

> perm(array, 6, 3);

Example: If you want to make A,C,D,F in the list and only array the first three(A,C,D), and choose two number from each one, that it is 'A2(up)3(down)' in mathematics, you can change the code to:

> perm(array, 3, 2);

4. Compile "permutation.cpp"

5. Start "ProgramStarter.cmd", enter "permutation" and press [ENTER], then enter "1" to start the program.

## This program is not perfect, you can only change the program by changing the code. Sorry for the inconvenience.
