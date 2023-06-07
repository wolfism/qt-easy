<p align="right">
  <a href="./README.md">English</a> | <b>中文</b>
</p>

# qt-easy

## 描述

qt-easy是一个项目，提供了使用cmake和qmake创建Qt应用程序的示例和模板。它还包含了一些可以在Qt项目中使用的常用功能和组件，比如socket, http, dbus, serial port, database等。

这个项目的动机是帮助Qt开发者快速开始和管理他们的项目，以及学习一些使用Qt的最佳实践和技巧。该项目还旨在演示如何使用不同类型的子项目，比如动态库、静态库、插件等。

## 目录

- [安装](#安装)
- [使用](#使用)
- [贡献](#贡献)
- [许可](#许可)

## 安装

要使用这个项目，你需要在你的系统上安装Qt。你可以从官方网站下载Qt：https://www.qt.io/download

你还需要在你的系统上安装cmake或qmake。你可以从官方网站下载cmake：https://cmake.org/download

要克隆这个项目，你可以使用以下命令：
````
git clone https://github.com/<your-username>/qt-easy.git
````

## 使用

要构建和运行这个项目，你可以使用cmake或qmake。

如果你使用cmake，你可以按照以下步骤：

- 创建一个构建目录并进入它：
````
mkdir build && cd build
````

- 使用cmake生成Makefile：
````
cmake …
````

- 使用make构建项目：
````
make
````

- 运行可执行文件：
````
./qtappdemo/qtappdemo
````

如果你使用qmake，你可以按照以下步骤：

- 进入qt-easy目录：
````
cd qt-easy
````

- 使用qmake生成Makefile：
````
qmake qt-easy.pro
````

- 使用make构建项目：
````
make
````

- 运行可执行文件：
````
./qtappdemo/qtappdemo
````

## 贡献

我们欢迎任何形式的贡献，无论是报告问题、提出功能、提交代码、更新文档，还是提供反馈。请阅读我们的[CONTRIBUTING.md](CONTRIBUTING.md)文件，了解更多关于如何贡献的细节。

## 许可

这个项目使用ISC许可证。请查看[LICENSE](LICENSE)文件了解更多信息。