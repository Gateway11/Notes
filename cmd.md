http://lib.csdn.net/article/c/19311
### MAC

java包反编译工具

    brew cask install jd-gui

brew安装

    ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"

adb remote; adb shell rm -rf system/priv-app/
adb shell rm -rf /system/priv-app/...

jdk1.8下载
    
    http://www.linuxfromscratch.org/blfs/view/svn/general/java.html
    xz -d ...
    tar xvf ...

MM
    mm -j8 showcommands

    make -j10 BUILDING_WITH_NINJA=false
    repo start master --all

WIFI

    wlan0 -p /data/misc/wifi/sockets add_network
    wpa_cli -i wlan0 -p /data/misc/wifi/sockets set_network 0 ssid '"ROKID-SHOW"'
    wpa_cli -i wlan0 -p /data/misc/wifi/sockets set_network 0 scan_ssid 1
    wpa_cli -i wlan0 -p /data/misc/wifi/sockets set_network 0 key_mgmt WPA-PSK
    wpa_cli -i wlan0 -p /data/misc/wifi/sockets set_network     0   psk '"showrokid"' 
    wpa_cli -i wlan0 -p /data/misc/wifi/sockets  enable_network   0
    wpa_cli -i wlan0 -p /data/misc/wifi/sockets  save_config 

brew install sox

    play -c 6 -r 48k -t raw -b 32 -e signed-integer -v -10 -V6 aaa.wav

USB

    sudo busybox microcom  /dev/ttyUSB0 -s 115200

sed命令：

    http://blog.chinaunix.net/uid-15007890-id-3236130.html  匹配行前后加入一行 
    sed -i '/synchronized/a\android.util.Log.e("DX","")' WindowManagerService.java
    删除指定字符下一行sed -i '/application/{n;d}' ./*/AndroidManifest.xml

GIT&REPO

    repo start <branch> --all;
    git commit --amend
    git log -p
    git add -A
    git log --name-status 每次修改的文件列表, 显示状态
    git log --name-only 每次修改的文件列表
    git log --stat 每次修改的文件列表, 及文件修改的统计
    git whatchanged 每次修改的文件列表
    git whatchanged --stat 每次修改的文件列表, 及文件修改的统计
    git show 显示最后一次的文件改变的具体内容
