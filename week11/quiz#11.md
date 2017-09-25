# Quiz #11

**1. Кое от следните е низ?**

A. static String

B. int string[50];

C. string string[60];

D. char string[100];


**2. С кой символ завършват всички низове?**

A. '.'

B. ' '

C. '\0'

D. '\n'


**3. Кое от следните прочита в низ с име x и със сто знака дължина?**

A. cin.getline(x, 100, '\n');

B. cin.getline(100, x, '\n');

C. readline(x, 100, '\n');

D. read(x);


**4. Коя от следните функции сравнява два низа?**

A. compare();

B. stringcompare();

C. cmp();

D. strcmp();


**5. Кое от следните копира един низ в друг?**

A. copy();

B. strcpy();

C. strcat();

D. stringCopy();


**6. Ако двата низа са еднакви, тогава strcmp () връща:**

A. 1

B. 0

C. -1

D. true

  
**7. Какъв ще e резултатa от следната програмата?**

```c++  
#include<iostream>
using namespace std;

int main()
{
    char t;
    char *p1 = "India", *p2;
    p2=p1;
    p1 = "Bulgaria";
    
    cout << p1 << " " << p2;
    return 0;
}
```

A. India Bulgaria

B. Bulgaria India

C. India India

D. Bulgaria Bulgaria
  
  
**8. Какъв ще e резултатa от следната програмата?**

```c++
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str1[5] = "Alex", str2[5] = "alex";
    
    cout << strcmp(str1, str2) << endl;
    return 0;
}
```

А. Непредсказуемo цяло число

B. 0

C. -1

D. Error

  
**9. Какъв ще e резултатa от следната програмата?**

```c++
#include<iostream>

int main()
{
    char str[25] = "quiz";
    std::cout << str + 2;
    return 0;
}
```


А. Нищо

B. Error

C. Buiz  

D. iz

  
**10. Какъв ще e резултатa от следната програмата?**

```c++
#include<iostream>
#include<string.h>

int main()
{
    char str[] = "This\0Quiz\0";
    std::cout << str;
    return 0;
}
```

A. This

B. This

C. This Quiz

D. This\0Quiz


**11. Какъв ще e резултатa от следната програмата?**

```c++
#include<iostream>  
#include<stdio.h>

int main()
{
    std::cout << 5 + "This Quiz\n";
    return 0;
}
```

A. This Quiz

B. This

C. T

D. Quiz

