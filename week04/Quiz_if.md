# Quiz

**1. Какво ще се изведе от следната програма?**
```c++
    #include <iostream>
    using namespace std;
    int main()
    {
        int a = 5, b = 6, c;
        c = (a > b) ? a : b;
        cout << c;
        
        return 0;
    }
```

**2. Какво ще се изведе от следната програма?**
```c++
    #include <iostream>
    int main()
    {
        int a = 5, b = 10;
        int k;
        bool x = true;
        bool y;
        if (а > b)
            y = false;
        else
            y = true;
        k =((a * b) + (x + y));
        std::cout << k;
        return 0;
    }
```

**3. Ако променливата *а* има стойност *8*, каква ще е стойността на *b* след изпълнението на оператора:**
```c++
    if (a > 4) b = 5;
    else if (a < 4) b = -5;
    else if (a == 8) b = 8;
    else b = 3;
```

**4. Какво се отпечатва на екрана след изпълнението на следния оператор:**
```c++
    char ch = 'b';
    switch (ch)
    {
        case 'a': cout << "1" << endl; break;
        case 'b': cout << "2" << endl; 
        case 'c': cout << "3" << endl; break;
    }
```