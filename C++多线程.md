std::thread(fun, std::ref(data))        //传引用
std::accumulate(first,last,result);     //求和
std::distance(first,last);              //等同(last -= first)
std::advance(first, last);              //等同(first += last)
std::min(hardware_threads != 0 ? hardware_threads : 2, max_threads);    //求最小值
std::thread::id
std::thread::type
std::this_thread::get_id()
get_id()

提供std::adopt_lock参数除了表示std::lock_guard对象可获取锁之外，还将锁交由std::lock_guard对象管理，而不需要std::lock_guard对象再去构建新的锁
std::lock(lhs.m,rhs.m); // 1
std::lock_guard<std::mutex> lock_a(lhs.m,std::adopt_lock); // 2
std::lock_guard<std::mutex> lock_b(rhs.m,std::adopt_lock); // 3

std::condition_variable     
std::async              //异步任务https://github.com/xiaoweiChen/Cpp_Concurrency_In_Action/blob/master/content/chapter4/4.2-chinese.md

有件事需要注意，当把函数对象传入到线程构造函数中时，需要避免“最令人头痛的语法解析”(C++’s most vexing parse, 中文简介)。如果你传递了一个临时变量，而不是一个命名的变量；C++编译器会将其解析为函数声明，而不是类型对象的定义。

例如：

std::thread my_thread(background_task());
这里相当与声明了一个名为my_thread的函数，这个函数带有一个参数(函数指针指向没有参数并返回background_task对象的函数)，返回一个std::thread对象的函数，而非启动了一个线程。

使用在前面命名函数对象的方式，或使用多组括号①，或使用新统一的初始化语法②，可以避免这个问题。

如下所示：

std::thread my_thread((background_task()));  // 1
std::thread my_thread{
    background_task()};    // 2
}
