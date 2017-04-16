# Linux 系统编程-基本命令

more [OPTION] FILE…查看文本文件的内容，屏幕显示完一屏就等待用户按下任意键再滚动到下一屏

less [OPTION] FILE…查看文本文件的内容，屏幕显示完一屏就等待用户按键，用户可以向上或向下查看

head 显示指定文件的前面几行

	head -5 file1

tail 显示文件的最后几行

	tail -5 file1

硬链接：ln hello word_h
软链接：ln -s hello word_s

tree 这个命令需要下载安装，ubuntu下sudo apt-get install tree按结构树的形状显示目录和文件

wc 指令我们可以计算文件的 Byte 数、字数、或是列数,若不指定文件名称、或是所给予的文件名为“-”,则 wc 指令会从标准输入设备读取数据。

	wc -l ./*
	-c 或–bytes 或–chars 只显示 Bytes 数。
	-l 或–lines 只显示列数。
	-w 或–words 只显示字数。
	
du 查看某个目录的大小，以M为单位

df 查看磁盘使用情况

whoami 查看当前登陆用户

chown

	$ sudo chown system:system file1
	-R 递归式地改变指定目录及其下的所有子目录和文件的属组。

grep

	-c：只输出匹配行的计数。
	-I：不区分大小写（只适用于单字符）。
	-h：查询多文件时不显示文件名。
	-l：查询多文件时只输出包含匹配字符的文件名。
	-n：显示匹配行及行号。
	-s：不显示不存在或无匹配文本的错误信息。
	-v：显示不包含匹配文本的所有行。
	-R: 连同子目录中所有文件一起查找。

更新源服务器列表sudo vi /etc/apt/sources.list

	sudo apt-get update 					  	更新源
	sudo apt-get install package 			  	安装包
	sudo apt-get install package --reinstall 	重新安装包
	sudo apt-get -f install 				  	修复安装
	sudo apt-get upgrade 						更新已安装的包
	sudo apt-get remove package 				删除包
	sudo apt-cache search package 				搜索软件包
	sudo apt-get remove package --purge 		删除包，包括配置文件等
	sudo apt-cache show package 				获取包的相关信息，如说明、大小、版本等
	sudo apt-get build-dep package 				安装相关的编译环境
	sudo apt-get dist-upgrade 					升级系统
	sudo apt-cache depends package 				了解使用该包依赖那些包
	sudo apt-cache rdepends package 			查看该包被哪些包依赖
	sudo apt-get source package 				下载该包的源代码
	sudo apt-get clean && sudo apt-get autoclean清理无用的包
	sudo apt-get check 							检查是否有损坏的依赖
	
deb包安装

	sudo dpkg -i xxx.deb			安装deb软件包命令
	sudo dpkg -r xxx.deb			删除软件包命令
	sudo dpkg -r --purge xxx.deb	连同配置文件一起删除命令
	sudo dpkg -info xxx.deb			查看软件包信息命令
	sudo dpkg -L xxx.deb			查看文件拷贝详情命令
	sudo dpkg -l					查看系统中已安装软件包信息命令
	sudo dpkg-reconfigure xxx		重新配置软件包命令

vim ∼/.bashrc配置当前用户环境变量

关机重启

poweroff shutdown

	shutdown -t 秒数 [-rkhncfF] 时间 [警告讯息]
	-t 秒数 : 设定在切换至不同的runlevel之前, 警告和删除二讯号之间的延迟时间(秒).
	-k : 仅送出警告讯息文字, 但不是真的要 shutdown.
	-r : shutdown 之後重新开机.
	-h : shutdown 之後关机.
	-n : 不经过 init , 由 shutdown 指令本身来做关机动作.(不建议你用)
	-f : 重新开机时, 跳过 fsck 指令, 不检查档案系统.
	-F : 重新开机时, 强迫做 fsck 检查.
	-c : 将已经正在 shutdown 的动作取消.

例子:

	shutdown -r now 立刻重新开机
	shutdown -h now 立刻关机
	shutdown -k now 'Hey! Go away! now....' 发出警告讯息, 但没有真的关机
	shutdown -t3 -r now 立刻重新开机, 但在警告和删除processes 之间, 延迟3秒钟.
	shutdown -h 10:42 'Hey! Go away!' 10:42 分关机
	shutdown -r 10 'Hey! Go away!' 10 分钟後关机
	shutdown -c 将刚才下的 shutdown 指令取消