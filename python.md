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

