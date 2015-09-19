title: 在mac上使用github+hexo搭建博客的简单记录
date: 2015-09-17 16:09:00
tags:
---
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 6b3cb3bfb6d9cfafdb720949f927d884a2f2aef3

## hexo的安装
安装nvm(Node Version Manager)
``` bash
curl -o- https://raw.githubusercontent.com/creationix/nvm/v0.26.1/install.sh | bash
或者使用 Wget
wget -qO- https://raw.githubusercontent.com/creationix/nvm/v0.26.1/install.sh | bash
 具体可以参考：https://github.com/creationix/nvm的README.markdown 
```
命令执行界面如下
``` bash
$ curl -o- https://raw.githubusercontent.com/creationix/nvm/v0.26.1/install.sh | bash
% Total    % Received % Xferd  Average Speed   Time    Time     Time  Current
Dload  Upload   Total   Spent    Left  Speed
100  7728  100  7728    0     0  19952      0 --:--:-- --:--:-- --:--:-- 19917
=> Downloading nvm as script to '/home/blog/.nvm'
=> Appending source string to /home/blog/.bashrc
=> You can now start using nvm
```
下一步 使用nvm安装node.js
``` bash
$ ls -a
.  ..  .bash_logout  .bashrc  .nvm  .profile
$ source ~/.nvm/nvm.sh 
$ nvm install 0.10
######################################################################## 100.0%
Now using node v0.10.40 (npm v1.4.28)
```
下一步 安装hexo并检查是否安装成功
``` bash
$ npm install -g hexo
$ hexo --version
<<<<<<< HEAD
=======
=======
>>>>>>> 6b3cb3bfb6d9cfafdb720949f927d884a2f2aef3
### 安装nvm(Node Version Manager)
``` bash
curl -o- https://raw.githubusercontent.com/creationix/nvm/v0.26.1/install.sh | bash
or Wget
  wget -qO- https://raw.githubusercontent.com/creationix/nvm/v0.26.1/install.sh | bash
 具体可以参考：https://github.com/creationix/nvm的README.markdown 
```
 真实界面如下
``` bash
blog@LECLOUD:~$ curl -o- https://raw.githubusercontent.com/creationix/nvm/v0.26.1/install.sh | bash
  % Total    % Received % Xferd  Average Speed   Time    Time     Time  Current
  Dload  Upload   Total   Spent    Left  Speed
  100  7728  100  7728    0     0  19952      0 --:--:-- --:--:-- --:--:-- 19917
   => Downloading nvm as script to '/home/blog/.nvm'
   => Appending source string to /home/blog/.bashrc
   => You can now start using nvm
```
接着使用nvm安装node.js
``` bash
blog@LECLOUD:~$ ls -a
.  ..  .bash_logout  .bashrc  .nvm  .profile
blog@LECLOUD:~$ source ~/.nvm/nvm.sh 
blog@LECLOUD:~$ nvm install 0.10
######################################################################## 100.0%
Now using node v0.10.40 (npm v1.4.28)
```
下一步 安装hexo并检查hexo是否安装成功
``` bash
blog@LECLOUD:~$ npm install -g hexo
blog@LECLOUD:~$ hexo --version
<<<<<<< HEAD
=======
>>>>>>> 6eff09422d44c83e6cf8fbc5371559ac226a773a
>>>>>>> 6b3cb3bfb6d9cfafdb720949f927d884a2f2aef3
hexo-cli: 0.1.8
os: Linux 3.16.0-23-generic linux x64
http_parser: 1.0
node: 0.10.40
v8: 3.14.5.9
ares: 1.9.0-DEV
uv: 0.10.36
zlib: 1.2.8
modules: 11
openssl: 1.0.1p
```
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 6b3cb3bfb6d9cfafdb720949f927d884a2f2aef3

## hexo的使用
创建一个文件夹并初始化blog
``` bash
$ mkdir ~/blog
$ ls -a
.  ..  .bash_logout  .bashrc  blog  .npm  .nvm  .profile
$ cd blog/
$ hexo init
INFO  Copying data to ~/blog
INFO  You are almost done! Don't forget to run 'npm install' before you start blogging with Hexo!
$ ls
_config.yml  package.json  scaffolds  source  themes
```

新建一篇文章
``` bash
$ hexo new "这是一篇测试文章"
INFO  Created: ~/git/blog/source/_posts/这是一篇测试文章.md
```
使用Vim编辑新建的文章,如果vim使用不熟，可以使用[sublime text](/2015/09/18/使用sublime-text写Markdown并预览/)工具
``` bash
$ vim source/_posts/这是一篇测试文章.md 
```
使用Markdown编写文章,可参考[Markdown学习记录](/2015/09/19/Markdown学习记录/)   
文章写完之后，使用:wq退出并保存文章
生成html文件,就会在/blog/public文件夹下边生成相应的代码,之后部署到github的就是public里面的文件
``` bash
$ hexo generate
INFO  Files loaded in 81 ms
INFO  Generated: js/script.js
INFO  Generated: fancybox/jquery.fancybox.pack.js
INFO  Generated: fancybox/jquery.fancybox.js
INFO  Generated: fancybox/jquery.fancybox.css
............
```
如果执行hexo generate之后public目录下文件如下,没有文章的静态页面：
``` bash
$ cd public/
$ ls
css		fancybox	js
```
我是执行npm install之后成功生成了文章的静态页面
``` bash
$ npm install
enerator-tag@0.1.2 node_modules/hexo-generator-tag
├── object-assign@2.1.1
└── hexo-pagination@0.0.2 (utils-merge@1.0.0)
...............
$ hexo g
INFO  Files loaded in 1.99 s
$ cd public/
$ ls
2015  archives  css  fancybox  index.html  js
```
在部署之前希望预览一下
``` bash
$ hexo server
INFO  Hexo is running at http://0.0.0.0:4000/. Press Ctrl+C to stop.
```
如果出现错误，可能是hexo server这个命令没有安装,可以用下面这个命令解决，然后再执行上面的hexo server命令.hexo-server的[帮助页面](https://hexo.io/docs/server.html),

``` bash
$ npm install hexo-server --save
```
同时同步到github和gitcafe
<<<<<<< HEAD
=======
=======
>>>>>>> 6b3cb3bfb6d9cfafdb720949f927d884a2f2aef3
下一步 创建一个文件夹并初始化blog
``` bash
blog@LECLOUD:~$ mkdir ~/blog
blog@LECLOUD:~$ ls -a
.  ..  .bash_logout  .bashrc  blog  .npm  .nvm  .profile
blog@LECLOUD:~$ cd blog/
blog@LECLOUD:~/blog$ hexo init
INFO  Copying data to ~/blog
INFO  You are almost done! Don't forget to run 'npm install' before you start blogging with Hexo!
blog@LECLOUD:~/blog$ ls
_config.yml  package.json  scaffolds  source  themes
blog@LECLOUD:~/blog$ 
```
### 同时同步到github和gitcafe
<<<<<<< HEAD
=======
>>>>>>> 6eff09422d44c83e6cf8fbc5371559ac226a773a
>>>>>>> 6b3cb3bfb6d9cfafdb720949f927d884a2f2aef3
``` bash
deploy:
  type: git
  repo: 
        github: https://github.com/goodheart/goodheart.github.io.git,master
        gitcafe: https://gitcafe.com/goodheart/goodheart.git,gitcafe-pages 
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 6b3cb3bfb6d9cfafdb720949f927d884a2f2aef3
```
如果出现ERROR Deployer not found: git,可以使用下面的命令解决,
=======
plugins:
```
如果出现ERROR Deployer not found: git
<<<<<<< HEAD
=======
>>>>>>> 6eff09422d44c83e6cf8fbc5371559ac226a773a
>>>>>>> 6b3cb3bfb6d9cfafdb720949f927d884a2f2aef3
``` bash
$ npm install hexo-deployer-git --save
https://hexo.io/docs/deployment.html
```
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 6b3cb3bfb6d9cfafdb720949f927d884a2f2aef3
注意：关闭terminal之后再次使用hexo可能无法使用，处理方法如下
``` bash
hexo: command not found
$ nvm use 0.10
Now using node v0.10.40 (npm v1.4.28)
$ hexo --version
<<<<<<< HEAD
=======
=======
>>>>>>> 6b3cb3bfb6d9cfafdb720949f927d884a2f2aef3
#### 注意：关闭terminal之后再次使用hexo可能无法使用，处理方法如下
``` bash
hexo: command not found
blog@LECLOUD:~/blog$ nvm use 0.10
Now using node v0.10.40 (npm v1.4.28)
blog@LECLOUD:~/blog$ hexo --version
<<<<<<< HEAD
=======
>>>>>>> 6eff09422d44c83e6cf8fbc5371559ac226a773a
>>>>>>> 6b3cb3bfb6d9cfafdb720949f927d884a2f2aef3
hexo: 3.1.1
os: Linux 3.16.0-23-generic linux x64
http_parser: 1.0
node: 0.10.40
v8: 3.14.5.9
ares: 1.9.0-DEV
uv: 0.10.36
zlib: 1.2.8
modules: 11
openssl: 1.0.1p
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 6b3cb3bfb6d9cfafdb720949f927d884a2f2aef3
```
## hexo换主题
进入blog/themes/文件夹
``` bash 
$ cd ./themes/
$ ls
landscape	light		next
```
目前我下载了light和next主题，landscape主题是默认的
可以在[github](https://github.com/search?utf8=%E2%9C%93&q=hexo-theme)或[hexo](https://hexo.io/themes/)或网上找，大部分主题安装也简单：
``` bash
$ cd ./themes/
$ git clone https://github.com/iissnan/hexo-theme-next.git next
Cloning into 'next'...
remote: Counting objects: 3485, done.
remote: Total 3485 (delta 0), reused 0 (delta 0), pack-reused 3484
Receiving objects: 100% (3485/3485), 9.00 MiB | 16.00 KiB/s, done.
Resolving deltas: 100% (1832/1832), done.
Checking connectivity... done.
```
最好给主题用个简单的名字，比如hexo-theme-next直接用next,设置时简单方便好记
接下来修改 _confit.yml文件,然后重新执行hexo generate即可

``` bash
# Extensions
## Plugins: http://hexo.io/plugins/
## Themes: http://hexo.io/themes/                                           
#theme: landscape
#theme: light
theme: next
```

## hexo 安装插件
 可以在hexo看到[插件列表](https://hexo.io/plugins/),希望了解某个插件的安装、使用等，点击该插件则会进入对应的github页面,详读对应的README即可，此处省略
<<<<<<< HEAD
```
=======


=======
blog@LECLOUD:~/blog$ 
```
>>>>>>> 6eff09422d44c83e6cf8fbc5371559ac226a773a
>>>>>>> 6b3cb3bfb6d9cfafdb720949f927d884a2f2aef3
