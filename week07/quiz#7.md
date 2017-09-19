# Quiz #7

**1-8. Проверете следните програми и посочете какъв е резултата, или дали въобще ще се компилират.**

**1.** 
```c++
#include <iostream>

int return7()
{
    return 7;
}
 
int return9()
{
    return 9;
}
 
int main()
{
    return7();
    return9();
 
    return 0;
}
```

**2.**
```c++
#include <iostream>

int return7()
{
    return 7;
 
    int return9()
    {
        return 9;
    }
}
 
int main()
{
    std::cout << return7() + return9() << std::endl;
 
    return 0;
}
```

**3.**
```c++
#include <iostream>

int return7()
{
    return 7;
}
 
int return9()
{
    return 9;
}
 
int main()
{
    std::cout << return7() + return9() << std::endl;
 
    return 0;
}
```

**4.**
```c++
#include <iostream>

void printA()
{
    std::cout << "A" << std::endl;
}
 
void printB()
{
    std::cout << "B" << std::endl;
}
 
int main()
{
    printA();
    printB();
 
    return 0;
}
```

**5.**
```c++
#include <iostream>

void printA()
{
    std::cout << "A" << std::endl;
}
 
int main()
{
    std::cout << printA() << std::endl;
 
    return 0;
}
```

**6.**
```c++
#include <iostream>

int getNumbers()
{
    return 5;
    return 7;
}
 
int main()
{
    std::cout << getNumbers() << std::endl;
    std::cout << getNumbers() << std::endl;
 
    return 0;
}
```

**7.**
```c++
#include <iostream>

int return 5()
{
    return 5;
}
 
int main()
{
    std::cout << return 5() << std::endl;
 
    return 0;
}
```

**8.**
```c++
#include <iostream>

int return5()
{
    return 5;
}
 
int main()
{
    std::cout << return5 << std::endl;
 
    return 0;
}
```

**9. Koe e грешното в следния фрагмент?**
```c++
#include <iostream>
 
void multiply(int x, int y)
{
    return x * y;
}
 
int main()
{
    std::cout << multiply(4, 5) << std::endl;
    return 0;
}
```

**10. Oткрийте и поправете 2-те грешки в следния фрагмент?**
```c++
#include <iostream>
 
int multiply(int x, int y)
{
    int product = x * y;
}
 
int main()
{
    std::cout << multiply(4) << std::endl;
    return 0;
}
```

**11. Kaкво ще изведе следната програма?**
```c++
#include <iostream>
 
int add(int x, int y, int z)
{
    return x + y + z;
}
 
int multiply(int x, int y)
{
    return x * y;
}
 
int main()
{
    std::cout << multiply(add(1, 2, 3), 4) << std::endl;
    return 0;
}
```
