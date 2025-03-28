## 数据类型
```
char
short
int
long
long long
float
double
```
- 为什么出现这些类型
- 每种类型的大小是多少

## 字节
计算机中的单位
- bit -比特位-一个比特位存放一个二进制位 0|1
- byte -字节-存放8个比特位
- kb -1024b
- mb -1024kb
- gb -1024mb
- tb -1024gb
- pb -1024tb

$$
123 = 1\times10^2+2\times10^1+3\times10^0=1\times2^6+1\times2^5+1\times2^4+1\times2^3+0\times2^2+0\times2^1+1\times2^0
$$

## 全局变量与局部变量
1. 局部变量的作用域时变量所在的局部范围
2. 全局变量的作用域时整个工程
3. 局部变量与全局变量冲突时，以局部变量为优先

## 常量
- 字面常量
- const 修饰的常量
- #define定义的标识符常量
- 枚举常量

## 字符串+转义字符+注释
### 字符串

```
"hello bit.\n"
```
```
""  //空字符串
```
这种由双引号引起来的一串字符称为字符串字面值，或简称字符串。
注：字符串的结束标志是一个\0的转义字符。在计算字符串长度的时候\0是结束标志，不算作字符串内容。

### 转义字符
```
\? 
\' 表示字符常量'
\" 用于表示一个字符串内部的双引号
\\ 用于表示一个反斜杠，防止它被解释为一个转义序列符
\a 警告字符，蜂鸣
\b 退格符
\f 进纸符
\n 换行
\r 回车
\t 水平制表符
\v 垂直制表符
\ddd 一到三个8进制数字
\xdd 一到两个16进制数字
```
### 注释
```
/*
注释内容
*/
```
注释内容无法嵌套

整段内容注释方法
```
crtl + k, crtl + c  //添加注释
crtl + k, crtl + u  //删去注释
```

## 操作符

### 算术操作符
```
+ - * / %
```

### 位移操作符
```
>> <<
```

### 位操作符
```
& ^ |
```

### 赋值操作符
```
= += -= *= /= &= ^= |= >>= <<=
```

### 单目操作符
```
!  逻辑反操作
-  负值
+  正值
&  取地址
sizeof  操作数的类型长度(以字节为单位)
~  对一个数的二进制按位取反
--  前置、后置--
++  前置、后置++
*  间接访问操作符(解引用操作符)
(类型)  强制类型转换
```

### 关系操作符
```
>
>=
<
<=
!=  不相等
==  相等
```

### 逻辑操作符
```
&&  逻辑与  //和位操作符不同
||  逻辑或
```

### 条件操作符
```
exp1 ? exp2 : exp3
//表达式1为真则exp2的值即为整个表达式的值，否则则为exp3
```

### 逗号表达式
```
exp1, exp2, exp3, ...expN
整体表达式的值为最后一个表达式的值
```

## 常用关键字
```
auto break case char const continue default do double else enum 
extern float goto if int long register return short signed
sizeof static struct switch typedef union unsigned void volatile while
```

## if语句
```
if(表达式)
    语句;

if(表达式)
    语句1;
else
    语句2;

if(表达式)
    语句1;
else if(表达式2)
    语句2;
else 
    语句3;

#include <stdio.h>
int main()
{
    if(表达式)
    {
        语句列表1;
    }
    else
    {
        语句列表;
    }
    return 0;
}
```
## for循环
```
for(表达式1; 表达式2; 表达式3)
    循环语句;
表达式1 - 初始化部分 - 用于初始化循环变量
表达式2 - 条件判断部分 - 用于判断条件循环何时终止
表达式3 - 调整部分 - 用于循环条件的调整
第一步为初始化
第二步为条件判断
第三步为进行循环语句
第四步为调整部分(不会被continue跳过)
```
tips
- 不可在for循环体内修改循环变量，放置for循环失去控制
- 建议for语句的循环控制变量的取值采用"前闭区间后开区间"写法
- for循环的初始化、调整、判断都可以省略 - for循环的判断条件如果被省略就是恒为真

## do...while循环
```
do
{
    循环语句
}
while(条件判断)
循环至少执行1次
```

## 函数
C语言中函数的分类：
1. 库函数
2. 自定义函数

### 库函数
- IO函数
- 字符串操作函数
- 字符操作函数
- 内存操作函数
- 时间/日期函数
- 数学函数
- 其他库函数

### 自定义函数
```
ret_type fun_name(paral, *)
{
    statement;
}
ret_type 返回类型
fun_name 函数名
paral    函数参数
```
#### 实际参数(实参)
真正传给函数的参数叫实参。实参可以是：常量、变量、表达式、函数等。无论实参是何种类型的量，在进行函数调用时，它们都必须有确定的值，以便把这些值传送给形参。

#### 形式参数(形参)
形式参数是指函数名后括号中的变量，因为形式参数只有在函数被调用的过程中才实例化(分配内存单元),所以叫形式参数。形式参数当函数调用完成之后就自动销毁了。因此形式参数只有在函数中有效。

tips:
当实参传给形参的时候，形参其实是实参的一份临时拷贝。

### 函数调用

#### 传值调用
函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参。

#### 传址调用
- 传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式。
- 这种传参方式可以让函数和函数外边的变量建立起真正的联系，也就是函数内部可以直接操作函数外部的变量。

#### 嵌套调用
#### 链式访问

```
printf("%d", printf("%d", printf("%d", 43)));
Answer = 4321
```