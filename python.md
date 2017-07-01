#!/usr/bin/env python

#### if

    x = 10
    if 10 % 2 == 0 :
        print id(x)

    s = "hello"
    if s == "hello" :
        print s * 5

    s = 'hello world'
    if 'world' in s :
        print type(s)

    li = list("hello world")
    if "l" in li :
        if li.count("o") > 2 :
            print len(s)

    b = {'a' : 12, 'b' : 13, 'c' : 14}
    dk = b.keys()
    dv = b.values()
    for i in dk :
        if i == 'b'
            print dv[i], i
        elif i == 'c' :

#### or and !
#### 循环

    i = 1
    while < 5 :
        print i
        i = i + 1
#### 转义
    
    print "hello\"\"world"

#### 字符串

    print "I am {}, hello world".format("Kevin")

from file import demo
__init__.py
if __name__ == '__main__' 是否为主文件
__file__                  当前文件路径
__doc__                   当前文件描述

#### 函数

    默认参数
    def test(arg1, arg2='xxxx', arg3='xxxx')：
    可变参数
        包装成列表(*)
        def test(*args)
        test(arg1, arg2, arg3)
        包装成字典(**)
        def test(**args)
        test(key, value)
        def test(**args)

    try:
        file = open(xxxx)
    finally:
        file.close()
    with open(xxxx) as f:
    
    yield&next
        yield在函数执行到这一步立即返回
        next接上上一次yidld的地方继续执行

#### 三目运算
    res = 'True' if 1 > 3 else 'False'

#### lambda表达式
    temp = lambda x,y: x+y//相当于定于一个匿名函数
    print temp(4,4)

    def temp(arg1):
        return arg1 + 100
    map(temp, [11,22,33])//map遍历这个列表，然后把每一个参数传给这个temp函数
    map(lambda x:x**x, range(10))

#### 内置函数
    a = []
    help(a)//显示帮助
    dir()//列出这个文件中的所有方法名key
    vars()//列出这个文件中的所有方法名key value
    type(a)
    import temp
    reload(temp)
    id()//显示内存地址
