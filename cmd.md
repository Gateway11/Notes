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

mm -j8 showcommands

 make -j10 BUILDING_WITH_NINJA=false
repo start master --all

wlan0 -p /data/misc/wifi/sockets add_network
wpa_cli -i wlan0 -p /data/misc/wifi/sockets set_network 0 ssid '"ROKID-SHOW"'
wpa_cli -i wlan0 -p /data/misc/wifi/sockets set_network 0 scan_ssid 1
wpa_cli -i wlan0 -p /data/misc/wifi/sockets set_network 0 key_mgmt WPA-PSK
wpa_cli -i wlan0 -p /data/misc/wifi/sockets set_network     0   psk '"showrokid"' 
wpa_cli -i wlan0 -p /data/misc/wifi/sockets  enable_network   0
wpa_cli -i wlan0 -p /data/misc/wifi/sockets  save_config 

brew install sox
play -c 6 -r 48k -t raw -b 32 -e signed-integer -v -10 -V6 aaa.wav

sudo busybox microcom  /dev/ttyUSB0 -s 115200

sed命令：
http://blog.chinaunix.net/uid-15007890-id-3236130.html  匹配行前后加入一行 
sed -i '/synchronized/a\android.util.Log.e("DX","")' WindowManagerService.java

删除指定字符下一行sed -i '/application/{n;d}' ./*/AndroidManifest.xml
git commit --amend
android:persistent="true"
