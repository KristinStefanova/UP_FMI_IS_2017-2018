# Практикум #1
## Какво ще научим днес?
* Въведенеие в курса
* Основни понятия
* Git & Github
* Синтаксис и семантика на С++
* Основни елементи в езика С++
* Типове данни
* Преобразуване на типове данни
* Основни операции с типове данни
* Как да създадем проект в среда за програмиране
    * Visual Studio
    * Code::Blocks

## Въведение в курса
### Водещи: Георги Минков & Кристин Стефанова
### Страница на курса: 
![github.com/KristinStefanova/UP_FMI_IS_2017-2018](https://github.com/KristinStefanova/UP_FMI_IS_2017-2018/)
### Цели: 
Основната цел на този курс е да ви научим да мислите като програмисти. Да може да посрещате проблеми и да се научите да ги решавате по най-оптималния начин.
### Методи: 
#### Часове за упражнение:
За да се научите да мислите, трябва да се упражнявате. Затова в курса предимно ще решаваме задачи. Преди всяко занятие ще имате качен материал, който ще е желателно да прочетете и ако възникнат въпроси да бъдат обсъдени в часовете. Не се колебайте да питате. 
#### Домашни:
По време на семестъра ще имате минимум ДВЕ задължителни домашни работи придружени със защита. Оценката им ще е важна за крайната ви оценка от курса.
#### Контролни:
Освен домашни ще имате и ДВЕ задължителни контролни върху материала. Контролните ще са с продължителността на часовете по практикум. Оценките им също участват в общата ви оценка за курса.
#### Тестове:
За да решаваме задачи трябва да знаем теорията, затова от време на време ще правим тестове(без оценка) с въпроси от текущия материал, които ще са ви полезни както за решаването на задачи, така и за изпита по теория в края на семестъра.  
#### Присъствие:
Знаем, че присъствието не е задължително и не може да ви задължим да решавате задачи, но всяка решена задача е във ваша полза.
#### Контрол: В този курс, както и в повечето курсове преписването не се толелира!
#### Други: 
По време на семестъра е възможно да се провеждат допълнителни обучения(извън редовната програма) свързани с материала, ако е необходимо. Решаването на задачи вкъщи също е важно за вас. Колкото повече задачи решавате, толкова по-добри ще ставате!

## Основни понятия
### Компютър(Computer):
Компютърът е устройство, което изпълнява редица от операции по точно определен начин. 
### Програма(Program):
Поредица от операции(инсрукции), която решава определена задача.

    Пример: 
    Задача: сума на две произволни числа
    Решение:
        въведи две числа    (1)
        събери ги           (2)    
        изведи ги на екрана (3)

### Програмиране(Programming):
Създаване на тази поредица от инструкции.
### Алгоритъм(Algorithm):
Механизъм за намиране на решение на поставената задача.
### Машинен език(Machine language):
Всеки компютър си има свой собствен език за програмиране и може да изпълнява програми, написани само на него.
### Език за програмиране(Programming language):
Формален език за описание на инструкциите. Имат собствен синтаксис и семантика.

    Пример: Pascal, C, C++, C#, Java, JavaScript, Basic, PHP, Python, Ruby, Perl, Assembler, Logo и много други.
### Ниво на езиците:
Колкото по - близо е до машинния език, толкова по-ниско е нивото. 

    Пример: Assembler и асемблерните езици са езици от ниско ниво. 
            C++, Python, Java са езици от средно-високо ниво. 
            Haskell, Prolog са езици от високо ниво.
### Транслатор(Translater):
Това е програма, която превежда езика за програмиране в машинен език, така че написаната програма да може да се изпълни от компютъра.
#### Видове транслатори:
##### Компилатори(Compiler):
Първо се превежда цялата програма на машинен език. Този процес се нарича компилиране. След това програмата може да се изпълнява многократно от компютъра.

    Пример: Програмите на С++ се изпълняват с помощта на компилатор.
##### Интерпретатори(Interpreter):
Командите в програмата една по една се превеждат на машинен език и се изпълняват.

    Пример: Програмите на Python се изпълняват с помощта на интерпретатор.

### IDE(Integrated development environment)
Набор от взаимодействащи си програми, събрани заедно и свързани една с друга с цел да обхванат всеки един етап от разработката на дадена програма.
#### Компоненти на една среда за програмиране: 
##### текстов редактор (Editor)
създаване и редактиране на програмния код
##### транслатор (компилатор) (Compiler)
проверяване на програмата за синтактични грешки и превеждането й до машинен код
##### свързващ редактор (линкер)(Linker) 
свързване на всички програмни файлове и използваните от тях библиотеки в изпълним файл
##### дебъгер (Debugger)
постъпково изпълнение на програмата и откриване на програмни грешки

### Git & Github
Git е контрол на версиите. Ако питате чичко Google ще ви каже, че: "Система за контрол на версиите (на английски: **Version control system**) е механизмът, по който се управлява работата по даден софтуерен проект. За да се улесни разработката на софтуер са създадени специални системи, които намаляват неудобствата при съвместна работа на много хора върху един проект."
Ние ще използваме Git за да качваме матерали за часовете, а вие за да качвате задачите си там и след време да ги показвате на бъдещи работодатели. Системите за контрол на версиите ще са ви необходими в реалния живот и затова е добре да се запознаете с тях.
#### Как да ги използваме:
##### Създаване на профил: [github.com](http://github.com) 
##### Основна работа с GitHub: [10MinutesGuide](https://guides.github.com/activities/hello-world/)
##### Основна работа с Git: [30MinutesGuide](http://rogerdudler.github.io/git-guide/)
### Други термини: [Programming terms](https://www.computerhope.com/jargon/program.htm)
### Синтаксис и семантика на С++
Да се определи **синтаксисът** на един език за програмиране означава да се зададе множество от правила, съгласно които една редица от символи е програма. Да се определи **семантиката** на език за програмиране означава да се определят правилата, съгласно които се изпълняват програмите на този език за програмиране.  
### Основни елементи на езика С++
#### Примерна програма на С++
```c++
//task: Sum of two numbers
#include <iostream.h>

using namespace std;

int main()
{
  double a = 2.5;
  double b = 3.61;
  double sum;
  /*
  Let's find the sum оf a and b and see the result
  */
  sum = a + b;
  cout << "Sum of a and b is " << sum;

  return 0;
}
```
#### Описание на програмата:
Първият ред от нашата програма е **коментар** в езика С++. Коментарите са предназначени за програмистите. В нашия случай коментарът казва, че поставената задача е задача за сумиране на две числа.
```c++
//task: Sum of two numbers
```
Вторият ред е обръщение към компилатора, което казва, че ще са ни необходими операции за вход и изход, тъй като искаме да изведем сумата на екрана. **#include** е директива(обръщение) към процесора и преди самото компилиране директивата се заменя с файла във <>. В нашия случай с **файла iostream.h**. 
```c++
#include <iostream.h>
```

Следващият фрагмент започващ с **int main()** и завършващ с **return 0;}** дефинира функция наречена главна(**main**) функция. Всяка програма трябва да има **точно една** такава функция. **int** пред думата **main** означава, че функцията **main** връща цяло число, а не реално или низ. В нашия случай връщаме 0(**return 0**). Връщаме 0, защото това показва на операционната ни система, че програмaта е завършила успешно. Фрагментът, ограден с **{..}** се нарича блок. В него са записани поредица от дефиниции, инициализации и оператори. Отделните компоненти се разделят със знака **;** и се изпълняват **последователно**. { се нарича начало на блока, а } край на блока. Блокът се разглежда като един оператор от компилатора. Когато използваме функции, този блок се нарича **тяло на функцията**.
```c++
int main()
{
  double a = 2.5;
  double b = 3.61;
  double sum;
  /*
  Let's find the sum оf a and b and see the result
  */
  sum = a + b;
  cout << "Sum of a and b is " << sum;

  return 0;
}
```

Вътре в главната функция **main** се намират следните декларации и оператори.
```c++
double a = 2.5;
double b = 3.61;
double sum;
```
a, b и sum се наричат **променливи**. Променливите съхраняват данни-числа, низове и др., **задължително** имат **тип**, който указва какво съхранява конкретната променлива, освен тип имат **име** и **стойност**. Следващият ред показва **оператора за присвояване =**. Изпозва се когато искаме дадена променлива да **получи/промени** стойността си. 
```c++
sum = a + b;
```
Конструкцията:
```c++
cout << "Sum of a and b is " << sum;
```
съдържа оператора за стандартно извеждане на екрана **<<** и променливата за стандартен изход **cout**.

#### Азбука на С++
Както говоримите езици, така и езиците за програмиране имат своя азбука(допустими символи и знаци), думи и конструкции, които служат за изразяване. 
##### Допустими в програмите са следните символи:
+ малки и главни латински букви
+ цифрите от 0 до 9
+ специални символи + - * / = () [] {} | & ! < > # $ ^ % ^ ~ _ . , : ; ‘ "
+ разделители – интервал, табулация и нов ред

##### Case Sensitive
**Езикът прави разлика между малки и главни букви:**

    Пример:     ime ≠ Ime ≠ IME                     for ≠ For ≠ FOR
#### Думи на езика
##### идентификатори 
за именуване на създадени от потребителя променливи, константи, типове данни и др. **Трябва да започват с буква и да съдържат букви, цифри и _** 

    Коректно: Min, MaxN, A5, _start, AA, B105 
    Погрешно: 10a, Sredna Suma, Nai.Malko, СУМА

##### запазени (ключови) думи 
идентификатори, които имат значение, което не може да бъде променяно. Обозначава езиковите конструкции на езика С++. 

    Например: if, for, while, break, int, double
##### стандартни думи включени в стандартните библиотеки на езика
Имат специално значение, което обаче може да бъде предефинирано. 

    Пример: cout, cin, sqrt, ceil
##### оператори(Statements)
Операторите са най-малките елементи от програмата(редицата от инструкции в нашата програма). Най-просто казано оператор = инструкция. Всеки оператор завъшва задължително с **;**.
##### променливи(Variables)
Променливата е място за съхранение на данни, което може да съдържа различни стойности по време на изпълнение на програмата. Променливите имат няколко характеристики:

+ Място в паметта
+ Име (идентификатор)
+ Тип
+ Стойност

Преди да бъдат използвани, трябва да бъдат дефинирани.C++ е строго типизиран език за програмиране. Всяка променлива има тип, който явно се указва при дефинирането й.

##### константи
Това са единици на езика, като променливите, но за разлика от тях, константите не могат да променат стойността си.

##### препинателни знаци и разделители
Използват се ** ; < . > ][ { } ( ) .**, разделителите са стандартни-интервал, табулация, нов ред.

##### коментари – едноредов и многоредов(Comments)
Части от кода на програмата, които се игнорират при изпълнението и служат за обяснение на програмата или за временно изключване на код.
```c++
// едноредов коментар

/* 
    многоредов коментар 
*/
```
**Коментари от един тип не се влагат едни в други и не се слагат коментари за очевидни неща.**

#### Структура на програмата
```c++
#include <библиотеки>
// глобални декларации и функции
int main() {
// локални декларации
// оператори(statements)
return 0;
}
```
**Всички команди и дефиниции завършват с ;.**

##### Деклариране на променлива(Declaration of variable)

    <тип> <име>;
```c++
int a;
double b;
```
*Декларира се променлива с указаните **тип** и **име**.*
##### Дефиниране на променлива(Definition of variable)

    <тип> <име> = <стойност>;
```c++
int a = 5;
double b = 3.45;
```
*Дефинира се променлива с указаните **тип** и **име** и се инициализира със **стойност**.*

##### Дефиниране на константа

    const <тип> <име> = <стойност>;
```c++
const int pi = 3.14;
```
*Дефинира се константа с указаните **тип**, **име** и **стойност**.* 
**

#### Команда за присвояване

    <променлива> = <израз>;
```c++
sum = 2 + 3*4;
a = b = c = 0;
```
*Изчислява се стойността на израза и той се **присвоява** на променливата.*

#### Вход/изход от конзолата
##### Команда за въвеждане

    cin >> <променлива>;
```c++
cin >> n; 
cin >> a >> b >> c;
```
*Изчаква се **въвеждане на стойност от клавиатурата** и тя се присвоява на променлива. Стойностите може да са разделени с интервал или знак за нов ред.*

**cin е дефиниранa в библиотеката <iostream.h>**
##### Команда за извеждане

    cout << израз;
```c++
cout << 2 + 2; 
cout << a <<" + "<< b <<" = "<< a + b << endl;
```
*Изчислява се израза и неговата стойност се **извежда на екрана.** За добавяне на нов ред се използва **endl**.*
**cout е дефиниранa в библиотеката <iostream.h>**
## Вградени типове данни
Всяка променлива, всеки израз в C++ има тип. Типът определя:
+ Множество от допустимите стойности
+ Операции

Вградените типове данни са предварително дефинирани и се поддържат от разработчиците на езика. Има и абстрактни типове данни - те се дефинират от програмиста, но с тях ще се запознаете следващия семестър. Вградените типове данни са разделени в две категории - скаларни и съставни. Скаларните се състоят от една компонента - число, знак, буква и др. Съставните се състоят от редица елементи. **Ако си спомняте, когато декларирахме променлива, трябваше да определим нейния тип.** 
​        
**Вградени типове данни:**   

| Скаларни типове | Съставни типове |
| --------------: | :-------------- |
|           Булев | Масив           |
|             Цял | Символен низ    |
|          Реален | Вектор          |
|        Символен |                 |
|        Указател |                 |
|       Псевдоним |                 |


### Числени типове
#### Цели числа (Integer)
Често в програмите си използваме типа **int**, чрез него използваме целите числа, така както се използват и в математиката.

    1, 17, 1 000 000, -56, 75, 101
+ Множество от стойности:[-2^31; 2^31-1](4 байта)
+ Модификатори: 
    + short [ -2^15; 2^15-1 ] (2 байта)
    + long [ -2^63; 2^63-1 ] (4 байта)
    + unsigned [ 0; 2^x -1 ] (x = 16, 32, 64) (до 4 байта)
+ Операции: 
    + +a, -a (унарни) 
    + +, -, * (умножение), / (частно), % (остатък) (бинарни)
    + ==. !=, <, >, <=, >= (сравнение)
+ Променлива от тип **int** декларираме чрез **int <име на променливата>;**

#### Числа с плаваща запетая (Floating point)
Типът **double** пък, изразява реалните числа(числата с плаваща запетая) от математиката.

    1, 2.34, 12e-2, 10.14E+03, .23
+ Множество от стойности:[-1,74 * 10^308; 1.74 * 10^308](8 байта)
+ Операции: 
    + +a, -a (унарни операции) 
    + +, -, * (умножение), / (частно) (бинарни)
    + ==. !=, <, >, <=, >= (сравнение)
+ Променлива от тип **double** декларираме чрез **double <име на променливата>;**

Друг тип за реални числа е типът **float** 
+ Множество от стойности:[-3,4 * 10^38; 3.4 * 10^38](4 байта)
+ Операции: 
    + +a, -a (унарни операции) 
    + +, -, * (умножение), / (частно) (бинарни)
    + ==. !=, <, >, <=, >= (сравнение)


#### Вградени математически функции за числови типове
```c++
#include <cmath/math.h>

abs(x)  абсолютна стойност, x е целочислен израз
fabs(x) абсoлютна стойност, x е реален израз
sin(x), cos(x), tan(x), asin(x), acos(x), atan(x)
exp(x), log(x) – натурален, log10(x) - десетичен логаритъм
ceil(x) – закръгляне нагоре, floor(x) – закръгляне надолу
sqrt(x) – корен квадратен, pow(x, n) – х на степен n 
```
#### Символен тип (Character)
Символният тип - **char** използваме, за да може да използваме знаци като букви, цифри, препинателни знаци.

    'a', '9', '!' 

+ Множество от стойности:[-128, 127](1 байт)
+ Променлива от тип **char** декларираме чрез **char <име на променливата>;**
+ Модификатори: 
    + unsigned char [0, 255]
      Интересно: Всъщност знаците са числа.. :D. Какъв ли е резултатът от това:
```c++
cout << 'a' - 5 << endl;
```
Защо резултата е 92 ще разберем в следващата точка. Разгледайте таблицата с кодовете на знаците. Нарича се още ASCII таблица.->[ASCII](http://www.asciitable.com/)

#### Булев тип (Boolean)
Булев или още логически тип **bool** използваме, за да пазим логически стойности, които всъщност са само **две** - **истина** и **лъжа**, или 0 и 1. Логическият тип е много важен за програмистите...нали сте чували, че в компютъра всичко е 0-ли и 1-ци. Тук операциите са малко по-различни от обикновените, затова ще им обърнем голямо внимание малко по-късно.
+ множество от стойности: true и false(1 байт)
+ Променлива от тип **bool** декларираме чрез **bool <име на променливата>;**

### Преобразуване на типове
C++ е строго типизиран език. Всеки израз има тип (int, double и т.н.)
```c++    
    int a = 5;
    int b = a;
    double d = 3.14159 * 2.0;
    cout << (a + b) * 34245543 – a;
```
При задаване на стойност на променлива (или константа) можем да използваме израз и от друг тип.
```c++
    double x = 5; // int → double
    int i = 4; short s = i; // int → short
    i = 3.14; // double → int, i става 3
```
#### Неявно преобразуване
В предишните примери се извършва неявно (имплицитно) преобразуване на типовете. Когато се извършва преобразуване към ”по-
голям” тип, няма загуба на данни (стойността на израза остава същата).

| Тип   |     Преобразува се до |
| ----- | --------------------: |
| bool  | всички числови типове |
| short |                   int |
| float |                double |

#### Неявно и явно преобразуване
Ако преобразуването не е към ”по-голям” тип, може да има загуба. Компилаторът може да направи предупреждение (Warning).
Warning означава, че синтаксисът на езика е спазен, но е много вероятно да е допусната грешка.

#### Явно преобразуване
Пред даден израз се указва нов тип (ограден със скоби):

    double x = 3.14; int i = (int)x * 2;
Изрази от еднакъв тип могат да се комбинират с операциите, дефинирани за този тип. Новият израз е от същия тип.

### Основни операции(Operations)
Типовете данни, освен с множество от стойности и място, което заемат в паметта, се характеризират и с основни операции на типа. Например за числовите типове съществуват аритметични операции и операции за сравнение.

Нека сме дефинирали:
```c++
    int x = 3;
    int y = 5;
```
#### Аритметични операции
резултата от такава операция зависи от типовете на променливите, които участват в израза.

| Оператор |                 Действие                 |     Пример |
| -------- | :--------------------------------------: | ---------: |
| +        |          събира двата операнда           |  x + y = 8 |
| -        |          изважда двата операнда          |  y - x = 2 |
| *        |         умножава двата операнда          | x * y = 15 |
| /        |      дели първия операнд на втория       |  y / x = 1 |
| %        | взима остатъка при деление на първия операнд с втория |  y % x = 2 |
| ++       |   увеличава стойността на операнда с 1   |    x++ е 4 |
| -  -     |   намалява стойността на операнда с 1    |    y-- е 4 |

Забележка: Има разлика между ++x, x++, --y и y--. Когато операцията е пред променливата то тя се изпълнява веднага и стойността на променливата се променя на "текущия ред", докато при x++ (y--), пак променяме стойността на променливата, но на "текущия ред" работим с досегашната стойност.

Пример: 

```c++
{
  int x = 5;
  std::cout << (x++) + 5 ; // увеличаваме стойността с едно, но на този ред x = 5 => 10
  std::cout << x; // 6
}
```

 

#### Операции за сравнение

Резултата от тези операции всъщност е от булев тип.

| Оператор |                 Действие                 |             Пример |
| -------- | :--------------------------------------: | -----------------: |
| ==       | връща true ако x и y са равни, иначе връща false | x == y връща false |
| !=       | връща true ако x и y са различни, иначе връща false |  x != y връща true |
| >        | връща true ако x е по-голямо от y, иначе връща false |  x > y връща false |
| <        | връща true ако x e по-малко от y, иначе връща false |   x < y връща true |
| >=       | връща true ако x е по-голямо или равно на  y, иначе връща false | x >= y връща false |
| <=       | връща true ако x e по-малко или равно на y, иначе връща false |  x <= y връща true |

#### Логически операции
Резутата и тук е от булев тип, също.
##### Оператор за логическо умножение(конюнкция)

| A     |   B   | A && B |
| ----- | :---: | -----: |
| false | false |  false |
| false | true  |  false |
| true  | false |  false |
| true  | true  |   true |

##### Оператор за логическо събиране(дизюнкция)

| A     |   B   | A \|\| B |
| ----- | :---: | -------: |
| false | false |    false |
| false | true  |     true |
| true  | false |     true |
| true  | true  |     true |

##### Оператор за логическо отрицание

| A     | not A |
| ----- | ----: |
| false | false |
| true  | false |

Нека сме дефинирали:
```c++
    bool x = true; // може да се запише bool x = 1;
    bool y = false; // може да се запише bool y = 0; 
```
| Оператор  |                 Действие                 |                Пример |
| --------- | :--------------------------------------: | --------------------: |
| && (and)  | връща true само ако и x и y са true, иначе връща false |    x && y връща false |
| \|\| (or) | връща true ако поне едното от x и y е true, връща false само ако и x  и y са false |   x \|\| y връща true |
| ! (not)   |    връща true ако е false и обратното    | !x е false, !y е true |


## Създаване на проект
### Visual Studio 2015
1. Създайте проект, като посочите **New** в менюто **File**, след това кликнете върху **Project**.
2. В прозореца за типове проекти **Visual C++**, изберете **Win32**, след това изберете **Win32 Console Application**.
3. Въведете име на проекта. Може да промените местоположението на проекта, ако желаете. Кликнете **"ОК"** за да създадете проекта.
4. В **Win32 Application Wizard**, кликнете **Next**, изберете **Empty Project**, след това кликнете **Finish**.
5. Ако **Solution Explorer** не се е показал, в менюто **View**, изберете **Solution Explorer**.
6. Добавяне на **source file** в проекта, както следва. В **Solution Explorer**, десен бутон върху папката **Source Files**, посочете **Add**, след това изберете **New Item**.
7. Във файла отворен в редактора напишете валидна C++ програма, която използва стандартната библиотека на C++ или копирайте една от примерните програми и я поставете във файла.
8. Натиснете **Save** за да запазите промените във файла.
9. В менюто **Build**, кликнете върху **Build Solution**.
### Code::Blocks
1. Отворете **Project Wizard** от **File->New->Project** за да създадете **new project**. Тук има много предварително конфигурирани шаблони за различни видове проекти, включително и възможността за създаване на собствени шаблони.
2. Изберете **Console application**, тъй като това е най-често излозваното за общо предназначение, кликнете върху **Go**.
3. **The console application wizard** ще се появи. Продължете през менютата, избирайки **C++** когато ви попита за език. 
4. На следващия екран дайте **име и тип на проекта** и изберете **целева папка**. Code::Blocks ще генерира оставащите неща.
5. Накрая, съветникът ще ви попита дали този проект трябва да използва компилатор по подразбиране (обикновено GCC) и още по подразбиране избира: **Debug** и **Release**. Всички тези настройки са наред. Натиснете **finish** и проекта ще се генерира. 
6. Основният прозорец ще се стане сив, но това не е проблем, **source file** трябва само да се отвори. В **Projects** полето на **Management** вляво разширете папките и кликнете двукратно върху файла **main.cpp** за да го отворите в редактора.
7. Във файла отворен в редактора напишете валидна C++ програма, която използва стандартната библиотека на C++ или копирайте една от примерните програми и я поставете във файла.
8. Натиснете **Save** за да запазите промените във файла.
9. Сега, натискането на F9 трябва да компилира и стартира програмата.
