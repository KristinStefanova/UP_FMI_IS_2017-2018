# Quiz #13

1. This function is an example of what type of recursion?

int fib_r(int n)
{
if (n<=1) return 1;
else return(fib_r(n-1) + fib_r(n-2));
}

a. Linear recursion
Tail recursion
Binary recursion
Nested recursion

2. fib(5) is

2
3
5
8

3. factorial(4) is

0
24
12
36


4. True or False: If a recursive function does not have a base case, the compiler will detect this and display a compiler error.

True
False

5. True or False: Recursive calls are usually contained within a loop.

True
False

6. True or False: It is possible to have more than one recursive call within a function.

True
False

7. True or False: Binary search can only be written recursively.

True
False

8. Which of these statements is true about the following code?

int mystery(int n)
{
if (n>0) return n + mystery(n-1);
return 0;
}

The base case for this recursive method is an argument with any value which is less than or equal to zero.
The base case for this recursive method is an argument with any value which is greater than zero.
The base case for this recursive function is an argument with the value zero.
There is no base case.


9. Which of the following iterative functions is not equivalent to this recursive function?

int mystery(int n)
{
if(n > 0) return (n + mystery(n - 1));
return 0;
}

 
int mystery(int n) 
{
int sum = 0;
while (n > 0) {
sum = sum + n;
n--;
}
return sum;
}
 
int mystery(int n)
{
int j = 0, sum = 0;
while (j < n) {
j++;
sum = sum + j;
}
return sum;
}
 
int mystery(int n)
{
int sum;
while (n > 0) {
sum = 0;
sum = sum + n;
n--;
}
return sum;
}

10. True or False: When a recursive solution's elegance outweighs its overhead (memory, time, efficiency, etc), and when it is much less complex than an iterative solution, you would most likely choose to use the recursive solution.

True
False

11. True or False: You should always use a recursive solution rather than an iterative solution when you are sure that that recursive solution will not overflow the call stack.

True
False


12. Recursion can be an inefficient way to implement a solution because

using the call stack to store states adds significant overhead.
calling a function multiple times could be reduced to looping, which might better done with a looping structure such as a while construct.
Both of the above.

13. True or False: Recursion happens when an algorithm does not use a loop.

True
False

14. True or False: A function can be considered recursive if it has a direct or an indirect call to itself.

True
False


15. True or False: Infinite recursion can occur when a recursive algorithm does not contain a base case.

True
False

16. What does the following function do?
int fun(int x, int y)
{
    if (y == 0)   return 0;
    return (x + fun(x, y-1));
}

A. x + y
B. x + x*y
C. x*y
D. xy

17. What does fun2() do in general?
int fun(int x, int y)
{
    if (y == 0)   return 0;
    return (x + fun(x, y-1));
}
 
int fun2(int a, int b)
{
    if (b == 0) return 1;
    return fun(a, fun2(a, b-1));
}

A. x*y
B. x+x*y
C. xy
D. yx

18. Output of following program?
#include<stdio.h>
void print(int n)
{
    if (n > 4000)
        return;
    printf("%d ", n);
    print(2*n);
    printf("%d ", n);
}
 
int main()
{
    print(1000);
    getchar();
    return 0;
}

A. 1000 2000 4000
B. 1000 2000 4000 4000 2000 1000
C. 1000 2000 4000 2000 1000
D. 1000 2000 2000 1000

19. What does the following function do?
int fun(unsigned int n)
{
    if (n == 0 || n == 1)
        return n;
 
    if (n%3 != 0)
        return 0;
 
    return fun(n/3);
}

A. It returns 1 when n is a multiple of 3, otherwise returns 0
B. It returns 1 when n is a power of 3, otherwise returns 0
C. It returns 0 when n is a multiple of 3, otherwise returns 1
D. It returns 0 when n is a power of 3, otherwise returns 1

20. Predict the output of following program
#include <stdio.h>
int f(int n)
{
    if(n <= 1)
        return 1;
    if(n%2 == 0)
        return f(n/2);
    return f(n/2) + f(n/2+1);
}
 
 
int main()
{
    printf("%d", f(11));
    return 0;
}

A. Stack Overflow
B. 3
C. 4
D. 5

