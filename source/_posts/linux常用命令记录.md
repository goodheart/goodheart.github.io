title: linux常用命令记录
date: 2015-09-18 09:58:04
tags:
---
## 当我们执行sudo 的时候，出现XX is not in the sudoers file.  This incident will be reported.解决方法如下:
``` bash
root@LECLOUD:~# cd /etc/
root@LECLOUD:/etc# ls -l sudoers
-r--r----- 1 root root 745 Aug 28  2014 sudoers //此时sudoers文件可读不可写
root@LECLOUD:/etc# chmod u+w /etc/sudoers //赋予用户写权限
root@LECLOUD:/etc# ls -l sudoers
-rw-r----- 1 root root 745 Aug 28  2014 sudoers
root@LECLOUD:/etc# vim sudoers
//在#User privilege specification下面加一行XX ALL=(ALL:ALL) ALL
root@LECLOUD:/etc# ls -l sudoers  
-rw-r----- 1 root root 767 Sep 18 09:49 sudoers
root@LECLOUD:/etc# chmod u-w sudoers //删掉写权限，变成只读文件
root@LECLOUD:/etc# ls -l sudoers
-r--r----- 1 root root 767 Sep 18 09:49 sudoers
```
## 当使用vim编译一个只读文件的时候，可以使用以下命令强制保存修改
``` bash
:w !sudo tee %
```
