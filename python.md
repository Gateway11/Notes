#!/usr/bin/env python
//http://www.cnblogs.com/wupeiqi/articles/4276448.html

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
    print map(temp, [11,22,33])//map遍历这个列表，然后把每一个参数传给这个temp函数
    print map(lambda x:x**x, range(10))
    print filter(lambda x:x==1,[1,2,3])//True序列
    print reduce(lambda x,y:x+y, [1,2,3])//累加


#### 内置函数
    a = []
    help(a)//显示帮助
    dir()//列出这个文件中的所有方法名key
    vars()//列出这个文件中的所有方法名key value
    type(a)
    import temp
    reload(temp)
    id()//显示内存地址

xrange
enumerate
s = 'I am {0}'
print s.format('xxxx')

x=[1,2,3]
y=[1,2,3]
z=[1,2,3]
x=[1,2,3]
print zip(x,y,z)以列输出

#### 反射
    a= '8 * 8'
    print eval(a)//字符串相乘

    temp = 'sys'
    model = __import__(temp)//导入字符的lib包
    print model.path

    func = "path"//以字符形式执行函数
    Function = getattr(model, func)
    Function()

    join

#### 正则
    import re
    res = re.match(arg1,arg2,arg3)//只开头匹配,没匹配返回None
    if res :
        print res.group()
    re.search(arg1,arg2,arg3)//整串匹配

#### 装饰器
    def outer(fun):
        def wrapper(arg1)://如果原函数有参数，参数加这
            res = fun()
            return res //如果原函数有返回值，加这
        return wrapper


    
    @outer //回了注解就可以和上面函数联系起来
    def Func1()
        print "func1"

    @outer
    def Func2(arg1)
        print "func2"
        return "asdfads"
    扩展：注解传参

#### Class
    class Province(object)://加括号代表继承object
        memo = 'xxxx'//这是静态字段
        def __init__(self.name, capital, leader):
            //下面全是动态字段
            self.Name = name
            self.Capital = capital
            self.Leader = leader
            self.__thailand = leader//私有字段

        //静态方法，实例十个类，方法只有一份
        @staticmethod
        def Foo()://加python注解变成静态方法，还要去self参数
            print 'xxxx'

        def __sha(self)://两下划线,私有方法
            print "xxxx"

        @property//访问私有字段//只读
        def Thailand(self):
            return self.__Thailand

        @Thailand.setter//可改私有字段
        def Thailand(self, value):
            self.__Thailand = value

    @property//属性注解，不知道有什么用
    sb = Province("arg1", 'arg2', 'arg3')
    print sd.Name //访问动态字段//对象可以访问表态字段
    print Province.memo//访问静态字段
