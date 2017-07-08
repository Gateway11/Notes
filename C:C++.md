[C/C++](www.cppreference.com)
[GNU C](http://www.gnu.org/software/libc/manual/)

    strlen 不计算\0
    sizeof 计算\0
    strchr 查找字符串
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
