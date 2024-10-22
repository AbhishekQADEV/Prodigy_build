# algorithms
A open-source repository of different kinds of C algorithms. Newbies are encouraged to contribute! This is an ideal project for beginners who are looking to participate in open-source coding. It includes various algorithms for sorting and search operations written in the C programming language.

## Getting Started

To get started with this project, you need to have `GCC` compiler installed in your system to compile and run C programs. 

For Mac users, [Homebrew](https://brew.sh/) or [XCode](https://developer.apple.com/xcode/) can be used to manage and install GCC. 

For Windows users, [MinGW-w64](http://mingw-w64.org/doku.php) or [Cygwin](https://cygwin.com/install.html) can be used to install GCC.

After successful installation, GCC can be called from the command line using `gcc`.

## Installation for Mac

Open Terminal and confirm if gcc is already installed: 
```
gcc --version
```

If not installed, You can install GCC using `Homebrew` by running:
```
/usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"
brew install gcc
```

## Installation for Windows

Download MinGW-w64 from [MinGW-w64 Project Page](https://mingw-w64.org/doku.php) or Cygwin from [Cygwin Project Page](https://cygwin.com/install.html).

### Running locally

To run the code locally, simply run the following command from the root directory:

```
gcc -o outputfile filename.c
```
Here replace 'outputfile' with the name you wish to give to your executable and replace 'filename' with the name of the C file you wish to compile. Then run the output file using:
```
./outputfile
```
## Deployment

The steps for deploying the code to a CI/CD pipeline would depend on the particular pipeline chosen, and out of the scope of this readme. The algorithms in this repository mainly being small individual modules, usual deployment steps for large applications don't strictly apply here. 

## Contribution

For detailed contribution guidelines, please refer to the CONTRIBUTING.md file in the project root.
