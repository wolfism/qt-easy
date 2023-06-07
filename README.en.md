<p align="right">
  <b>English</b> | <a href="./README_zh.md">中文</a>
</p>

# qt-easy

## Description

qt-easy is a project that provides examples and templates for creating Qt applications with cmake and qmake. It also includes some common functions and components that can be used in Qt projects, such as socket, http, dbus, serial port, database, etc.

The motivation of this project is to help Qt developers to quickly start and manage their projects, and to learn some best practices and tips for using Qt. The project also aims to demonstrate how to use different types of sub-projects, such as dynamic library, static library, plug-in, etc.

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Installation

To use this project, you need to have Qt installed on your system. You can download Qt from the official website: https://www.qt.io/download

You also need to have cmake or qmake installed on your system. You can download cmake from the official website: https://cmake.org/download

To clone this project, you can use the following command:
````
git clone https://github.com/<your-username>/qt-easy.git
````

## Usage

To build and run this project, you can use either cmake or qmake.

If you use cmake, you can follow these steps:

- Create a build directory and enter it:
````
mkdir build && cd build
````

- Generate the Makefile with cmake:
````
cmake …
````

- Build the project with make:
````
make
````

- Run the executable file:
````
./qtappdemo/qtappdemo
````

If you use qmake, you can follow these steps:

- Enter the qt-easy directory:
````
cd qt-easy
````

- Generate the Makefile with qmake:
````
qmake qt-easy.pro
````

- Build the project with make:
````
make
````

- Run the executable file:
````
./qtappdemo/qtappdemo
````

## Contributing

We welcome any kind of contribution to this project, whether it is a bug report, a feature request, a code submission, a documentation update, or a feedback. Please read our [CONTRIBUTING.md](CONTRIBUTING.md) file for more details on how to contribute.

## License

This project is licensed under the ISC License. See the [LICENSE](LICENSE) file for more information.

