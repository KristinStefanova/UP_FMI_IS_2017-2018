# Quiz #12

1. To recurse is to

Practice recursion
Swear again
Neither of the above

2. To recur is to

Practice recursion
Swear again
Neither of the above

3. Factorial is

a good introductory example of recursion, but a function better implemented iteratively for efficiency reasons.
a good introductory example of recursion, and a function best implemented recursively.
a bad introductory example of recursion as it hard to implement recursively.

4. factorial(0) is

0
1
Infinity
Undefined
None of the above

5. Recursion is

a powerful construct theoretically, but rarely used in actual programs.
a weak construct theoretically rarely used in actual programs.
a powerful construct theoretically, often used in certain applications that benefit from recursive methods.

6. Which of the following is not a requirement for a recursive function?

It has two base cases.
It has a recursive case
Its recursive case approaches a base case.

7. The function

int example(unsigned int a)
{
if (a==0) return 0;
else return example(a+1);
}

is a bad recursive function because

it has no recursive case.
it has no base case.
the recursive case does not approach the base case.

8. Is the following function circular?

int syracuse(int n)
{
if (n==1) return 0;
else if (n % 2 != 0) return syracuse(n/2);
else return 1 + syracuse(3*n + 1);
}

Yes
No
We don't know.


9. True or false: Regardless of implementation, the closed-form solution to the Fibonacci problem is always more efficient than a recursive implementation.

True
False

10. True or false: A linearly recursive function always has the recursive call at the end of the function.

True
False

11. True or false: Tail recursion is a form of linear recursion.

True
False

12. The following function is an example of what form of recursion?

int mystery(int n, int k)
{
if (k == 0 || n == k) return(1);
else return(mystery(n-1,k) + mystery(n-1,k-1));
}

Linear recursion
Binary recursion
Nested recursion
Mutual recursion

13. The following function implements what recursive function?

int mystery(char *s)
{
if (*s=='\0') return 0;
else return(1 + mystery(s+1));
}

strlen()
strcmp()
strstr()
strchr()


14. True or False: All recursive functions can be implemented iteratively.

True
False

15. True or False: All iterative functions can be implemented recursively.

True
False

16. This function is an example of what type of recursion?

int fib_r(int n)
{
if (n<=1) return 1;
else return(fib_r(n-1) + fib_r(n-2));
}

Linear recursion
Tail recursion
Binary recursion
Nested recursion

17. fib(5) is

2
3
5
8

18. factorial(4) is

0
24
12
36


19. True or False: If a recursive function does not have a base case, the compiler will detect this and display a compiler error.

True
False

20. True or False: Recursive calls are usually contained within a loop.

True
False

21. True or False: It is possible to have more than one recursive call within a function.

True
False

22. True or False: Binary search can only be written recursively.

True
False

23. Which of these statements is true about the following code?

int mystery(int n)
{
if (n>0) return n + mystery(n-1);
return 0;
}

The base case for this recursive method is an argument with any value which is less than or equal to zero.
The base case for this recursive method is an argument with any value which is greater than zero.
The base case for this recursive function is an argument with the value zero.
There is no base case.


24. Which of the following iterative functions is not equivalent to this recursive function?

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

25. True or False: When a recursive solution's elegance outweighs its overhead (memory, time, efficiency, etc), and when it is much less complex than an iterative solution, you would most likely choose to use the recursive solution.

True
False

26. True or False: You should always use a recursive solution rather than an iterative solution when you are sure that that recursive solution will not overflow the call stack.

True
False


27. Recursion can be an inefficient way to implement a solution because

using the call stack to store states adds significant overhead.
calling a function multiple times could be reduced to looping, which might better done with a looping structure such as a while construct.
Both of the above.

28. True or False: Recursion happens when an algorithm does not use a loop.

True
False

29. True or False: A function can be considered recursive if it has a direct or an indirect call to itself.

True
False


30. True or False: Infinite recursion can occur when a recursive algorithm does not contain a base case.

True
False

31. True or False: Infinite recursion can occur when a recursive algorithm contains a base case.

True
False

32. Predict output of following program
#include <stdio.h>
 
int fun(int n)
{
    if (n == 4)
       return n;
    else return 2*fun(n+1);
}
 
 
int main()
{
   printf("%d ", fun(2));
   return 0;
}

A. 4
B. 8
C. 16
D. Runtime Error

33. Consider the following recursive function fun(x, y). What is the value of fun(4, 3)
int fun(int x, int y) 
{
  if (x == 0)
    return y;
  return fun(x - 1,  x + y);
} 

A. 13
B. 12
C. 9
D. 10

34. What does the following function print for n = 25?
void fun(int n)
{
  if (n == 0)
    return;
 
  printf("%d", n%2);
  fun(n/2);
}  

A. 11001
B. 10011
C. 11111
D. 00000

35. What does the following function do?
int fun(int x, int y)
{
    if (y == 0)   return 0;
    return (x + fun(x, y-1));
}

A. x + y
B. x + x*y
C. x*y
D. xy

36. What does fun2() do in general?
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

37. Output of following program?
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

38. What does the following function do?
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

39. Predict the output of following program
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


40. Consider the following recursive C function that takes two arguments

unsigned int foo(unsigned int n, unsigned int r) {
  if (n  > 0) return (n%r +  foo (n/r, r ));
  else return 0;
}

What is the return value of the function foo when it is called as foo(345, 10) ?

A. 345
B. 12
C. 5
D. 3
