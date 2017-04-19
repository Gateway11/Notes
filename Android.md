# Andriod.mk

#### if语句集

	ifeq (a, b)
		。。。 。。。
	else ifeq (a, b)
		。。。 。。。
	else ifneq (a, b)
		。。。 。。。
	endif
	
	ifdef a
		。。。 。。。
	endif
	
#### 宏定义

	在Boardconfig.mk中添加一个IS_FLAG := true
	Boardconfig.mk和各目录的Android.mk是相互关联的所以我们可以在Android.mk中添加一个
	ifdef IS_FLAG
           LOCAL_CFLAGS += -DHHHH
           或者
           LOCAL_CPPFLAGS += -DHHHH
	endif
	在Android.mk中添加的这行相当于在C++文件中定义了一个宏#define HHHH

	LOCAL_FINAL_PATH := /system/test  
	LOCAL_CFLAGS += -Wno-unused-parameter -DRESOURCE_DIR="\"$(LOCAL_FINAL_PATH)\"" 
	这样在C++ code里，可以直接使用RESOURCE_DIR，相当于c++的 #define  RESOURCE_DIR "/system/test"， '\'在Android.mk里是转义符  
  
	 
