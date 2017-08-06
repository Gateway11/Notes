[C/C++](www.cppreference.com)
[C++源码](http://www.cplusplus.com/reference/)
[GNU C](http://www.gnu.org/software/libc/manual/)

    strlen 不计算\0
    sizeof 计算\0
    strchr 查找字符
    strstr 查找字符串
    strtok 分解字符串
        p = strok(str, " ");
        while(p = strtok(NULL, " ")){
            printf("%s", p);
        }
    char* str = "hello world";   存放在只读区
    char* str[2] = {"hello", "world"};存放在只读区
    char str[][6] = {"hello", "world"};存放在栈区
    char *p[10]     p+1加4个字节
    char (*p)[20]   p+1加20个字节
    typedef char* NEWTYPE  
    define NEWTYPE char*  宏只是替换
    strcmp
    strncmp
    strcat 拼接字符串
    strncat

	atoi(char*) 字符串转换成int
	同上
	stof()、atoi()、atol()、strtod()、strtol()、strtoul()、atoll()、strtof()、strtold()、strtoll()、strtoull()
	
	Test::Test () : m_working(false), m_leds(0), m_thread(0), m_sharedBuf(0), m_cblk(0) {
	}
    int snprintf(char *str, size_t size, const char *format, ...)将可变个参数(...)按照format格式化成字符串，然后将其复制到str中

	#if (true)
		#warning "adfadsfa"
	#else
		#warning "adfadsfa"
	#endif

### 可变参数
    template<typename T>
    void show_str(const T& value){
        cout << value << "\n";
    }

    template<typename T, typename... Args>
    void show_str(const T& value, const Args&... args){
        cout << value << ", ";
        show_str(args...);
    }

    int main(){
        show_str(1, 3, "dafasd", "dsafasdfasdf", 3.4352435);
        return 0;
    }

### struct  **四字节对齐**

    struct stu a = {attr1, attr2, attr3}

### C++ 模板

    template < class T>
    T test(T a, T b){
        return a + b;
    }

    const成员必须用初始化列表赋值
    class A{
        public:
            const int i;
            A:i(100){}
            A(i = 100){} 缺省值
            A(const A &it){//拷贝构造函数
                i = it.i;
            }
    }
    
    **通过指针偏移来访问类的私有成员**
    class A{
        public:
            int age = 10;
        private :
            int name = 9;
    };
    
    A get(){
        A a;
        return a;
    }
    
    int main(){
        A a = get();
        printf("%p\n", &a);
        printf("%d\n", *(int*)&a);
        printf("%d\n", *(int *)((char*)&a + 4));
        return 0;
    }

    **单例**
    class A{
        public:
            static A* make();
            static void release();
        protected:
            A();
        private :
            static A *p;
    };
    
    A::A(){}
    A *A::p = NULL;
    A* A::make(){
        if(!p){
            p = new A;
        }
        return p;
    }
    void A::release(){
        if(p){
            delete p;
            p = NULL;
        }
    }
    int main(){
        A *p = A::make();
        A::release();
        return 0;
    }

### 类型转换

    static_cast 基础数据转换
    const_cast  去掉const标签
    reinterpret_cast 不同类型指针之间转换
    dynamic_cast 字父类之间转换

### using

    template<class T> using ptr = T*; //模板的简写

### 模板元(解决递归问题, 编译期循环)
    template<int N>
    struct data
    {
        enum{res = data<N-1>::res+data<N-2>::res};
    };
    template<>
    struct data<1>
    {
        enum{res  = 1};
    };
    template<>
    struct data<2>
    {
        enum{res = 2};
    };

    int main(void){
        int num = data<45>::res;
    }

### thread

    incluce <thread>
    auto n = thread::hardware_concurrency();  //获取系统系统个数

    thread thread1(函数指针);
    thread1.join();

### 函数别名

    myclass _myclass;
    void(myclass::*_fun)() = &_myclass::fun;

    mutabel  const的反义词
    bindlist绑定函数包装器

### STL容器
    array   数组，不可变长，栈上存储
    vector  数组，堆上，有序
    list    链表，有序(int a[] = {1,2,3,3,5};    list<int> lists(a, a+5);)
    set     红黑树，无序，自动排序，不可以有重复过犹元素
    multiset红黑树中的每个元素是链表

### 比较器
    class strcmp{
        public:
            bool operator()(const string &str1, const string &str2){
                return str1 < str2; 
            }
    }
    string strs[] = {"hello", "world"};
    set<int, strcmp> set(strs, strs + 2, strcmp());
