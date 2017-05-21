### GNU工具链
	
	x86			sudo apt-get install gcc g++ gcc-doc
	arm			sudo apt-get install gcc-arm-linux-gnueabi
	Web.		http://www.linaro.org/downloads/
	
	addr2line	把程序地址转换为文件名和行号
	ar			建立，修改，提取归档文件
	as			主要用来编译GNU C编译器gcc输出的汇编文件
	ld			GNU链接器
	nm			列出目标文件中的符号
	objcopy		文件格式转换(arm-linux-objcopy --gap-fill=0xff binary u-boot u-boot.bin)
	objdump		显示一个或更多目标文件的信息，主要用来反编译
	ranlib		产生归档文件索引，并将其保存到这个归档文件中
	readelf		显示elf格式可热行文件的信息(readelf -h rm)
	size		列出目标文件每一段的大小以及总体大小
	strings		打印某个文件可打印字符串
	strip		丢弃目标文件中的全部或特定符号，减小文件体积
